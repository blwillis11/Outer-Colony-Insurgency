class CfgPatches {
    class OCI_Static_Vehicles_AU44_Mortar {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - AU-44 Mortar";
        units[] = {
            "OCI_AU_44_Mortar_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_AU_44_Mortar"
        };
        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_AU_44_INS_Mortar;
    class OCI_AU_44_Mortar_Innie : OPTRE_AU_44_INS_Mortar
    {
        displayName="[OCI] AU-44 Mortar";
        author= "OCI Dev Team";
        faction = "OCI_OCI_Fac";
        editorCategory = "OCI_OCI_EdCat";
        editorSubcategory = "EdSubcat_Turrets";
        scopeCurator=2;
        scope=2;
        side=0;
        crew = "OCLF_Crewman";
    };
};
