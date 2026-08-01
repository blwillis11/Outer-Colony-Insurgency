class CfgPatches {
    class OCI_Fixed_Wing_Vehicles_Duckling {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Fixed Wing Vehicles - Duckling";
        units[] = {
            "OCI_JAS39_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles"
        };
    };
};

class CfgVehicles
{
    class I_Plane_Fighter_04_F;
    class OCI_JAS39_Innie: I_Plane_Fighter_04_F
    {
        displayName="[OCI] JAS-39 Duckling";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Planes";
        scopeCurator=2;
        scope=2;
        side=0;
        hiddenSelectionsTextures[] = {
            "\z\OCI\addons\vehicles\fixed_wing_vehicles\duckling\duckling\Fighter_04_fuselage_01_co.paa",
            "a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_co.paa",
            "a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
        };
        crew = "OCLF_Crewman";
    };
};
