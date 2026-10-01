#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_M460AGL_Low_GMG_Innie),
            QUOTE(OCI_M460AGL_GMG_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(OPTRE_Weapons_Turrets_M460AGL)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class OPTRE_M460AGL_Low_Static_GMG_innie;
    class OCI_M460AGL_Low_GMG_Innie : OPTRE_M460AGL_Low_Static_GMG_innie
    {
        displayName="[OCI] M460AGL Low GMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
    class OPTRE_M460AGL_Static_GMG_innie;
    class OCI_M460AGL_GMG_Innie : OPTRE_M460AGL_Static_GMG_innie
    {
        displayName="[OCI] M460AGL GMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
