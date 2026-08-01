class CfgPatches {
    class OCI_Static_Vehicles_M37 {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - M37 HMG";
        units[] = {
            "OCI_M37_HMG_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Weapons_Turrets_M37_Static_HMG"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_M37_Static_HMG_innie;
    class OCI_M37_HMG_Innie : OPTRE_M37_Static_HMG_innie
    {
        displayName="[OCI] M37 HMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCLF_Crewman";
    };
};
