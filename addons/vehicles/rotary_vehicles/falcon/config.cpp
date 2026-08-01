class CfgPatches {
    class OCI_Rotary_Vehicles_Falcon {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Rotary Vehicles - Falcon";
        units[] = {
            "OCI_MH144_Falcon_Innie",
            "OCI_UH144S_Falcon_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Vehicles_Air_Falcon"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_INS_MH_144_Falcon;
    class OCI_MH144_Falcon_Innie: OPTRE_INS_MH_144_Falcon
    {
        displayName = "[OCI] MH-144 Falcon";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Helicopters";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
    };
    class OPTRE_UNSC_falcon_S_ins;
    class OCI_UH144S_Falcon_Innie: OPTRE_UNSC_falcon_S_ins
    {
        displayName = "[OCI] UH-144S Falcon";
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
