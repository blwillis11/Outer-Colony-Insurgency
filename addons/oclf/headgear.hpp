class TCP_H_Helmet_CH43A_Olive;
class TCP_H_Helmet_CH43A_Olive_ChinstrapOffset;


class OCLF_H_Helmet_CH43A_Standard: TCP_H_Helmet_CH43A_Olive
{
    author=AUTHOR;
    scope=2;
    displayName="[OCLF] Helmet CH43A (Standard)";
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\standard\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    allowedfacewear[] = {
        "",1,
        "TCP_G_TacticalGlasses_Red",.5,
        "TCP_G_BalaclavaTacticalGlasses_Olive_Red",.5
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Standard";
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=LVL2_ARMOR;
            passThrough=LVL2_PASS;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Standard_ChinstrapOffset: TCP_H_Helmet_CH43A_Olive_ChinstrapOffset
{
    author=AUTHOR;
    scope=2;
    displayName="[OCLF] Helmet CH43A (Standard)";
    allowedFacewear[] = {
        "",1,
        "TCP_G_TacticalGlasses_Red",.5,
        "TCP_G_BalaclavaTacticalGlasses_Olive_Red",.5
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\standard\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Standard";
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=LVL2_ARMOR;
            passThrough=LVL2_PASS;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Arctic: OCLF_H_Helmet_CH43A_Standard
{
    displayName="[OCLF] Helmet CH43A (Arctic)";
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\arctic\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    allowedFacewear[] = {
        "",1,
        "TCP_G_TacticalGlasses_Red",.5,
        "TCP_G_BalaclavaTacticalGlasses_White_Red",.5
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Arctic";
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=LVL2_ARMOR;
            passThrough=LVL2_PASS;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Arctic_ChinstrapOffset: TCP_H_Helmet_CH43A_Olive_ChinstrapOffset
{
    displayName="[OCLF] Helmet CH43A (Arctic)";
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\arctic\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    allowedFacewear[] = {
        "",1,
        "TCP_G_TacticalGlasses_Red",.5,
        "TCP_G_BalaclavaTacticalGlasses_White_Red",.5
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Arctic";
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=LVL2_ARMOR;
            passThrough=LVL2_PASS;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Tropic: OCLF_H_Helmet_CH43A_Standard
{
    displayName="[OCLF] Helmet CH43A (Tropic)";
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\tropic\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    allowedFacewear[] = {
        "",1,
        "TCP_G_TacticalGlasses_Red",.5,
        "TCP_G_BalaclavaTacticalGlasses_Green_Red",.5
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Tropic";
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=LVL2_ARMOR;
            passThrough=LVL2_PASS;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Tropic_ChinstrapOffset: TCP_H_Helmet_CH43A_Olive_ChinstrapOffset
{
    displayName="[OCLF] Helmet CH43A (Tropic)";
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\tropic\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    allowedFacewear[] = {
        "",1,
        "TCP_G_TacticalGlasses_Red",.5,
        "TCP_G_BalaclavaTacticalGlasses_Green_Red",.5
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Tropic";
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=LVL2_ARMOR;
            passThrough=LVL2_PASS;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Black: OCLF_H_Helmet_CH43A_Standard
{
    displayName="[OCLF] Helmet CH43A (Black)";
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\black\helmet_CH43A_CO.paa),
        QP(data\vest\black\vest_M43_DecalSheet_CA.paa)
    };
    allowedFacewear[] = {
        "G_AirPurifyingRespirator_02_black_nofilter_F",1
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Black";
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=LVL3_ARMOR;
            passThrough=LVL3_PASS;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Black_ChinstrapOffset: TCP_H_Helmet_CH43A_Olive_ChinstrapOffset
{
    displayName="[OCLF] Helmet CH43A (Black)";
    allowedFacewear[] = {
        "G_AirPurifyingRespirator_02_black_nofilter_F",1
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Black";
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\black\helmet_CH43A_CO.paa),
        QP(data\vest\black\vest_M43_DecalSheet_CA.paa)
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=LVL3_ARMOR;
            passThrough=LVL3_PASS;
            };
        };
    };
};