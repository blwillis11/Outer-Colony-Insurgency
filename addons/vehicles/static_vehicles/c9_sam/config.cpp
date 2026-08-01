class CfgPatches {
    class OCI_Static_Vehicles_C9_Rocket_Artillery {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - C9 Rocket Artillery";
        units[] = {
            "OCI_C9_Rocket_Artillery_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Weapons_Turrets_C9_SAM"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_C9_RA_F;
    class OCI_C9_Rocket_Artillery_Innie : OPTRE_C9_RA_F
    {
        displayName="[OCI] C9 Rocket Artillery";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "O_UAV_AI";
    };
};
