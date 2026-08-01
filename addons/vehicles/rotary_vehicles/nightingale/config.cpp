class CfgPatches {
    class OCI_Rotary_Vehicles_Nightingale {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Rotary Vehicles - Nightingale";
        units[] = {
            "OCI_EV41_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "DMNS_Vehicles_Nightingale"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class DMNS_UNSC_Nightingale;
    class OCI_EV41_Innie: DMNS_UNSC_Nightingale
    {
        displayName = "[OCI] EV-41 Nightingale";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Helicopters";
        scopeCurator=2;
        scope=2;
        side=0;
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\rotary_vehicles\nightingale\nightingale\Nightingale_Base_co.paa"
            };
        crew = "OCLF_Crewman";
    };
};
