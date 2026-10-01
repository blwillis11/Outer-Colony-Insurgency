class CfgWeapons
{
    class TCP_H_Helmet_CH43A_Base;
    class TCP_H_Helmet_CH43A_Base_ChinstrapOffset;
    class TCP_H_Helmet_CH43A_Olive:TCP_H_Helmet_CH43A_Base {class ItemInfo; class TCP_equipmentTypes;};
    class TCP_H_Helmet_CH43A_Olive_ChinstrapOffset : TCP_H_Helmet_CH43A_Base_ChinstrapOffset {class ItemInfo; class TCP_equipmentTypes;};


    class OCLF_H_Helmet_CH43A_Base: TCP_H_Helmet_CH43A_Olive
    {
        author=AUTHOR;
        SCOPE_NS
        displayName=Q(TAG Helmet CH43A (Base));
        class TCP_equipmentTypes: TCP_equipmentTypes
        {
            baseEquipment="OCLF_H_Helmet_CH43A_Base";
        };
        class ItemInfo:ItemInfo
        {
            OPFOR_HALF_HELMET_HITPOINT_INFO
        };
    };
    class OCLF_H_Helmet_CH43A_Base_ChinstrapOffset: TCP_H_Helmet_CH43A_Olive_ChinstrapOffset
    {
        author=AUTHOR;
        SCOPE_NS
        displayName=Q(TAG Helmet CH43A (Base));
        class TCP_equipmentTypes: TCP_equipmentTypes
        {
            baseEquipment="OCLF_H_Helmet_CH43A_Base";
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

    OCLF_CH43A_HELMET(Olive)
    OCLF_CH43A_HELMET(Brown)
    OCLF_CH43A_HELMET(Arctic)
    OCLF_CH43A_HELMET(Tropic)
    OCLF_CH43A_HELMET(Black)
};