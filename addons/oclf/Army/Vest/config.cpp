#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {};

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            "TCP_Characters"
        };
	};
};
class ItemInfo;
#include "CfgWeapons.hpp"