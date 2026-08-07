/*
	WELCOME TO TEST TUBE THE UNICORN'S UNIT RANDOMIZATION FUNCTION
	
	AUTHOR & LINKS
Test Tube - https// steamcommunity.com/id/eliteguy94/ - https// steamcommunity.com/id/eliteguy94/myworkshopfiles/ - Discord: tesOCIbe
	
	MODIFIED BY: Salmon 8/5/2026
	
	Feel free to shoot me a message if you need help with the function.
	
	WHAT IT DOES
	This function is for randomizing the look of your Arma 3 soldiers. It randomizes the hat, facewear, uniform, and vest. Good for irregulars, or factions that have uniforms with rolled sleeves variants. The main difference with this function compared to other uniform and vest randomizers I've seen is that mine preserves items in the vest and uniform, and is dynamically disabled in the event the unit's loadout is modified by a mission author, or if randomization is disabled in the mission config. Implementation is as simple as listing what equippables you want to randomize with; no need to write out multiple full loadout arrays.
	
	It's intended to be used on init as part of a faction mod, but it can also, in theory at least, be used in 3DEN if you really want to.
	
	The randomization of goggles does not take into account which helmet is being worn, so you might end up with a guy who has 2 pairs of goggles, or a balaclava clipping into a beanie hat. if that bothers you, you should still be able to use the vanilla BIS headgear randomization function alongside this one, just call them both and only enter vests and uniforms for this function. The function checks for the arrays existing before pulling them so you can just omit the hat & facewear arrays entirely.
	
	HOW to USE
	Call it on "init" and "respawn" in the event handler class just like the BIS one. The function searches for 4 weighted arrays: OCI_Hats[], OCI_Glasses[], OCI_Uniforms[], and OCI_Vests[]. Enter your desired items for randomization in these. You can leave them empty, too; in that case that slot won't be randomized.
	
	For hats and glasses, you can use "None" in the arrays to have a chance to have no hat or glasses at all.
	
	I heavily advise that you equip the soldier with the vest and uniform that has the lowest "load" attribute (in "uniformClass" and "linkedItems[]"), because if the function replaces it with an item with lower load than was originally equipped, some of the items in the inventory may be lost.
	
	Example config:
	
	class B_Soldier_base_F;
	class B_Soldier_F : B_Soldier_base_F {
		class EventHandlers;
	};
	class B_Soldier_Randomized_F : B_Soldier_F {
		OCI_Hats[] = {
			H_HelmetB, 3, 
			H_HelmetB_black, 1, 
			H_HelmetB_camo, 1, 
			H_HelmetB_desert, 1, 
			H_HelmetB_grass, 1, 
			H_HelmetB_sand, 1, 
			H_HelmetB_snakeskin, 1
		};
		OCI_Glasses[] = {
			None, 4, 
			G_Combat, 12, 
			G_Aviator, 4, 
			G_Bandanna_khk, 2, 
			G_Shades_Black, 1, 
			G_Shades_Blue, 1, 
			G_Shades_Green, 1, 
			G_Shades_Red, 1, 
			G_Squares_Tinted, 2, 
			G_Squares, 1
		};
		OCI_Uniforms[] = {
			U_B_CombatUniform_mcam, 3, 
			U_B_CombatUniform_mcam_tshirt, 2, 
			U_B_CombatUniform_mcam_vest, 3
		};
		OCI_Vests[] = {
			V_PlateCarrier1_rgr, 1, 
			V_PlateCarrier2_rgr, 1
		};
		OCI_Packs[] = {
			B_FieldPack_oli, 1, 
			B_FieldPack_khk, 1
		};
		class EventHandlers : EventHandlers {
			class Randomize {
				init = "if (local (_this # 0)) then {
					(_this # 0) call OCI_fnc_RandomizeGear;
				};";
				respawn = "if (local (_this # 0)) then {
					(_this # 0) call OCI_fnc_RandomizeGear;
				};";
			};
		};
	};
	
	TERMS OF USE
	You're free to include this function as part of your mod, just make sure you credit me (Test Tube) in the Steam workshop description. Links to my Steam profile or workshop page (see above) appreciated but not required. Adding me as a contributer isn't necessary but if you want to, just shoot me a message about it and I'll accept the request.
	
	Do not modify the file directly (especially do not modify the AUTHOR section), but you're free to use it as inspiration for your own randomization functions (much of this file is inspired from the BIS function, after all). Copy/paste sections of it if you want to, but don't leave my TTU tag on anything in your own functions or scripts. I've added some comments to the code to explain the process behind it for learning purposes.
	
	CHANGELOG
	14/10/2025 : Added ability to randomize backpacks
	6/8/2026 : Disabled saved3DENInventory check (Eden marks it true for every placed unit by default now, blocking all randomization)
*/

params [
	["_unit", objNull, [objNull]], // The soldier who will be randomized
	["_hats", [], [[]]], // Optional. Weighted array of hats and helmets
	["_glasses", [], [[]]], // Optional. Weighted array of goggles, glasses, masks, etc.
	["_uniforms", [], [[]]], // Optional. Weighted array of uniforms, recommended to have the soldier start wearing the one with the lowest "load"
	["_vests", [], [[]]], // Optional. Weighted array of vests, also recommended to have the soldier start wearing the one with the lowest "load"
	["_packs", [], [[]]], // Optional. Weighted array of backpacks, recommended to have the soldier start wearing the one with the lowest "load"
	["_useConfigArrays", true, [true]]// Optional. Set to false to ignore config arrays and only use args. It's only here to make my "full random" units in FE work properly; you can probably ignore this.

];

