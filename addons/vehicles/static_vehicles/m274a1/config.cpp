class CfgPatches {
    class OCI_Static_Vehicles_m274a1 {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - M274A1";
        units[] = {
            "OCI_M274A1_Low_MMG_Innie",
            "OCI_M274A1_MMG_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Weapons_Turrets_M247a1_Static_MMG"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_M247a1_Low_Static_Innie_MMG;
    class OCI_M274A1_Low_MMG_Innie : OPTRE_M247a1_Low_Static_Innie_MMG
    {
        displayName="[OCI] M274A1 Low MMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCLF_Crewman";
    };
    class OPTRE_M247a1_Static_Innie_MMG;
    class OCI_M274A1_MMG_Innie : OPTRE_M247a1_Static_Innie_MMG
    {
        displayName="[OCI] M274A1 MMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCLF_Crewman";
    };
};
