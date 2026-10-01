class CfgPatches
{
    class OCI_Peacekeepers_Vehicles
    {
        authors[] = {"B. Salmon"};
        name = "UNSC Peacekeepers - Vehicles";
        units[]=
        {
        };
        weapons[]=
        {
        };
        requiredAddons[] =
        {
            "OCI_Peacekeepers"
        };
    };
};

class cfgVehicles
{
    class TCP_B_UNSC_A_M12A;
    class PK_B_UNSC_A_M12A: TCP_B_UNSC_A_M12A
    {
        displayName="[OCI] M12A FAV Warthog";
        faction = "OCI_Peacekeepers_Fac";
        editorCategory = "OCI_Peacekeepers_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        crew = "OCI_Peacekeeper_Rifleman";
        textureList[] = {"white",1};
    };

    class TCP_B_UNSC_A_M831A;
    class PK_B_UNSC_A_M831A: TCP_B_UNSC_A_M831A
    {
        displayName="[OCI] M831A Troop Transport Warthog";
        faction = "OCI_Peacekeepers_Fac";
        editorCategory = "OCI_Peacekeepers_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        crew = "OCI_Peacekeeper_Rifleman";
        textureList[] = {"white",1};
    };

    class TCP_B_UNSC_A_M12A_LAAG_M41;
    class PK_B_UNSC_A_M12A_LAAG_M41: TCP_B_UNSC_A_M12A_LAAG_M41
    {
        displayName="[OCI] M12A LRV Warthog (M41)";
        faction = "OCI_Peacekeepers_Fac";
        editorCategory = "OCI_Peacekeepers_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        crew = "OCI_Peacekeeper_Rifleman";
        textureList[] = {"white",1};
    };

    class OPTRE_m1087_stallion_unsc_resupply;
    class PK_m1087_stallion_unsc_resupply: OPTRE_m1087_stallion_unsc_resupply
    {
        displayName="[OCI] M1087 Stallion Resupply";
        faction = "OCI_Peacekeepers_Fac";
        editorCategory = "OCI_Peacekeepers_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        crew = "OCI_Peacekeeper_Rifleman";
    };

    class OPTRE_m1087_stallion_unsc;
    class PK_m1087_stallion_unsc: OPTRE_m1087_stallion_unsc
    {
        displayName="[OCI] M1087 Stallion Transport";
        faction = "OCI_Peacekeepers_Fac";
        editorCategory = "OCI_Peacekeepers_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        crew = "OCI_Peacekeeper_Rifleman";
    };

    class OPTRE_m1087_stallion_unsc_medical;
    class PK_m1087_stallion_unsc_medical: OPTRE_m1087_stallion_unsc_medical
    {
        displayName="[OCI] M1087 Stallion Medical";
        faction = "OCI_Peacekeepers_Fac";
        editorCategory = "OCI_Peacekeepers_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        crew = "OCI_Peacekeeper_Rifleman";
    };
};