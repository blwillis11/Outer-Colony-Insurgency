class OPTRE_Vest_CPD_Light;
class OPTRE_Vest_CPD_Heavy;

class OCI_Vest_CPD_Light: OPTRE_Vest_CPD_Light
{
    displayName="[OCI] Colonial Police Vest (Light)";
    scope = 2;
    scopeCurator = 2;
    class itemInfo: itemInfo
    {
        OPFOR_VEST_HITPOINT_INFO
    };
};
class OCI_Vest_CPD_Heavy: OPTRE_Vest_CPD_Heavy
{
    displayName="[OCI] Colonial Police Vest (Heavy)";
    scope = 2;
    scopeCurator = 2;
    class itemInfo: itemInfo
    {
        OPFOR_VEST_HITPOINT_INFO
    };
};

class OPTRE_CPD_CH251P;

class OCI_CPD_CH251P: OPTRE_CPD_CH251P
{
    displayName="[OCI] Colonial Police SWAT Helmet";
    scope = 2;
    scopeCurator = 2;
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