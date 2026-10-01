#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_AU_44_Mortar_Innie)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(OPTRE_AU_44_Mortar)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class OPTRE_AU_44_INS_Mortar;
    class OCI_AU_44_Mortar_Innie : OPTRE_AU_44_INS_Mortar
    {
        displayName="[OCI] AU-44 Mortar";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
    };
};
