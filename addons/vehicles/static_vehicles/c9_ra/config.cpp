class CfgPatches {
    class OCI_Static_Vehicles_C9_SAM {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - C9 SAM";
        units[] = {
            "OCI_C9_SAM_Innie",
            "OCI_C9_Low_SAM_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Weapons_Turrets_C9_SAM"
        };
        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_C9_SAM_SR_Cluster_F;
    class OCI_C9_SAM_Innie : OPTRE_C9_SAM_SR_Cluster_F
    {
        displayName="[OCI] C9 SAM (4km)";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "O_UAV_AI";
    };
    class OPTRE_C9_SAM_SR_Low_Cluster_F;
    class OCI_C9_Low_SAM_Innie : OPTRE_C9_SAM_SR_Low_Cluster_F
    {
        displayName="[OCI] C9 SAM (Low) (4km)";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "O_UAV_AI";
    };
};
