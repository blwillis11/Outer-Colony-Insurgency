class CfgPatches {
    class OCI_Tracked_Vehicles_Archerfish {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Tracked Vehicles - M706 Archerfish";
        units[] = {
            "OCI_M706_Archerfish"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Weapons_Turrets_C9_SAM"
        };
    };
};
class MainTurret;
class Turrets;
class CfgVehicles
{
    class OPTRE_M706_AA_Viper_UNSC;

    class OCI_M706_Archerfish : OPTRE_M706_AA_Viper_UNSC
    {
        displayName="[OCI] M706 Archerfish";
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
    }; 
};
