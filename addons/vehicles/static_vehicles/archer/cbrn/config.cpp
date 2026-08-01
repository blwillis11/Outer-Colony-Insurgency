class CfgPatches {
    class OCI_Static_Vehicles_Archer_CBRN {
        addonRootClass="OCI_Vehicles";
        name = "Outer Colony Insurgency - Static Vehicles - Archer Missile System - CBRN Variant";
        units[] = {
            "OCI_Archer_Missile_System_Innie"
        };
        requiredAddons[] = {
            "OCI_Vehicles",
            "OPTRE_Corvette_archer",
            "OCI_Static_Vehicles_Archer"
        };
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons
{
    class Optre_weapon_VLS_01;
    class OCI_weapon_VLS_01 : Optre_weapon_VLS_01
    {
        magazines[] = {"OCI_magazine_Missiles_Cruise_01_x5_Chemical_Type_1","magazine_Missiles_Cruise_01_x5","magazine_Missiles_Cruise_01_Cluster_x5"};
    };
};

class CfgMagazines
{
    class magazine_Missiles_Cruise_01_x5;
    class OCI_magazine_Missiles_Cruise_01_x5_Chemical_Type_1 : magazine_Missiles_Cruise_01_x5
    {
        displayName = "Archer Missile Type 1 Chemical Warhead";
        ammo = "OCI_ammo_Missile_Cruise_01_Chemical_Type_1";
    };
};

class CfgAmmo
{
    class Optre_ammo_Missile_Cruise_01;
    class OCI_ammo_Missile_Cruise_01_Chemical_Type_1 : Optre_ammo_Missile_Cruise_01
    {
        CBRN_chemical = 1;
        CBRN_heightOfBurst = 25;
        CBRN_isProjectile = 1;
        CBRN_lifetime = 300;
        CBRN_sprayWidth = 75;
    };
};

class CfgVehicles
{
    class OPTRE_Corvette_archer_system_INS;
    class Turrets;
    class MainTurret;
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
        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] = {"OCI_magazine_Missiles_Cruise_01_x5_Chemical_Type_1","magazine_Missiles_Cruise_01_x5","magazine_Missiles_Cruise_01_Cluster_x5"};
                weapons[] = {"OCI_weapon_VLS_01"};
            };
        };
    };
};