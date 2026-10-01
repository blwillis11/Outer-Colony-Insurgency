#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_AIE_486H_Low_HMG_Innie),
            QUOTE(OCI_AIE_486H_HMG_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(OPTRE_Weapons_Turrets_AIE_486H_Static_MMG)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class OPTRE_AIE_486H_Low_Static_HMG_Innie;
    class OCI_AIE_486H_Low_HMG_Innie : OPTRE_AIE_486H_Low_Static_HMG_Innie
    {
        displayName="[OCI] AIE-486H Low HMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
    class OPTRE_AIE_486H_Static_HMG_Innie;
    class OCI_AIE_486H_HMG_Innie : OPTRE_AIE_486H_Static_HMG_Innie
    {
        displayName="[OCI] AIE-486H HMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
