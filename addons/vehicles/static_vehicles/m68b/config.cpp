class CfgPatches {
    class OCI_Static_Vehicles_M68B {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - M68B ALIM";
        units[] = {
            "OCI_ALIM_M68B_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "TCP_Static_M68B_ALIM"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class TCP_B_UNSC_MC_ALIM_M68B;
    class OCI_ALIM_M68B_Innie : TCP_B_UNSC_MC_ALIM_M68B
    {
        displayName="[OCI] M68B ALIM";
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
