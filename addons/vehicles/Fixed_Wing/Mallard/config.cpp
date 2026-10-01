#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_HF35A_Mallard_Innie)
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
    class TKE_Ext_GUSA_Innie;
    class OCI_HF35A_Mallard_Innie: TKE_Ext_GUSA_Innie
    {
        displayName="[OCI] HF-35/A Mallard";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Planes";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
