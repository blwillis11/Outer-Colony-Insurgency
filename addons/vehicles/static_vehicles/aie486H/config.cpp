class CfgPatches {
    class OCI_Static_Vehicles_AIE486H {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - AIE-486H";
        units[] = {
            "OCI_AIE_486H_Low_HMG_Innie",
            "OCI_AIE_486H_HMG_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Weapons_Turrets_AIE_486H_Static_MMG"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_AIE_486H_Low_Static_HMG_Innie;
    class OCI_AIE_486H_Low_HMG_Innie : OPTRE_AIE_486H_Low_Static_HMG_Innie
    {
        displayName="[OCI] AIE-486H Low HMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCLF_Crewman";
    };
    class OPTRE_AIE_486H_Static_HMG_Innie;
    class OCI_AIE_486H_HMG_Innie : OPTRE_AIE_486H_Static_HMG_Innie
    {
        displayName="[OCI] AIE-486H HMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCLF_Crewman";
    };
};
