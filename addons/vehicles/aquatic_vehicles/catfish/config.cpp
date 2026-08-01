class CfgPatches {
    class OCI_Aquatic_Vehicles_Catfish {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Aquatic Vehicles - Catfish";
        units[] = {
            "OCI_Catfish_MG_Innie",
            "OCI_Catfish_Unarmed_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "optre_catfish",
            "OCI_OCLF_Units"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class optre_catfish_ins_mg_f;
    class OCI_Catfish_MG_Innie : optre_catfish_ins_mg_f
    {
        displayName="[OCI] M112/A Wet Patrol Craft (LAAG)";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Boats";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
    };

    class optre_catfish_ins_unarmed_f;
    class OCI_Catfish_Unarmed_Innie : optre_catfish_ins_unarmed_f
    {
        displayName="[OCI] M112 Wet Patrol Craft";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Boats";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
    };
};
