#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_MAP118_SPH_Alpaca)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(A3_Armor_F_Exp_MBT_01)
        };
        skipWhenMissingDependencies = 1;
	};
};
class MainTurret;
class Turrets;
class CfgVehicles
{
    class B_T_MBT_01_arty_F;
    class OCI_MAP118_SPH_Alpaca : B_T_MBT_01_arty_F
    {
        displayName="[OCI] MAP118 SPH Alpaca";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Artillery";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Tracked\Alpaca\data\MBT_01_body_olive_CO.paa",
            "\z\OCI\addons\vehicles\Tracked\Alpaca\data\MBT_01_scorcher_olive_co.paa",
            "A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
            "A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
        class Turrets:Turrets
        {
            class MainTurret:MainTurret
            {
                magazines[] = {
                    "OCI_12Rnd_105mm_Con",
                    "6Rnd_155mm_Mo_smoke"
                };
                weapons[] = {
                    "OCI_mortar_155mm_AMOS"
                };
            };
        };
    };
};
