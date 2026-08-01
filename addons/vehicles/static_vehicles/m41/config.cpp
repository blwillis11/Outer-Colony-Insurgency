class CfgPatches {
    class OCI_Static_Vehicles_M41 {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - M41";
        units[] = {
            "OCI_LAAG_M41_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "TCP_Static_M41_LAAG"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class TCP_B_UNSC_MC_LAAG_M41;
    class OCI_LAAG_M41_Innie : TCP_B_UNSC_MC_LAAG_M41
    {
        displayName="[OCI] M41 LAAG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
    };
};
