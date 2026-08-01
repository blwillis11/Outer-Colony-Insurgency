class CfgPatches {
    class OCI_Rotary_Vehicles_Pelican {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Rotary Vehicles - Pelican";
        units[] = {
            "OCI_Pelican_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Vehicles_Pelican"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_Pelican_unarmed_ins;
    class OCI_Pelican_Innie: OPTRE_Pelican_unarmed_ins
    {
        displayName = "[OCI] D77H-TCI Pelican";
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
