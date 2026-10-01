#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON3
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT3_NAME);
		units[] = {
			Q(DOUBLES(PFACTION,Soldier)),
			Q(DOUBLES(PFACTION,Soldier_AR)),
			Q(DOUBLES(PFACTION,Soldier_Medic)),
			Q(DOUBLES(PFACTION,Soldier_Exp)),
			Q(DOUBLES(PFACTION,Soldier_GL)),
			Q(DOUBLES(PFACTION,Soldier_M)),
			Q(DOUBLES(PFACTION,Soldier_AA)),
			Q(DOUBLES(PFACTION,Soldier_AT)),
			Q(DOUBLES(PFACTION,Soldier_SL)),
			Q(DOUBLES(PFACTION,Soldier_TL)),
			Q(DOUBLES(PFACTION,Soldier_Sniper)),
			Q(DOUBLES(PFACTION,Soldier_Spotter)),
			Q(DOUBLES(PFACTION,Officer))
		};

		// Used for forcing load order
		requiredAddons[] = {QUOTE(ADDON)};
	};
};
#include "CfgVehicles.hpp"