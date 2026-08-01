class TCP_V_M43A_BaseSec_2_Olive;
class TCP_V_M43A_Light_3_Olive;
class TCP_V_M43A_Light_1_Olive;

class OCLF_V_M43A_BaseSec_2_Standard: TCP_V_M43A_BaseSec_2_Olive
{
    author=AUTHOR;
    scope=2;
    displayName="M43/A OCLF Standard Vest";
    class itemInfo: itemInfo
    {
        OPFOR_VEST_HITPOINT_INFO
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\vest\vest_M43A_01_CO.paa),
        QP(data\vest\vest_Shoulders_BaseSecurity_CO.paa),
        QP(data\vest\vest_M43A_02_CO.paa),
        QP(data\vest\vest_M43A_03_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
};
class OCLF_V_M43A_Light_3_Standard: TCP_V_M43A_Light_3_Olive
{
    author=AUTHOR;
    scope=2;
    displayName="M43/A OCLF Standard Vest";
    class itemInfo: itemInfo
    {
        OPFOR_VEST_HITPOINT_INFO
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\vest\vest_M43A_01_CO.paa),
        QP(data\vest\vest_M43A_02_CO.paa),
        QP(data\vest\vest_M43A_03_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
};
class OCLF_V_M43A_Light_1_Standard: TCP_V_M43A_Light_1_Olive
{
    author=AUTHOR;
    scope=2;
    displayName="M43/A OCLF Light Standard Vest";
    class itemInfo: itemInfo
    {
        OPFOR_VEST_HITPOINT_INFO
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\vest\vest_M43A_01_CO.paa),
        QP(data\vest\vest_M43A_03_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
};
class OCLF_V_M43A_BaseSec_2_Arctic: OCLF_V_M43A_BaseSec_2_Standard
{
    displayName="M43/A OCLF Arctic Vest";
    hiddenSelectionsTextures[]=
    {
        QP(data\vest\arctic\vest_M43A_01_CO.paa),
        QP(data\vest\arctic\vest_Shoulders_BaseSecurity_CO.paa),
        QP(data\vest\arctic\vest_M43A_02_CO.paa),
        QP(data\vest\arctic\vest_M43A_03_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
};
class OCLF_V_M43A_Light_3_Arctic: OCLF_V_M43A_Light_3_Standard
{
    displayName="M43/A OCLF Arctic Vest";
    hiddenSelectionsTextures[]=
    {
        QP(data\vest\arctic\vest_M43A_01_CO.paa),
        QP(data\vest\arctic\vest_M43A_02_CO.paa),
        QP(data\vest\arctic\vest_M43A_03_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
};
class OCLF_V_M43A_Light_1_Arctic: OCLF_V_M43A_Light_1_Standard
{
    displayName="M43/A OCLF Light Arctic Vest";
    hiddenSelectionsTextures[]=
    {
        QP(data\vest\arctic\vest_M43A_01_CO.paa),
        QP(data\vest\arctic\vest_M43A_03_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
};
class OCLF_V_M43A_BaseSec_2_Tropic: OCLF_V_M43A_BaseSec_2_Standard
{
    displayName="M43/A OCLF Tropic Vest";
    hiddenSelectionsTextures[]=
    {
        QP(data\vest\tropic\vest_M43A_01_CO.paa),
        QP(data\vest\tropic\vest_Shoulders_BaseSecurity_CO.paa),
        QP(data\vest\tropic\vest_M43A_02_CO.paa),
        QP(data\vest\tropic\vest_M43A_03_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
};
class OCLF_V_M43A_Light_3_Tropic: OCLF_V_M43A_Light_3_Standard
{
    displayName="M43/A OCLF Light Tropic Vest";
    hiddenSelectionsTextures[]=
    {
        QP(data\vest\tropic\vest_M43A_01_CO.paa),
        QP(data\vest\tropic\vest_M43A_02_CO.paa),
        QP(data\vest\tropic\vest_M43A_03_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
};
class OCLF_V_M43A_Light_1_Tropic: OCLF_V_M43A_Light_1_Standard
{
    displayName="M43/A OCLF Light Tropic Vest";
    hiddenSelectionsTextures[]=
    {
        QP(data\vest\tropic\vest_M43A_01_CO.paa),
        QP(data\vest\tropic\vest_M43A_03_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
};

class TCP_V_M43D_ODST_3_2_Black;

class OCLF_V_M43D_ODST_3_2_Black: TCP_V_M43D_ODST_3_2_Black
{
    author=AUTHOR;
    scope=2;
    displayName="M43/D OCLF ORC Vest";
    class itemInfo: itemInfo
    {
        OPFOR_SPECOPS_VEST_HITPOINT_INFO
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\vest\black\vest_M43A_01_CO.paa),
        QP(data\vest\black\vest_Shoulders_ODST_CO.paa),
        QP(data\vest\black\vest_M43D_ODST_CO.paa),
        QP(data\vest\black\vest_M43A_02_CO.paa),
        QP(data\vest\black\vest_M43A_03_CO.paa),
        QP(data\vest\black\vest_M43_DecalSheet_CA.paa)
    };
};