class CfgPatches
{
    class OCI_Militia_Vehicles
    {
        authors[] = {"B. Salmon"};
        name = "Outer Colony Militia - Vehicles";
        units[]=
        {
            "OCI_INDFOR_Militia_Offroad_Repair",
            "OCI_INDFOR_Militia_Offroad",
            "OCI_INDFOR_Militia_Offroad_Armed",
            "OCI_INDFOR_Militia_Offroad_AT",
            "OCI_INDFOR_Militia_Van",
            "OCI_INDFOR_Militia_Van_Fuel",
            "OCI_INDFOR_Militia_Quadbike",
            "OCI_INDFOR_Militia_Offroad_02",
            "OCI_INDFOR_Militia_Mortar",
            "OCI_OPFOR_Militia_Offroad_Repair",
            "OCI_OPFOR_Militia_Offroad",
            "OCI_OPFOR_Militia_Offroad_Armed",
            "OCI_OPFOR_Militia_Offroad_AT",
            "OCI_OPFOR_Militia_Van",
            "OCI_OPFOR_Militia_Van_Fuel",
            "OCI_OPFOR_Militia_Quadbike",
            "OCI_OPFOR_Militia_Offroad_02",
            "OCI_OPFOR_Militia_Mortar"
        };
        weapons[]=
        {
        };
        requiredAddons[] =
        {
            "OCI_Main"
        };
    };
};

class cfgVehicles
{
    class O_G_Offroad_01_repair_F;
    class OCI_INDFOR_Militia_Offroad_Repair : O_G_Offroad_01_repair_F
    {
        displayName="[OCI] Militia Offroad Repair";
        faction = "OCI_Militia_Fac";
        editorCategory = "OCI_Militia_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "OCI_INDFOR_Militiaman_AR";
    };

    class O_G_Offroad_01_F;
    class OCI_INDFOR_Militia_Offroad : O_G_Offroad_01_F
    {
        displayName="[OCI] Militia Offroad";
        faction = "OCI_Militia_Fac";
        editorCategory = "OCI_Militia_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "OCI_INDFOR_Militiaman_AR";
    };

    class O_G_Offroad_01_armed_F;
    class OCI_INDFOR_Militia_Offroad_Armed : O_G_Offroad_01_armed_F
    {
        displayName="[OCI] Militia Offroad (Armed)";
        faction = "OCI_Militia_Fac";
        editorCategory = "OCI_Militia_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "OCI_INDFOR_Militiaman_AR";
    };

    class O_G_Offroad_01_AT_F;
    class OCI_INDFOR_Militia_Offroad_AT : O_G_Offroad_01_AT_F
    {
        displayName="[OCI] Militia Offroad (AT)";
        faction = "OCI_Militia_Fac";
        editorCategory = "OCI_Militia_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "OCI_INDFOR_Militiaman_AR";
    };

    class O_G_Van_01_transport_F;
    class OCI_INDFOR_Militia_Van : O_G_Van_01_transport_F
    {
        displayName="[OCI] Militia Van";
        faction = "OCI_Militia_Fac";
        editorCategory = "OCI_Militia_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "OCI_INDFOR_Militiaman_AR";
    };

    class O_G_Van_01_fuel_F;
    class OCI_INDFOR_Militia_Van_Fuel : O_G_Van_01_fuel_F
    {
        displayName="[OCI] Militia Van (Fuel)";
        faction = "OCI_Militia_Fac";
        editorCategory = "OCI_Militia_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "OCI_INDFOR_Militiaman_AR";
    };

    class O_G_Quadbike_01_F;
    class OCI_INDFOR_Militia_Quadbike : O_G_Quadbike_01_F
    {
        displayName="[OCI] Militia Quadbike";
        faction = "OCI_Militia_Fac";
        editorCategory = "OCI_Militia_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "OCI_INDFOR_Militiaman_AR";
    };

    class C_Offroad_02_unarmed_F;
    class OCI_INDFOR_Militia_Offroad_02 : C_Offroad_02_unarmed_F
    {
        displayName="[OCI] Militia Jeep";
        faction = "OCI_Militia_Fac";
        editorCategory = "OCI_Militia_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "OCI_INDFOR_Militiaman_AR";
    };

    class I_G_Mortar_01_F;
    class OCI_INDFOR_Militia_Mortar : I_G_Mortar_01_F
    {
        displayName="[OCI] Militia Mortar";
        faction = "OCI_Militia_Fac";
        editorCategory = "OCI_Militia_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=2;
        crew = "OCI_INDFOR_Militiaman_AR";
    };
    class OCI_OPFOR_Militia_Offroad_Repair : OCI_INDFOR_Militia_Offroad_Repair
    {
        faction = "OCI_Militia_OPFOR_Fac";
        side=0;
        crew = "OCI_OPFOR_Militiaman_AR";
    };
    class OCI_OPFOR_Militia_Offroad : OCI_INDFOR_Militia_Offroad
    {
        faction = "OCI_Militia_OPFOR_Fac";
        side=0;
        crew = "OCI_OPFOR_Militiaman_AR";
    };
    class OCI_OPFOR_Militia_Offroad_Armed : OCI_INDFOR_Militia_Offroad_Armed
    {
        faction = "OCI_Militia_OPFOR_Fac";
        side=0;
        crew = "OCI_OPFOR_Militiaman_AR";
    };
    class OCI_OPFOR_Militia_Offroad_AT : OCI_INDFOR_Militia_Offroad_AT
    {
        faction = "OCI_Militia_OPFOR_Fac";
        side=0;
        crew = "OCI_OPFOR_Militiaman_AR";
    };
    class OCI_OPFOR_Militia_Van : OCI_INDFOR_Militia_Van
    {
        faction = "OCI_Militia_OPFOR_Fac";
        side=0;
        crew = "OCI_OPFOR_Militiaman_AR";
    };
    class OCI_OPFOR_Militia_Van_Fuel : OCI_INDFOR_Militia_Van_Fuel
    {
        faction = "OCI_Militia_OPFOR_Fac";
        side=0;
        crew = "OCI_OPFOR_Militiaman_AR";
    };
    class OCI_OPFOR_Militia_Quadbike : OCI_INDFOR_Militia_Quadbike
    {
        faction = "OCI_Militia_OPFOR_Fac";
        side=0;
        crew = "OCI_OPFOR_Militiaman_AR";
    };
    class OCI_OPFOR_Militia_Offroad_02 : OCI_INDFOR_Militia_Offroad_02
    {
        faction = "OCI_Militia_OPFOR_Fac";
        side=0;
        crew = "OCI_OPFOR_Militiaman_AR";
    };
    class OCI_OPFOR_Militia_Mortar : OCI_INDFOR_Militia_Mortar
    {
        faction = "OCI_Militia_OPFOR_Fac";
        side=0;
        crew = "OCI_OPFOR_Militiaman_AR";
    };
};