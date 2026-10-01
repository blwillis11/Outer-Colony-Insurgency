class CfgWeapons
{
    class H_HelmetB;
    class OPTRE_CH255_Security_Type_1_Helmet : H_HelmetB {class ItemInfo;};
    class OPTRE_CH255_Security_Basic_Type_1_Helmet : H_HelmetB {class ItemInfo;};
    class OPTRE_CH255_Security_Basic_Type_2_Helmet : OPTRE_CH255_Security_Basic_Type_1_Helmet{class ItemInfo;};


    class OCI_CH255_BPG_Helmet_Type_1_Base: OPTRE_CH255_Security_Type_1_Helmet
    {
        author=AUTHOR;
        SCOPE_NS
        displayName=Q(TAG CH255 Security Security Type 1);
        class ItemInfo:ItemInfo
        {
            OPFOR_HALF_HELMET_HITPOINT_INFO
        };
    };
    class OCI_CH255_BPG_Basic_Helmet_Type_1_Base: OPTRE_CH255_Security_Basic_Type_1_Helmet
    {
        author=AUTHOR;
        SCOPE_NS
        displayName=Q(TAG CH255 Security Basic Type 1);
        class ItemInfo:ItemInfo
        {
            OPFOR_HALF_HELMET_HITPOINT_INFO
        };
    };
    class OCI_CH255_BPG_Basic_Helmet_Type_2_Base: OPTRE_CH255_Security_Basic_Type_2_Helmet
    {
        author=AUTHOR;
        SCOPE_NS
        displayName=Q(TAG CH255 Security Basic Type 2);
        class ItemInfo:ItemInfo
        {
            OPFOR_HALF_HELMET_HITPOINT_INFO
        };
    };

};