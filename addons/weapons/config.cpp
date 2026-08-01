#include "script_component.hpp"

class CfgPatches {
    class OCI_Weapons {
        name = COMPONENT_NAME;
		units[] = 
        {
        }; 
        weapons[] = {
            "OCI_M392_DMR",
            "OCI_M45",
            "OCI_M6C",
            "OCI_M6J",
            "OCI_M7_SMG",
			"OCI_LMG_M731",
            "OCI_MA37GL",
            "OCI_MA37",
            "OCI_MA40GL",
            "OCI_MA40",
            "OCI_MA37K",
            "OCI_M41_SSR",
            "OCI_Fang2",
			"OCI_HMG_M250",
			"OCI_GMG_M247A1"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OCI_Main"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};
class Single;
// configs go here
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

class cfgAmmo {

    #include "data\ammo\ammo.hpp"

};

class cfgMagazines
{
    #include "data\ammo\magazines.hpp"

};

class cfgMagazineWells{
	class OCI_rockets{
		OCI_Magazines[] = {
			"OCI_M41_Twin_HEAT",
			"OCI_M41_Twin_HEAP",
			"OCI_M41_Twin_HEAA"
		};
	};
	class OCI_15Rnd_762x51_MagWell{
		OCI_Magazines[] = {
			"OCI_15Rnd_762x51_Mag"
		};
	};
	class OCI_32Rnd_762x51_MagWell{
		OCI_Magazines[] = {
			"OCI_32Rnd_762x51_Mag"
		};
	};
	class OCI_1Rnd_40mm_MagWell{
		OCI_Magazines[] = {
			"OCI_1Rnd_40mm_Shell_HE",
			"OCI_1Rnd_40mm_Shell_Smoke_White"
		};
	};
	class OCI_100Rnd_762x51_MagWell{
		OCI_Magazines[] = {
			"OCI_100rnd_762x51_Mag"
		};
	};
	class OCI_200Rnd_762x51_MagWell{
		OCI_Magazines[] = {
			"OCI_200rnd_762x51_Mag"
		};
	};
	class OCI_15Rnd_762x51_DMR_MagWell{
		OCI_Magazines[] = {
			"OCI_15Rnd_762x51_Mag",
			"OCI_15Rnd_762x51_HVAP_Mag",
			"OCI_15Rnd_762x51_BTHP_Mag"
		};
	};
	class OCI_36Rnd_95x40_MagWell{
		OCI_Magazines[] = {
            "OCI_95x40_36Rnd_Mag"
		};
	};
	class OCI_48Rnd_5x23Caseless_MagWell{
		OCI_Magazines[] = {
			"OCI_48Rnd_5x23Caseless_FMJ_Mag"
		};
	};
	class OCI_60Rnd_5x23Caseless_MagWell{
		OCI_Magazines[] = {
			"OCI_60Rnd_5x23Caseless_FMJ_Mag"
		};
	};
	class OCI_6Rnd_12Gauge_MagWell
	{
		OCI_Magazines[] = {
			"OCI_6Rnd_12Gauge_Pellets",
			"OCI_6Rnd_12Gauge_Slugs",
			"OCI_6Rnd_12Gauge_Smoke"
		};
	};
	class OCI_12Rnd_127x30_MagWell{
		OCI_Magazines[] = {
			"OCI_12Rnd_127x30_SAP_Mag"
		};
	};
	class OCI_24Rnd_127x30_MagWell{
		OCI_Magazines[] = {
			"OCI_24Rnd_127x30_SAP_Mag"
		};
	};
	class OCI_36Rnd_127x30_MagWell{
		OCI_Magazines[] = {
			"OCI_36Rnd_127x30_SAP_Mag"
		};
	};
	class OCI_4Rnd_127x99_MagWell{
		OCI_Magazines[] = {
			"OCI_4Rnd_127x99_Mag_APFSDS"
		};
	};
};

class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadHVAP1="GestureReloadHVAP1";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class NoActions: ManActions
		{
			GestureReloadHVAP1[]=
			{
				"GestureReloadHVAP1",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadHVAP1: Default
		{
			file="\z\OCI\addons\weapons\anims\hvap1reload.rtm";
			looped=0;
			speed=0.28;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			LeftHandIKCurve[]={0.0015625,0.25, 0.15,0, 0.95,0, 1,1};
			RightHandIKCurve[]={1,1, 0.05,0, 0.95,0, 1,1};
		};
	};
};
