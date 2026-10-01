#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_AH44_Dragonfly_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(TKE_Ext_V_OPTRE)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class TKE_Ext_Dragonfly_A_Innie;
    class OCI_AH44_Dragonfly_Innie: TKE_Ext_Dragonfly_A_Innie
    {
        displayName = "[OCI] AH-44/A Dragonfly";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Helicopters";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
