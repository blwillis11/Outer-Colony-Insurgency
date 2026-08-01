class CfgPatches {
    class OCI_Static_Vehicles_M71 {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - M71 Scythe";
        units[] = {
            "OCI_M71_Scythe_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "Scythe"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_Scythe_AA_INS;
    class OCI_M71_Scythe_Innie : OPTRE_Scythe_AA_INS
    {
        displayName="[OCI] M71 Scythe AA";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCLF_Crewman";
    };
};
