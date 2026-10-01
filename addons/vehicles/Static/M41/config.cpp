#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_LAAG_M41_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(TCP_Static_M41_LAAG)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class TCP_B_UNSC_MC_LAAG_M41;
    class OCI_LAAG_M41_Innie : TCP_B_UNSC_MC_LAAG_M41
    {
        displayName="[OCI] M41 LAAG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
