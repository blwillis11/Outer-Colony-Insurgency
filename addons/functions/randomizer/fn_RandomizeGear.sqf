/*
	[(_this select 0), 1, nil, nil, nil, nil] call TAG_fnc_randomEquipment; = uniform Only
	[(_this select 0), nil, 1, nil, nil, nil] call TAG_fnc_randomEquipment; = vest Only
	[(_this select 0), nil, nil, 1, nil, nil] call TAG_fnc_randomEquipment; = headgear Only
	[(_this select 0), nil, nil, nil, 1, nil] call TAG_fnc_randomEquipment; = Facegear Only
	[(_this select 0), nil, nil, nil, nil, 1] call TAG_fnc_randomEquipment; = backpack Only
	[(_this select 0), 1, 1, 1, 1, 1] call TAG_fnc_randomEquipment; = Everything
	
	Thanks for this goes to A. Crisco
*/

_this params ["_unit", "_uniform", "_vest", "_headgear", "_facewear", "_backpack"];

if (is3DEN || _unit getVariable ["saved3DENInventory", false]) exitWith {};

private _unitType = typeOf _unit;
private _loadout = getUnitLoadout _unitType;

private ["_uniformList", "_uniformToUse"];

if !(isNil "_uniform") then
{
	_uniformList = getArray (configFile >> "CfgVehicles" >> _unitType >> "uniformList");
	_uniformToUse = _uniformList call BIS_fnc_selectRandomWeighted;
	_loadout#3 set [0, _uniformToUse];
};

private ["_vestList", "_vestToUse"];
if !(isNil "_vest") then
{
	_vestList = getArray (configFile >> "CfgVehicles" >> _unitType >> "vestList");
	_vestToUse = _vestList call BIS_fnc_selectRandomWeighted;
	_loadout#4 set [0, _vestToUse];
};

private ["_headgearList", "_headgearToUse"];
if !(isNil "_headgear") then
{
	_headgearList = getArray (configFile >> "CfgVehicles" >> _unitType >> "headgearList");
	_headgearToUse = _headgearList call BIS_fnc_selectRandomWeighted;
	_loadout set [6, _headgearToUse];
};

private ["_facewearList", "_facewearToUse"];
if !(isNil "_facewear") then
{
	_facewearList = getArray (configFile >> "CfgVehicles" >> _unitType >> "facewearList");
	_facewearToUse = _facewearList call BIS_fnc_selectRandomWeighted;
	_loadout set [7, _facewearToUse];
};

private ["_backpackList", "_backpackToUse"];
if !(isNil "_backpack") then
{
	_backpackList = getArray (configFile >> "CfgVehicles" >> _unitType >> "backpackList");
	_backpackToUse = _backpackList call BIS_fnc_selectRandomWeighted;
	_loadout#5 set [0, _backpackToUse];
};

_unit setUnitLoadout _loadout;