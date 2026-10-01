#include "script_component.hpp"

class CfgPatches
{
	class SUBADDON3
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT3_NAME);

		units[] = {
			Q(DOUBLES(FACTION,Bearcat_AA_Innie)),
			Q(DOUBLES(FACTION,Bearcat_Unarmed_Innie)),
			Q(DOUBLES(FACTION,Bearcat_Autocannon_Innie)),
			Q(DOUBLES(FACTION,Bearcat_Cannon_Innie)),
			Q(DOUBLES(FACTION,MAP118_SPH_Alpaca)),
			Q(DOUBLES(FACTION,M705_Porcupine)),
			Q(DOUBLES(FACTION,M700_Innie)),
			Q(DOUBLES(FACTION,HEMTT_Covered_Innie)),
			Q(DOUBLES(FACTION,M12A_Innie)),
			Q(DOUBLES(FACTION,M12A_LAAG_Innie)),
			Q(DOUBLES(FACTION,M12A_ALIM_Innie)),
			Q(DOUBLES(FACTION,M831A_Innie)),
			Q(DOUBLES(FACTION,OQ_38_Wren_Drone_Arctic))
		};

		// Used for forcing load order
		requiredAddons[] = {QUOTE(ADDON)};
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"