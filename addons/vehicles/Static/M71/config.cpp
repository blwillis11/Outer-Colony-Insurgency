#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_M71_Scythe_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(Scythe)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class OPTRE_Scythe_AA_INS;
    class OCI_M71_Scythe_Innie : OPTRE_Scythe_AA_INS
    {
        displayName="[OCI] M71 Scythe AA";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
