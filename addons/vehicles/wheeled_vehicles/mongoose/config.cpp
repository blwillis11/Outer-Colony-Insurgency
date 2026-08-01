class CfgPatches {
    class OCI_Wheeled_Vehicles_Mongoose {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Wheeled Vehicles - Mongoose";
        units[] = {
            "OCI_M274R_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles"
        };
    };
};

class CfgVehicles
{
    class TCP_B_UNSC_A_W_M274R;
    class OCI_M274R_Innie : TCP_B_UNSC_A_W_M274R
    {
        displayName="[OCLF] M274R ULATV Mongoose";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Cars";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
    };
};
