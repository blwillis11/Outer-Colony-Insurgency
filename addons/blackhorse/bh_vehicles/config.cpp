class CfgPatches
{
    class OCI_Blackhorse_Vehicles
    {
        authors[] = {"B. Salmon"};
        name = "Outer Colony Blackhorse - Vehicles";
        units[]=
        {
            "OCI_Blackhorse_MRAP_01",
            "OCI_Blackhorse_LSV_01_armed",
            "OCI_Blackhorse_LSV_01_unarmed",
            "OCI_Blackhorse_M411",
            "OCI_Blackhorse_MH_144",
            "OCI_Blackhorse_MH_144S"
        };
        weapons[]=
        {
        };
        requiredAddons[] =
        {
            "OCI_Blackhorse"
        };
    };
};

class CfgVehicles {
    class B_MRAP_01_F;
    class OCI_Blackhorse_MRAP_01 : B_MRAP_01_F
    {
        displayName="[OCI] Blackhorse MRAP";
        faction = "OCI_Blackhorse";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "oci_o_bh_pmg_s_soldier";
    };

    class B_LSV_01_armed_G_noMMG;
    class OCI_Blackhorse_LSV_01_armed : B_LSV_01_armed_G_noMMG
    {
        displayName="[OCI] Blackhorse LSV (Armed)";
        faction = "OCI_Blackhorse";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "oci_o_bh_pmg_s_soldier";
        hiddenSelectionsTextures[] = {
            "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
            "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
            "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
            "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
            "\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
            "\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class B_LSV_01_unarmed_F;
    class OCI_Blackhorse_LSV_01_unarmed : B_LSV_01_unarmed_F
    {
        displayName="[OCI] Blackhorse LSV (Unarmed)";
        faction = "OCI_Blackhorse";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "oci_o_bh_pmg_s_soldier";
        hiddenSelectionsTextures[] = {
            "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
            "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
            "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
            "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
            "\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
            "\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
        };
        textureList[] = {};
        textureSources[] = 
        {
        };
    };

    class OPTRE_M411_APC_UNSC;
    class OCI_Blackhorse_M411 : OPTRE_M411_APC_UNSC
    {
        displayName="[OCI] Blackhorse M411 APC";
        faction = "OCI_Blackhorse";
        editorSubcategory = "EdSubcat_APCs";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "oci_o_bh_pmg_s_soldier";
    };

    class OPTRE_UNSC_MH_144_Falcon;
    class OCI_Blackhorse_MH_144 : OPTRE_UNSC_MH_144_Falcon
    {
        displayName="[OCI] Blackhorse MH-144 Falcon";
        faction = "OCI_Blackhorse";
        editorSubcategory = "EdSubcat_Helicopters";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "oci_o_bh_pmg_s_soldier";
    };

    class OPTRE_UNSC_MH_144S_Falcon;
    class OCI_Blackhorse_MH_144S : OPTRE_UNSC_MH_144S_Falcon
    {
        displayName="[OCI] Blackhorse MH-144S Falcon";
        faction = "OCI_Blackhorse";
        editorSubcategory = "EdSubcat_Helicopters";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "oci_o_bh_pmg_s_soldier";
    };
};