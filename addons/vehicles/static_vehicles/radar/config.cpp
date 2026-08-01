class CfgPatches {
    class OCI_Static_Vehicles_Radar {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - Radar";
        units[] = {
            "OCI_E_ELF_L_236_Radar_Bunker_Innie",
            "OCI_E_ELF_L_236_Radar_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Buildings2_Radar_Bunker"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_X_ELF_L_236_Radar_Bunker_System;
    class OCI_E_ELF_L_236_Radar_Bunker_Innie : OPTRE_X_ELF_L_236_Radar_Bunker_System
    {
        displayName="[OCI] X-ELF-L 236 Radar Bunker System";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "OCI_Radar_EdSubCat";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "O_UAV_AI";
    };
    class OPTRE_X_ELF_L_236_Radar_System;
    class OCI_E_ELF_L_236_Radar_Innie : OPTRE_X_ELF_L_236_Radar_System
    {
        displayName="[OCI] X-ELF-L 236 Radar System";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "OCI_Radar_EdSubCat";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "O_UAV_AI";
    };
};
