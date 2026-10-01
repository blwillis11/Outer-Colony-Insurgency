#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		addonRootClass = QUOTE(MAIN_ADDON);

		name = QUOTE(COMPONENT_NAME);
		units[] = {};
		// Used for forcing load order
		requiredAddons[] = {QUOTE(MAIN_ADDON)};
	};
};

class CfgWeapons
{
    class rockets_230mm_GAT;

    class OCI_MLRS_230mm_rockets: rockets_230mm_GAT
    {
        magazines[] = {
            "OCI_12Rnd_230mm_rockets"
        };
    };
    class mortar_155mm_AMOS;

    class OCI_mortar_155mm_AMOS: mortar_155mm_AMOS
    {
        magazines[] = {
            "OCI_12Rnd_105mm_Con",
            "6Rnd_155mm_Mo_smoke"
        };
    };
};

class CfgAmmo
{
	#include "ammo.hpp"
};

class CfgMagazines
{
	#include "magazines.hpp"
};