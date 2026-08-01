class CfgPatches {
    class OCI_Tracked_Vehicles_Viper {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Tracked Vehicles - Viper";
		units[] = {
            "OCI_M700_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Vehicles_M700_Viper"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_M700_Viper_UNSC;

    class OCI_M700_Innie:OPTRE_M700_Viper_UNSC
    {
        displayName="[OCI] M700 Viper Light Tank";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Tanks";
        scopeCurator=2;
        scope=2;
        side=0;
        armor=450;
        crew = "OCLF_Crewman";
        class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
                    amount = 2;
                };
            };
        };
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
            "#(argb,8,8,3)color(1.000,0.295,0.306,0.000,co)"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };
};
