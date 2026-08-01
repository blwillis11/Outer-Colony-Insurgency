class CfgPatches {
    class OCI_Tracked_Vehicles_Porcupine {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Tracked Vehicles - M705 Porcupine";
        units[] = {
            "OCI_M705_Porcupine"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Vehicles_M700_Viper"
        };
    };
};
class MainTurret;
class Turrets;
class CfgVehicles
{
    class OPTRE_M705_MLRS_Viper_UNSC;

    class OCI_M705_Porcupine : OPTRE_M705_MLRS_Viper_UNSC
    {
        displayName="[OCI] M705 Porcupine";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Artillery";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\tracked_vehicles\viper\Viper\Decal_ca.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\camoPolar_ca.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\ExteriorBody_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\ExteriorTurret_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\ExteriorExtra_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Lights_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Exterior2_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Glass_ca.paa",
            "\z\OCI\addons\vehicles\tracked_vehicles\viper\Viper\ExteriorERA_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Interior1_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Interior2_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Interior3_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\InteriorLights_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\MFD_co.paa",
            "#(argb,8,8,3)color(1.000,0.295,0.306,0.000,co)",
            "#(argb,8,8,3)color(1.000,0.295,0.306,0.000,co)",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\MLRS\TurretFrame_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\MLRS\MissileRack_co.paa"
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
                    "OCI_12Rnd_230mm_rockets"
                };
                weapons[] = {
                    "OCI_MLRS_230mm_rockets"
                };
            };
        };
    }; 
};
