#define RIFLE                   OCI_MA37_TCP_optic_M11VERO
#define RIFLE_MAG               OCI_32Rnd_762x51_Mag

#define RIFLE_GL                OCI_MA37GL_TCP_optic_M11VERO
#define RIFLE_GL_MAG            OCI_32Rnd_762x51_Mag
#define RIFLE_GL_40             TCP_1Rnd_40_Shell_HE

#define PISTOL                  OCI_M6C
#define PISTOL_MAG              OCI_12Rnd_127x30_SAP_Mag

#define MARKSMAN                OCI_M392_DMR
#define MARKSMAN_MAG            OCI_15Rnd_762x51_Mag

#define MACHINEGUN              OCI_LMG_M731
#define MACHINEGUN_MAG          OCI_100rnd_762x51_Mag

#define LAUNCHER	            OCI_M41_SSR
#define LAUNCHER_MAG            OCI_M41_Twin_HEAT

#define LAUNCHER_AA	            OCI_M41_SSR_AA
#define LAUNCHER_AA_MAG	        OCI_M41_Twin_HEAA

#define SHOTGUN	                OCI_M45
#define SHOTGUN_MAG				OCI_6Rnd_12Gauge_Pellets

#define SMG						OCI_M7_SMG
#define SMG_MAG					OCI_48Rnd_5x23Caseless_FMJ_Mag

#define SMG_SPECOPS				OCI_M6J
#define SMG_SPECOPS_MAG			OCI_36Rnd_127x30_SAP_Mag

#define RIFLE_SPECOPS			OCI_MA37K
#define RIFLE_SPECOPS_MAG		OCI_32Rnd_762x51_Mag

#define SNIPER					OCI_SRS99
#define SNIPER_MAG				OCI_4Rnd_127x99_Mag_APFSDS

#define MARKSMAN_SPECOPS		OCI_BR45
#define MARKSMAN_SPECOPS_MAG	OCI_95x40_36Rnd_Mag

#define BINO					OPTRE_Smartfinder

#define FRAG					TCP_M9R_Frag
#define SMOKE					TCP_M21_Smoke
#define SMOKE_BLUE				TCP_M21_SmokeBlue
#define SMOKE_GREEN				TCP_M21_SmokeGreen
#define SMOKE_ORANGE			TCP_M21_SmokeOrange
#define SMOKE_RED               TCP_M21_SmokeRed
#define IR						B_IR_Grenade
#define LIGHT					Chemlight_green

#define ITEM_MAP				ItemMap
#define ITEM_COMPASS			ItemCompass
#define ITEM_RADIO				ItemRadio
#define ITEM_WATCH				ItemWatch
#define ITEM_GPS				ItemGPS
#define ITEM_TERMINAL			O_UavTerminal

#define BLOOD_IV_250             ACE_bloodIV_250
#define BLOOD_IV_500             ACE_bloodIV_500
#define BLOOD_IV_1000            ACE_bloodIV_1000
#define BLOOD_IV_2000            ACE_bloodIV_2000

#define BANDAGE      			ACE_packingBandage
#define MEDKIT       			FirstAidKit
#define SPLINT             		ACE_splint

#define FACTION					SUBCOMPONENT3
#define PFACTION                DOUBLES(PREFIX,FACTION)

//--- Backpack Macros

//--- Ammo Bearer
#define BACKPACK_A(baseClass,faction) class TRIPLES(baseClass,faction,A): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(RIFLE_MAG,10)\
	};\
	class TransportItems{};\
	class TransportWeapons{};\
};

//--- Assistant Autorifleman
#define BACKPACK_AAR(baseClass,faction) class TRIPLES(baseClass,faction,AAR): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(MACHINEGUN_MAG,3)\
	};\
	class TransportItems{};\
	class TransportWeapons{};\
};

//--- Autorifleman
#define BACKPACK_AR(baseClass,faction) class TRIPLES(baseClass,faction,AR): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(MACHINEGUN_MAG,3)\
	};\
	class TransportItems{};\
	class TransportWeapons{};\
};

