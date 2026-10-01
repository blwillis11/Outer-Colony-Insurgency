#include "script_component.hpp"

class CfgPatches
{
	class SUBADDON3
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT3_NAME);
		units[] = {
			Q(DOUBLES(PFACTION,Soldier_Air_Assault)),
			Q(DOUBLES(PFACTION,Soldier_Air_Assault_AT)),
			Q(DOUBLES(PFACTION,Soldier_Air_Assault_Exp)),
			Q(DOUBLES(PFACTION,Soldier_Air_Assault_JTAC)),
			Q(DOUBLES(PFACTION,Soldier_Air_Assault_TL)),
			Q(DOUBLES(PFACTION,Soldier_Air_Assault_CLS)),
			Q(DOUBLES(PFACTION,Soldier_Air_Assault_M))
		};

		// Used for forcing load order
		requiredAddons[] = {QUOTE(ADDON)};
	};
};

#include "CfgVehicles.hpp"