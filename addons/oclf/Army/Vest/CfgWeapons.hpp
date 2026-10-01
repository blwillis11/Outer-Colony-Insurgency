class CfgWeapons
{
    class TCP_V_M43A_BaseSec_2_Base;
    class TCP_V_M43A_BaseSec_3_Base;
    class TCP_V_M43A_Light_2_Base;
    class TCP_V_M43A_Light_1_Base;
    class TCP_V_M43A_GungnirS_3_Base;
    class TCP_V_M43A_BaseSec_2_Olive: TCP_V_M43A_BaseSec_2_Base {
        class ItemInfo;
    };
    class TCP_V_M43A_BaseSec_3_Olive: TCP_V_M43A_BaseSec_3_Base {
        class ItemInfo;
    };
    class TCP_V_M43A_Light_2_Olive: TCP_V_M43A_Light_2_Base {
        class ItemInfo;
    };
    class TCP_V_M43A_Light_1_Olive: TCP_V_M43A_Light_1_Base {
        class ItemInfo;
    };
    class TCP_V_M43A_GungnirS_3_Olive: TCP_V_M43A_GungnirS_3_Base {
        class ItemInfo;
    };

    GUNGIRS_CAMOS(Olive)
    BASESEC_CAMOS(Arctic)
    BASESEC_CAMOS(Olive)
    BASESEC_CAMOS(Tropic)
    BASESEC_CAMOS(Brown)
    LIGHT_CAMOS(Arctic)
    LIGHT_CAMOS(Olive)
    LIGHT_CAMOS(Tropic)
    LIGHT_CAMOS(Brown)

    class TCP_V_M43D_ODST_3_2_Black;

    class OCLF_V_M43D_ODST_3_2_Black: TCP_V_M43D_ODST_3_2_Black
    {
        author=AUTHOR;
        scope=2;
        displayName="M43/D OCLF ORC Vest";
        class ItemInfo: ItemInfo
        {
            OPFOR_SPECOPS_VEST_HITPOINT_INFO
        };
        hiddenSelectionsTextures[]=
        {
            QP(Army\Vest\data\black\vest_M43A_01_CO.paa),
            QP(Army\Vest\data\black\vest_Shoulders_ODST_CO.paa),
            QP(Army\Vest\data\black\vest_M43D_ODST_CO.paa),
            QP(Army\Vest\data\black\vest_M43A_02_CO.paa),
            QP(Army\Vest\data\black\vest_M43A_03_CO.paa),
            QP(Army\Vest\data\black\vest_M43_DecalSheet_CA.paa)
        };
    };
};