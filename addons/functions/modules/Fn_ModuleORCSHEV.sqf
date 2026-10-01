/*
	OPTRE_fnc_
	
	Author: Big_Wilk
	
	Description: 
	
	Command: spawn
	Return: true 
	Syntax: 
	
	Parameters: 
	
	Demo Mission: none 
	Media: none
	
	Example 1:
	
	Example 2:
	
	MP: Server Only
	
*/

if !isServer exitWith {};

_logic = _this select 0;
_units = [];

waitUntil {
	!isNil {
		_logic getVariable "ORCS_Man_8"
	} || isNull _logic
}; // pelican colour set or module deleted
if (isNull _logic) exitWith {}; // exit if module is deleted

{
	_unit = _logic getVariable [_x, "none"];
	if (_unit != "" AND _unit != "none") then {
		if (_unit == "random") then {
			_units pushBack (
			[
				"OCLF_ORCS_Rifleman",
				"OCLF_ORCS_TeamLead",
				"OCLF_ORCS_Spotter",
				"OCLF_ORCS_Autorifleman",
				"OCLF_ORCS_Grenadier",
				"OCLF_ORCS_Marksman",
				"OCLF_ORCS_Rifleman_BR",
				"OCLF_ORCS_Medic",
				"OCLF_ORCS_Sniper",
				"OCLF_ORCS_RTO",
				"OCLF_ORCS_Rifleman_AT"
			] call BIS_fnc_selectRandom
			);
		} else {
			_units pushBack _unit;
		};
	};
} forEach ["ORCS_Man_1", "ORCS_Man_2", "ORCS_Man_3", "ORCS_Man_4", "ORCS_Man_5", "ORCS_Man_6", "ORCS_Man_7", "ORCS_Man_8"];

// Capture required data before deleting the module object
private _bjDropPos = getPos _logic;
private _bjWaypoints = ((_logic getVariable ["waypoints", ""]) call OPTRE_fnc_StringToArrayOfString);
private _bjFinalWP = (_logic getVariable ["finalWaypoint", ""]);

// Debug: log inputs to RPT so we can trace module calls
diag_log format ["ModuleORCSHEV: calling CS_ORCSHEV with units=%1 pos=%2 waypoints=%3 finalWP=%4 side=%5", _units, _bjDropPos, _bjWaypoints, _bjFinalWP, east];

private _bj_ret = [
	_units,
	_bjDropPos,
	_bjWaypoints,
	_bjFinalWP,
	east
] call OPTRE_fnc_CS_ORCSHEV;

diag_log format ["ModuleORCSHEV: CS_ORCSHEV returned %1", _bj_ret];

if (!isNull _logic) then {
	deleteVehicle _logic
};