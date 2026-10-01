class CfgWeapons
{
    class TCP_H_Helmet_ECH35J_Olive_Green;
    class TCP_H_Helmet_ECH35J_Olive_Green_DP;

    class OCLF_H_Helmet_ECH35J_Base: TCP_H_Helmet_ECH35J_Olive_Green
    {
        author=AUTHOR;
        SCOPE_NS
        displayName=Q(TAG Helmet ECH35J (Base));
        class ItemInfo:ItemInfo
        {
            OPFOR_HALF_HELMET_HITPOINT_INFO
        };
    };
    class OCLF_H_Helmet_ECH35J_Base_DP: TCP_H_Helmet_ECH35J_Olive_Green_DP
    {
        author=AUTHOR;
        SCOPE_NS
        displayName=Q(TAG Helmet ECH35J (Base));
        class ItemInfo:ItemInfo
        {
            OPFOR_HALF_HELMET_HITPOINT_INFO
        };
    };

    OCLF_ECH35J_HELMET(Olive,Green)
    
};