#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_M274A1_Low_MMG_Innie),
            QUOTE(OCI_M274A1_MMG_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(OPTRE_Weapons_Turrets_M247a1_Static_MMG)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class OPTRE_M247a1_Low_Static_Innie_MMG;
    class OCI_M274A1_Low_MMG_Innie : OPTRE_M247a1_Low_Static_Innie_MMG
    {
        displayName="[OCI] M274A1 Low MMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
    class OPTRE_M247a1_Static_Innie_MMG;
    class OCI_M274A1_MMG_Innie : OPTRE_M247a1_Static_Innie_MMG
    {
        displayName="[OCI] M274A1 MMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