// This section is basically copy/pasted from the BIS function, here to prevent randomization if it has been disabled by the mission author, or if the soldier's loadout was modified. Also exits the function if the specified unit doesn't exist.
if (isNull _unit) exitWith {
	false
};
// Commented out: Eden now marks every placed unit's loadout as "saved" by default, so this flag no longer reliably indicates a mission author's deliberate edit
// if (/*is3DEN || */_unit getvariable ["saved3DENInventory", false]) exitWith {};
if !(local _unit) exitWith {
	false
};
// BIS_enableRandomization is intentionally excluded here: Eden sets it false by default on every placed unit
// (to stop the vanilla BIS randomizer), which would otherwise also block our own randomization.
_skipRandomization = ({
	(_unitType isEqualTo _x) || (_unitType isKindOf _x) || (format ["%1", _unitType] isEqualTo _x) || format ["%1", _unit] isEqualTo _x
} count (getArray(missionConfigfile >> "disableRandomization")) > 0);
if (_skipRandomization) exitWith {};

private _unitClass = typeOf _unit;// This part is here to aid in fetching the config arrays below

// This section is for detecting whether the relevent array has been provided as an argument, and whether we're using the config arrays or forcing the arg arrays to be used instead
if (count _hats == 0 && _useConfigArrays) then {
	if (isArray (configFile >> "CfgVehicles" >> _unitClass >> "OCI_Hats")) then {
		// Checking if the config has an array, and if so...
		_hats = getArray (configFile >> "CfgVehicles" >> _unitClass >> "OCI_Hats");// ...fetch the array from config, overriding the argument array (hence the final arg in the function).
	};
};
// This part adds the hat, as long as the array actually has something in it to choose from, otherwise it's skipped
if (count _hats > 0) then {
	private _newHat = selectRandomWeighted _hats;// Selecting the new hat
	removeHeadgear _unit;// Removing whatever hat the unit already has
	if !(toLower _newHat == "none") then {
		// This part is what makes "none" work; it only adds a new hat if an actual hat was chosen
		_unit addHeadgear _newHat;// Add the new hat. Randomization complete!
	};
};

// The rest of the randomization sections follow the same basic principle as the Hats one; I literally copy/pasted them and then made small modifications
if (count _glasses == 0 && _useConfigArrays) then {
	if (isArray (configFile >> "CfgVehicles" >> _unitClass >> "OCI_Glasses")) then {
		_glasses = getArray (configFile >> "CfgVehicles" >> _unitClass >> "OCI_Glasses");
	};
};
if (count _glasses > 0) then {
	private _newGlasses = selectRandomWeighted _glasses;
	// Delayed: the engine assigns default identity-based goggles a moment after spawn, which would otherwise overwrite this
	[{
		params ["_unit", "_newGlasses"];
		if (alive _unit) then {
			removeGoggles _unit;
			if !(toLower _newGlasses == "none") then {
				// This if check prevents the soldier getting the "None" glasses item equipped, which is an actual equippable item for some reason
				_unit addGoggles _newGlasses;
			};
		};
	}, [_unit, _newGlasses], 0.3] call CBA_fnc_waitAndExecute;
};

if (count _uniforms == 0 && _useConfigArrays) then {
	if (isArray (configFile >> "CfgVehicles" >> _unitClass >> "OCI_Uniforms")) then {
		_uniforms = getArray (configFile >> "CfgVehicles" >> _unitClass >> "OCI_Uniforms");
	};
};
if (count _uniforms > 0) then {
	private _newUniform = selectRandomWeighted _uniforms;
	private _inventory = uniformItems _unit;// This part saves the items in the soldier's original uniform, so they can be added back after the swap.
	removeUniform _unit;
	_unit forceAddUniform _newUniform;// forceAddUniform gets past the side lock
	_inventory apply {
		_unit addItemToUniform _x
	};// Here is where the items are added back
};

if (count _vests == 0 && _useConfigArrays) then {
	if (isArray (configFile >> "CfgVehicles" >> _unitClass >> "OCI_Vests")) then {
		_vests = getArray (configFile >> "CfgVehicles" >> _unitClass >> "OCI_Vests");
	};
};
if (count _vests > 0) then {
	private _newVest = selectRandomWeighted _vests;
	private _inventory = vestItems _unit;// Ditto the uniform part, saves the items for adding back after the swap
	removeVest _unit;
	_unit addVest _newVest;
	_inventory apply {
		_unit addItemToVest _x
	};
};

if (count _packs == 0 && _useConfigArrays) then {
	if (isArray (configFile >> "CfgVehicles" >> _unitClass >> "OCI_FE_Packs")) then {
		_packs = getArray (configFile >> "CfgVehicles" >> _unitClass >> "OCI_FE_Packs");
	};
};
if (count _packs > 0) then {
	private _newPack = selectRandomWeighted _packs;
	private _inventory = backpackItems _unit;
	removeBackpack _unit;
	_unit addBackpack _newPack;
	_inventory apply {
		_unit addItemToBackpack _x
	};
};

true// All the cool functions return "true" on successful completion so I did it too.