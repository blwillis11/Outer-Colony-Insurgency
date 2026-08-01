class CfgPatches {
    class OCI_Static_Vehicles_FG75 {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - FG-75 Anti-Tank Gun";
        units[] = {
            "OCI_FG75_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Weapons_FG75"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_Static_FG75;
    class OCI_FG75_Innie : OPTRE_Static_FG75
    {
        displayName="[OCI] FG-75 Anti-Tank Gun";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCLF_Crewman";
    };
};
