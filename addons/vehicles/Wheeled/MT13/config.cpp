#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
            QUOTE(OCI_HEMTT_Cargo_Innie),
            QUOTE(OCI_HEMTT_Covered_Innie),
            QUOTE(OCI_HEMTT_Transport_Innie),
            QUOTE(OCI_HEMTT_Repair_Innie),
            QUOTE(OCI_HEMTT_Medical_Innie),
            QUOTE(OCI_HEMTT_Fuel_Innie),
            QUOTE(OCI_HEMTT_Ammo_Innie)
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
    class B_T_Truck_01_cargo_F;
    class OCI_HEMTT_Cargo_Innie : B_T_Truck_01_cargo_F
    {
        displayName="[OCI] MT13 Cargo";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_01_co.paa",
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_02_co.paa",
            "\a3\Soft_F_Enoch\Truck_01\Data\truck_01_ammo_pacific_co.paa",
            "\a3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class B_T_Truck_01_covered_F;
    class OCI_HEMTT_Covered_Innie : B_T_Truck_01_covered_F
    {
        displayName="[OCI] MT13-TC Transport (Covered)";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_01_co.paa",
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_02_co.paa",
            "\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa",
            "\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class B_T_Truck_01_transport_F;
    class OCI_HEMTT_Transport_Innie : B_T_Truck_01_transport_F
    {
        displayName="[OCI] MT13-T Transport";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_01_co.paa",
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_02_co.paa",
            "\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa",
            "\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class B_T_Truck_01_repair_F;
    class OCI_HEMTT_Repair_Innie : B_T_Truck_01_repair_F
    {
        displayName="[OCI] MT13-R Repair";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_01_co.paa",
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_02_co.paa",
            "\A3\Soft_F_Exp\Truck_01\Data\truck_01_ammo_olive_CO.paa",
            "\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class B_T_Truck_01_medical_F;
    class OCI_HEMTT_Medical_Innie : B_T_Truck_01_medical_F
    {
        displayName="[OCI] MT13-M Medical";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_01_co.paa",
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_02_co.paa",
            "\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa",
            "\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class B_T_Truck_01_fuel_F;
    class OCI_HEMTT_Fuel_Innie : B_T_Truck_01_fuel_F
    {
        displayName="[OCI] MT13-F Fuel";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_01_co.paa",
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_02_co.paa",
            "\A3\Soft_F_Exp\Truck_01\Data\truck_01_Fuel_olive_CO.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class B_T_Truck_01_ammo_F;
    class OCI_HEMTT_Ammo_Innie : B_T_Truck_01_ammo_F
    {
        displayName="[OCI] MT13-A Ammo";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCI_O_OCLF_A_W_Soldier";
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_01_co.paa",
            "\z\OCI\addons\vehicles\Wheeled\MT13\Data\Truck_01_ext_02_co.paa",
            "\A3\Soft_F_Exp\Truck_01\Data\truck_01_ammo_olive_CO.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };
};
