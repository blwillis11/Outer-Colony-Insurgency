#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_Archer_Missile_System_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(OPTRE_Corvette_archer)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class OPTRE_Corvette_archer_system_INS;
    class OCI_Archer_Missile_System_Innie : OPTRE_Corvette_archer_system_INS
    {
        displayName="[OCI] Archer Missile System";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "O_UAV_AI";
    };
};
