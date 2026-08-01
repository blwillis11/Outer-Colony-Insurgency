class CfgPatches {
    class OCI_Wheeled_Vehicles_Ibex {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Wheeled Vehicles - Ibex";
        units[] = {
            "OCI_M134_Ibex"
        };
        requiredAddons[] = {
            "OCI_Vehicles"
        };
    };
};

class CfgVehicles
{
    class B_T_AFV_Wheeled_01_cannon_F;
    class OCI_M134_Ibex : B_T_AFV_Wheeled_01_cannon_F
    {
        displayName="[OCI] M134 Ibex";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_APCs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
        hiddenSelectionsTextures[] = {
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa",
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa",
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
            "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
            "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    }; 
};
