#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT_NAME);
		units[] = {
        };

		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON),
            QUOTE(OPTRE_Corvette_archer),
            QUOTE(PHEN_CW_PLUS),
            QUOTE(OCI_Vehicles_Static_Archer_MLS)
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
        displayName = "Archer Missile Type 1 Chemical Warhead";
        CBRN_chemical = 1;
        CBRN_heightOfBurst = 25;
        CBRN_isProjectile = 1;
        CBRN_lifetime = 300;
        CBRN_sprayWidth = 250;
    };
};


class Turrets;
class MainTurret : Turrets {};
class CfgVehicles
{
    class OPTRE_Corvette_archer_system_INS;
    
    class OCI_Archer_Missile_System_Innie : OPTRE_Corvette_archer_system_INS
    {
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