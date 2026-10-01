#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_ALIM_M68B_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(TCP_Static_M68B_ALIM)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class TCP_B_UNSC_MC_ALIM_M68B;
    class OCI_ALIM_M68B_Innie : TCP_B_UNSC_MC_ALIM_M68B
    {
        displayName="[OCI] M68B ALIM";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
