#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_C9_SAM_Innie),
            QUOTE(OCI_C9_Low_SAM_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(OPTRE_Weapons_Turrets_C9_SAM)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class OPTRE_C9_SAM_SR_Cluster_F;
    class OCI_C9_SAM_Innie : OPTRE_C9_SAM_SR_Cluster_F
    {
        displayName="[OCI] C9 SAM (4km)";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "O_UAV_AI";
    };
    class OPTRE_C9_SAM_SR_Low_Cluster_F;
    class OCI_C9_Low_SAM_Innie : OPTRE_C9_SAM_SR_Low_Cluster_F
    {
        displayName="[OCI] C9 SAM (Low) (4km)";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "O_UAV_AI";
    };
};
