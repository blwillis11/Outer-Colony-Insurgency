#include "script_component.hpp"
#include "script_macros.hpp"
class CfgPatches
{
    class SUBADDON3
	{
		addonRootClass = QUOTE(ADDON);
		name = QUOTE(SUBCOMPONENT3_NAME);
		units[] = {};

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            "TCP_Characters"
        };
	};
};

#include "CfgWeapons.hpp"