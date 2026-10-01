#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_MH144_Falcon_Innie),
            QUOTE(OCI_UH144S_Falcon_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(OPTRE_Vehicles_Air_Falcon)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class OPTRE_INS_MH_144_Falcon;
    class OCI_MH144_Falcon_Innie: OPTRE_INS_MH_144_Falcon
    {
        displayName = "[OCI] MH-144 Falcon";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Helicopters";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
    class OPTRE_UNSC_falcon_S_ins;
    class OCI_UH144S_Falcon_Innie: OPTRE_UNSC_falcon_S_ins
    {
        displayName = "[OCI] UH-144S Falcon";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Helicopters";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
