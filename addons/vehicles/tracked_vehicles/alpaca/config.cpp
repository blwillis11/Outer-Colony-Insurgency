class CfgPatches {
    class OCI_Tracked_Vehicles_Alpaca {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Tracked Vehicles - Alpaca";
        units[] = {
            "OCI_MAP118_SPH_Alpaca"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "A3_Armor_F_Exp_MBT_01"
        };
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
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Artillery";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\tracked_vehicles\alpaca\MAP\MBT_01_body_olive_CO.paa",
            "\z\OCI\addons\vehicles\tracked_vehicles\alpaca\MAP\MBT_01_scorcher_olive_co.paa",
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
