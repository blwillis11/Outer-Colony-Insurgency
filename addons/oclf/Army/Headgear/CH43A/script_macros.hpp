#define OCLF_CH43A_HELMET(CAMO) \
    class OCLF_H_Helmet_CH43A_##CAMO: OCLF_H_Helmet_CH43A_Base { \
        scope=2; \
        displayName=Q(TAG Helmet CH43A (##CAMO##)); \
        hiddenSelectionsTextures[]= { \
            QP(Army\Headgear\CH43A\data\##CAMO##\helmet_CH43A_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43_DecalSheet_CA.paa) \
        }; \
        class TCP_equipmentTypes: TCP_equipmentTypes { \
            baseEquipment=Q(OCLF_H_Helmet_CH43A_##CAMO); \
        }; \
    }; \
    class OCLF_H_Helmet_CH43A_##CAMO##_ChinstrapOffset: OCLF_H_Helmet_CH43A_Base_ChinstrapOffset { \
        displayName=Q(TAG Helmet CH43A (##CAMO##)); \
        hiddenSelectionsTextures[]= { \
            QP(Army\Headgear\CH43A\data\##CAMO##\helmet_CH43A_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43_DecalSheet_CA.paa) \
        }; \
        class TCP_equipmentTypes: TCP_equipmentTypes { \
            baseEquipment=Q(OCLF_H_Helmet_CH43A_##CAMO); \
        }; \
    };