class CfgPatches
{
    class OCI_Militia_Units
    {
        name = "Outer Colony Militia - Units";
        units[]=
        {
            "Militia_Militiaman_AR",
            "Militia_Militiaman_SMG",
            "Militia_Militiaman_DMR",
            "Militia_Militiaman_SG"
        };
        requiredAddons[] =
        {
            "OCI_Militia"
        };
    };
};
class CfgVehicles
{
	class O_Soldier_base_F;
	class O_Soldier_F : O_Soldier_base_F {
		class EventHandlers;
	};
    class Militia_UnitBase: O_Soldier_F
    {
        scope = 0;
        scopeCurator = 0;
        
        author = "Salmon";
        side = 0;
        faction = "OCI_Militia_Fac";
        editorCategory = "OCI_Militia_EdCat";
        editorSubcategory = "OCI_Infantry_EdSubCat";
        backpack = "";
        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;
        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
        uniformClass = "OPTRE_Ins_ER_jacket_surplus_redshirt";
        OCI_Hats[] = {
		};
		OCI_Glasses[] = {
		};
		OCI_Uniforms[] = {
		};
		OCI_Vests[] = {
		};
		OCI_Packs[] = {
		};
        class EventHandlers : EventHandlers {
			class Randomize {
				init = "if (local (_this # 0)) then {(_this # 0) call OCI_fnc_RandomizeGear;};";
				respawn = "if (local (_this # 0)) then {(_this # 0) call OCI_fnc_RandomizeGear;};";
			};
		};

        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
        respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
        
    };
    class Militia_Militiaman_AR: Militia_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Militiaman (AR)";
        weapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        respawnWeapons[] = {"OCI_MA37_TCP_optic_M11VERO", "Throw", "Put"};
        linkedItems[] = {"V_LegStrapBag_black_F","H_Bandanna_cbr_headset","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"V_LegStrapBag_black_F","H_Bandanna_cbr_headset","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","OCI_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke"}; 
        OCI_Hats[] = {
            "None",.5,
            "H_Construction_headset_black_F",.5,
            "H_Hat_Safari_olive_F",.5,
            "H_Watchcap_red",.5,
            "H_Bandanna_sgg_headset",.5,
            "H_Bandanna_camo_headset",.5,
            "H_Bandanna_cbr_headset",.5
        };
        OCI_Glasses[] = {
            "None",.5,
            "OPTRE_Glasses_Cigarette",.1,
            "G_Balaclava_GreenStrips",.1,
            "G_Bandanna_oli",.1,
            "G_Bandanna_khk",.1
        };
        OCI_Uniforms[] = {
            "OPTRE_Ins_ER_jacket_surplus_redshirt",.5,
            "OPTRE_Ins_ER_jacket_od_surplus",.5,
            "OPTRE_Ins_ER_jacket_surplus_brown",.5,
            "OPTRE_Ins_ER_rolled_OD_crimson",.5
        };
    };
    class Militia_Militiaman_SMG: Militia_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Militiaman (SMG)";
        weapons[] = {"OCI_M6J", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M6J", "Throw", "Put"};
        uniformClass = "OPTRE_Ins_ER_uniform_GGod";
        linkedItems[] = {"V_LegStrapBag_olive_F","H_Cap_blk_headset","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"V_LegStrapBag_olive_F","H_Cap_blk_headset","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","OCI_36Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        OCI_Hats[] = {
            "None",.5,
            "H_Cap_blk_headset",.5,
            "H_Construction_headset_orange_F",.1,
            "H_Cap_grn_headset",.5,
            "H_Cap_red_headset",.5
        };
        OCI_Glasses[] = {
            "None",.5,
            "OPTRE_Glasses_Cigarette",.1,
            "G_Balaclava_GreenStrips",.1,
            "G_Bandanna_oli",.1,
            "G_Bandanna_khk",.1
        };
        OCI_Uniforms[] = {
            "OPTRE_Ins_ER_uniform_GGod",.5,
            "OPTRE_Ins_ER_uniform_GGgrey",.5,
            "OPTRE_Ins_ER_rolled_OD_blknred",.5,
            "OPTRE_Ins_ER_rolled_jean_orca",.5
        };
    };
    class Militia_Militiaman_DMR: Militia_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Militiaman (DMR)";
        weapons[] = {"OCI_M392_DMR", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M392_DMR", "Throw", "Put"};
        uniformClass = "OPTRE_Ins_ER_uniform_GAgreen";
        linkedItems[] = {"V_Pocketed_coyote_F","H_Booniehat_tan_headset","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"V_Pocketed_coyote_F","H_Booniehat_tan_headset","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","OCI_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
        OCI_Hats[] = {
            "None",.5,
            "H_Booniehat_tan_headset",.5,
            "H_Construction_headset_vrana_F",.1,
            "H_Booniehat_oli_headset",.5,
            "H_Booniehat_mgrn_headset",.5
        };
        OCI_Glasses[] = {
            "None",.5,
            "OPTRE_Glasses_Cigarette",.1,
            "G_Balaclava_GreenStrips",.1,
            "G_Bandanna_oli",.1,
            "G_Bandanna_khk",.1
        };
        OCI_Uniforms[] = {
            "OPTRE_Ins_ER_uniform_GAgreen",.5,
            "OPTRE_Ins_ER_uniform_GGgrey",.5,
            "OPTRE_Ins_ER_rolled_OD_blknred",.5,
            "OPTRE_Ins_ER_rolled_surplus_black",.5
        };
    };
    class Militia_Militiaman_SG: Militia_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OCI] Militiaman (SG)";
        weapons[] = {"OCI_M45", "Throw", "Put"};
        respawnWeapons[] = {"OCI_M45", "Throw", "Put"};
        uniformClass = "U_C_ManJacket_01_orange";
        linkedItems[] = {"V_BandollierB_rgr","H_Watchcap_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"V_BandollierB_rgr","H_Watchcap_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"OCI_6Rnd_12Gauge_Pellets","OCI_6Rnd_12Gauge_Pellets","OCI_6Rnd_12Gauge_Pellets","TCP_M21_Smoke","TCP_M21_Smoke"};
        respawnMagazines[] = {"OCI_6Rnd_12Gauge_Pellets","OCI_6Rnd_12Gauge_Pellets","OCI_6Rnd_12Gauge_Pellets","TCP_M21_Smoke","TCP_M21_Smoke"};
        OCI_Hats[] = {
            "None",.5,
            "H_Watchcap_camo",.5,
            "H_Construction_headset_vrana_F",.1,
            "H_Watchcap_sgg",.5,
            "H_Watchcap_blk",.5
        };
        OCI_Glasses[] = {
            "None",.5,
            "OPTRE_Glasses_Cigarette",.1,
            "G_Balaclava_GreenStrips",.1,
            "G_Bandanna_oli",.1,
            "G_Bandanna_khk",.1
        };
        OCI_Uniforms[] = {
            "U_C_ManJacket_01_orange",.5,
            "U_C_ManJacket_01_pink",.5,
            "U_C_ManJacket_01_gray",.5,
            "U_C_ManJacket_01_sage",.5
        };
    };
};