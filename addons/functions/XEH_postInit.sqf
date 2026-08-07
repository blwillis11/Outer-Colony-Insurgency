#include "script_component.hpp"

// Native config EventHandlers (see CfgVehicles) already covers Eden and scripted createUnit spawns.
// Zeus-placed units skip that entirely, so only curator placement is hooked here to avoid double-randomizing.
private _randomizedUnitBaseClasses = ["OCLF_UnitBase", "Militia_UnitBase"];

private _fnc_onCuratorObjectPlaced = {
	params ["", "_entity"];
	if (local _entity && {
		(_randomizedUnitBaseClasses findIf {
			_entity isKindOf _x
		}) != -1
	}) then {
		_entity call OCI_fnc_RandomizeGear;
	};
};

{
	_x addEventHandler ["CuratorObjectPlaced", _fnc_onCuratorObjectPlaced];
} forEach allCurators;