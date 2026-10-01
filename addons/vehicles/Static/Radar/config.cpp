#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_E_ELF_L_236_Radar_Bunker_Innie),
            QUOTE(OCI_E_ELF_L_236_Radar_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(OPTRE_Buildings2_Radar_Bunker)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class OPTRE_X_ELF_L_236_Radar_Bunker_System;
    class OCI_E_ELF_L_236_Radar_Bunker_Innie : OPTRE_X_ELF_L_236_Radar_Bunker_System
    {
        displayName="[OCI] X-ELF-L 236 Radar Bunker System";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "OCI_Radar_EdSubCat";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "O_UAV_AI";
    };
    class OPTRE_X_ELF_L_236_Radar_System;
    class OCI_E_ELF_L_236_Radar_Innie : OPTRE_X_ELF_L_236_Radar_System
    {
        displayName="[OCI] X-ELF-L 236 Radar System";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "OCI_Radar_EdSubCat";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "O_UAV_AI";
    };
};
