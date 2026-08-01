class CfgPatches {
    class OCI_Rotary_Vehicles_Dragonfly {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Rotary Vehicles - Dragonfly";
        units[] = {
            "OCI_AH44_Dragonfly_Innie"
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
    class TKE_Ext_Dragonfly_A_Innie;
    class OCI_AH44_Dragonfly_Innie: TKE_Ext_Dragonfly_A_Innie
    {
        displayName = "[OCI] AH-44/A Dragonfly";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Helicopters";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
    };
};
