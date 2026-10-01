#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_M225_Ox)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON)
        };
        skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
    class B_T_APC_Tracked_01_rcws_F;
    class OCI_M225_Ox : B_T_APC_Tracked_01_rcws_F
    {
        displayName="[OCI] M225 Ox APC";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_APCs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "A3\Armor_F_exp\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",
            "A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa",
            "A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
            "a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    }; 
};
