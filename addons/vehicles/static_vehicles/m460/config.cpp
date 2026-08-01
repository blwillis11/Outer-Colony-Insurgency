class CfgPatches {
    class OCI_Static_Vehicles_m460AGL {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - M460AGL";
        units[] = {
            "OCI_M460AGL_Low_GMG_Innie",
            "OCI_M460AGL_GMG_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Weapons_Turrets_M460AGL"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_M460AGL_Low_Static_GMG_innie;
    class OCI_M460AGL_Low_GMG_Innie : OPTRE_M460AGL_Low_Static_GMG_innie
    {
        displayName="[OCI] M460AGL Low GMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCLF_Crewman";
    };
    class OPTRE_M460AGL_Static_GMG_innie;
    class OCI_M460AGL_GMG_Innie : OPTRE_M460AGL_Static_GMG_innie
    {
        displayName="[OCI] M460AGL GMG";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        crew = "OCLF_Crewman";
    };
};
