class CfgPatches {
    class OCI_Static_Vehicles_Archer {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - Archer Missile System";
        units[] = {
            "OCI_Archer_Missile_System_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Corvette_archer"
        };
        skipwhenmissingdependancies = 1;
    };
};

class CfgVehicles
{
    class OPTRE_Corvette_archer_system_INS;
    class OCI_Archer_Missile_System_Innie : OPTRE_Corvette_archer_system_INS
    {
        displayName="[OCI] Archer Missile System";
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
