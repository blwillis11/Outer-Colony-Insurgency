#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON3
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT3_NAME);
		units[] = {
			Q(DOUBLES(PCLASSTYPE,Soldier)),
			Q(DOUBLES(PCLASSTYPE,Soldier_AR)),
			Q(DOUBLES(PCLASSTYPE,Soldier_Medic)),
			Q(DOUBLES(PCLASSTYPE,Soldier_Exp)),
			Q(DOUBLES(PCLASSTYPE,Soldier_GL)),
			Q(DOUBLES(PCLASSTYPE,Soldier_M)),
			Q(DOUBLES(PCLASSTYPE,Soldier_AA)),
			Q(DOUBLES(PCLASSTYPE,Soldier_AT)),
			Q(DOUBLES(PCLASSTYPE,Soldier_Officer)),
			Q(DOUBLES(PCLASSTYPE,Soldier_SL)),
			Q(DOUBLES(PCLASSTYPE,Soldier_TL)),
			Q(DOUBLES(PCLASSTYPE,Soldier_Sniper)),
			Q(DOUBLES(PCLASSTYPE,Soldier_Spotter))
		};

		// Used for forcing load order
		requiredAddons[] = {QUOTE(ADDON)};
	};
};
#include "CfgVehicles.hpp"