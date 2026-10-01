#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches
{
    class SUBADDON
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT_NAME);
        units[] = {};
		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            "OPTRE_FC_Units_Marines"
        };
		skipWhenMissingDependencies = 1;
	};
};

class CfgWeapons
{
    #include "CfgWeapons.hpp"
};
class CfgVehicles
{
	#include "CfgVehicles.hpp"
};

#include "data\XtdGearInfo.hpp"