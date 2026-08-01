class CfgPatches {
    class OCI_Static_Vehicles_M95 {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - M95 Lance";
        units[] = {
            "OCI_M95_Lance_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "Lance"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_Lance_INS;
    class OCI_M95_Lance_Innie : OPTRE_Lance_INS
    {
        displayName="[OCI] M95 Lance";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCLF_Crewman";
    };
};
