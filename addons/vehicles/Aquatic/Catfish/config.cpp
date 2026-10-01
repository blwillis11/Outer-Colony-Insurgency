#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_Catfish_MG_Innie),
            QUOTE(OCI_Catfish_Unarmed_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(optre_catfish)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class optre_catfish_ins_mg_f;
    class OCI_Catfish_MG_Innie : optre_catfish_ins_mg_f
    {
        displayName="[OCI] M112/A Wet Patrol Craft (LAAG)";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Boats";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };

    class optre_catfish_ins_unarmed_f;
    class OCI_Catfish_Unarmed_Innie : optre_catfish_ins_unarmed_f
    {
        displayName="[OCI] M112 Wet Patrol Craft";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Boats";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
