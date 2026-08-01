class CfgPatches {
    class OCI_Fixed_Wing_Vehicles_Mallard {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Fixed Wing Vehicles - Mallard";
        units[] = {
            "OCI_HF35A_Mallard_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "TKE_Ext_V_OPTRE"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class TKE_Ext_GUSA_Innie;
    class OCI_HF35A_Mallard_Innie: TKE_Ext_GUSA_Innie
    {
        displayName="[OCI] HF-35/A Mallard";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Planes";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
    };
};
