#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_M706_Archerfish)
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON),
            QUOTE(OPTRE_Vehicles_M700_Viper)
        };
        skipWhenMissingDependencies = 1;
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
        editorSubcategory = "EdSubcat_Artillery";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\tracked\Viper\Data\Decal_ca.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\camoPolar_ca.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\ExteriorBody_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\ExteriorTurret_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\ExteriorExtra_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Lights_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Exterior2_co.paa",
            "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Glass_ca.paa",
            "\z\OCI\addons\vehicles\tracked\Viper\Data\ExteriorERA_co.paa",
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
