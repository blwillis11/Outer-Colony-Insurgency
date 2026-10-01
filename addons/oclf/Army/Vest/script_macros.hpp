#define BASESEC_CAMOS(CAMO) \
    class DOUBLES(OCLF_V_M43A_BaseSec_3,##CAMO##) : TCP_V_M43A_BaseSec_3_Olive {\
        author=AUTHOR; \
        displayName=Q(M43/A OCLF ##CAMO## Vest); \
        class ItemInfo: ItemInfo \
        { \
            OPFOR_VEST_HITPOINT_INFO \
        }; \
        hiddenSelectionsTextures[]= \
        { \
            QP(Army\Vest\data\##CAMO##\vest_M43A_01_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_Shoulders_BaseSecurity_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43A_02_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43A_03_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43_DecalSheet_CA.paa) \
        }; \
    }; \
    class DOUBLES(OCLF_V_M43A_BaseSec_2,##CAMO##) : TCP_V_M43A_BaseSec_2_Olive {\
        author=AUTHOR; \
        displayName=Q(M43/A OCLF ##CAMO## Vest); \
        class ItemInfo: ItemInfo \
        { \
            OPFOR_VEST_HITPOINT_INFO \
        }; \
        hiddenSelectionsTextures[]= \
        { \
            QP(Army\Vest\data\##CAMO##\vest_M43A_01_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_Shoulders_BaseSecurity_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43A_02_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43A_03_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43_DecalSheet_CA.paa) \
        }; \
    };

#define LIGHT_CAMOS(CAMO) \
    class DOUBLES(OCLF_V_M43A_Light_2,##CAMO##) : TCP_V_M43A_Light_2_Olive {\
        author=AUTHOR; \
        displayName=Q(M43/A OCLF ##CAMO## Vest); \
        class ItemInfo: ItemInfo \
        { \
            OPFOR_VEST_HITPOINT_INFO \
        }; \
        hiddenSelectionsTextures[]= \
        { \
            QP(Army\Vest\data\##CAMO##\vest_M43A_01_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43A_02_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43A_03_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43_DecalSheet_CA.paa) \
        }; \
    }; \
    class DOUBLES(OCLF_V_M43A_Light_1,##CAMO##) : TCP_V_M43A_Light_1_Olive {\
        author=AUTHOR; \
        displayName=Q(M43/A OCLF ##CAMO## Vest); \
        class ItemInfo: ItemInfo \
        { \
            OPFOR_VEST_HITPOINT_INFO \
        }; \
        hiddenSelectionsTextures[]= \
        { \
            QP(Army\Vest\data\##CAMO##\vest_M43A_01_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43A_03_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43_DecalSheet_CA.paa) \
        }; \
    };
#define GUNGIRS_CAMOS(CAMO) \
    class DOUBLES(OCLF_V_M43A_GungnirS_3,##CAMO##) : TCP_V_M43A_GungnirS_3_Olive {\
        author=AUTHOR; \
        displayName=Q(M43/A OCLF ##CAMO## Vest); \
        class ItemInfo: ItemInfo \
        { \
            OPFOR_VEST_HITPOINT_INFO \
        }; \
        hiddenSelectionsTextures[]= \
        { \
            QP(Army\Vest\data\##CAMO##\vest_M43A_01_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_Shoulders_Gungnir_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43A_02_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43A_03_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43_DecalSheet_CA.paa) \
        }; \
    };