//--- Medic / Combat Life Saver
#define BACKPACK_MED(baseClass,faction) class TRIPLES(baseClass,faction,MED): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines{};\
	class TransportItems\
	{\
		ITEM_XX(MediKit,1)\
		ITEM_XX(FirstAidKit,10)\
	};\
	class TransportWeapons{};\
};

//--- Engineer
#define BACKPACK_ENG(baseClass,faction) class TRIPLES(baseClass,faction,ENG): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(SMOKE_ORANGE,1)\
		MAG_XX(SMOKE_BLUE,1)\
		MAG_XX(SMOKE_GREEN,1)\
	};\
	class TransportItems\
	{\
		ITEM_XX(ToolKit,1)\
		ITEM_XX(MineDetector,1)\
		ITEM_XX(DemoCharge_Remote_Mag,2)\
		ITEM_XX(SatchelCharge_Remote_Mag,1)\
	};\
	class TransportWeapons{};\
};

//--- Explosives Specialist
#define BACKPACK_EXP(baseClass,faction) class TRIPLES(baseClass,faction,EXP): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(SMOKE_GREEN,1)\
	};\
	class TransportItems\
	{\
		ITEM_XX(ToolKit,1)\
		ITEM_XX(MineDetector,1)\
		ITEM_XX(APERSBoundingMine_Range_Mag,3)\
		ITEM_XX(ClaymoreDirectionalMine_Remote_Mag,2)\
		ITEM_XX(DemoCharge_Remote_Mag,1)\
		ITEM_XX(SLAMDirectionalMine_Wire_Mag,2)\
	};\
	class TransportWeapons{};\
};

//--- Grenadier
#define BACKPACK_GRE(baseClass,faction) class TRIPLES(baseClass,faction,GRE): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(SMOKE_GREEN,1)\
		MAG_XX(SMOKE_ORANGE,1)\
		MAG_XX(SMOKE_BLUE,1)\
		MAG_XX(SMOKE,4)\
		MAG_XX(FRAG,4)\
	};\
	class TransportItems {};\
	class TransportWeapons{};\
};

//--- Anti-Air
#define BACKPACK_AA(baseClass,faction) class TRIPLES(baseClass,faction,AA): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(LAUNCHER_AA_MAG,1)\
	};\
	class TransportItems {};\
	class TransportWeapons{};\
};

//--- Anti-Tank
#define BACKPACK_AT(baseClass,faction) class TRIPLES(baseClass,faction,AT): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(LAUNCHER_MAG,1)\
	};\
	class TransportItems {};\
	class TransportWeapons{};\
};

//--- Repair Specialist
#define BACKPACK_REP(baseClass,faction) class TRIPLES(baseClass,faction,REP): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(SMOKE_ORANGE,1)\
		MAG_XX(SMOKE_BLUE,1)\
		MAG_XX(SMOKE_GREEN,1)\
	};\
	class TransportItems\
	{\
		ITEM_XX(ToolKit,1)\
	};\
	class TransportWeapons{};\
};

#define BACKPACK_RADIO(baseClass,faction) class TRIPLES(baseClass,faction,RADIO): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(SMOKE_ORANGE,1)\
		MAG_XX(SMOKE_BLUE,1)\
		MAG_XX(SMOKE_GREEN,1)\
		MAG_XX(SMOKE_RED,1)\
	};\
	class TransportItems{};\
	class TransportWeapons{};\
};

//--- Full Backpack Macro
#define UNIT_BACKPACKS(baseClass,faction)\
BACKPACK_A(baseClass,faction)\
BACKPACK_AAR(baseClass,faction)\
BACKPACK_AR(baseClass,faction)\
BACKPACK_MED(baseClass,faction)\
BACKPACK_ENG(baseClass,faction)\
BACKPACK_EXP(baseClass,faction)\
BACKPACK_GRE(baseClass,faction)\
BACKPACK_AA(baseClass,faction)\
BACKPACK_AT(baseClass,faction)\
BACKPACK_REP(baseClass,faction)\
BACKPACK_RADIO(baseClass,faction)

