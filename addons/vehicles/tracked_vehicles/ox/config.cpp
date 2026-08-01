class CfgPatches {
    class OCI_Tracked_Vehicles_Ox {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Tracked Vehicles - Ox";
        units[] = {
            "OCI_M225_Ox"
        };
        requiredAddons[] = {
            "OCI_Vehicles"
        };
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
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_APCs";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
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
