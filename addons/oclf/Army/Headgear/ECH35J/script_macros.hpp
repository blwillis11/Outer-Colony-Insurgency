#define OCLF_ECH35J_HELMET(CAMO,VISOR) \
    class OCLF_H_Helmet_ECH35J_##CAMO##_##VISOR: OCLF_H_Helmet_ECH35J_Base { \
        scope=2; \
        displayName=Q(TAG Helmet ECH35J (##CAMO## ##VISOR##)); \
        hiddenSelectionsTextures[]= { \
            QP(Army\Headgear\ECH35J\data\##CAMO##\helmet_ECH35J_CO.paa), \
            Q(\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Green\helmet_ECH35J_Visor_CO.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43_DecalSheet_CA.paa) \
        }; \
    }; \
    class OCLF_H_Helmet_ECH35J_##CAMO##_##VISOR##_DP: OCLF_H_Helmet_ECH35J_Base_DP { \
        displayName=Q(TAG Helmet ECH35J (##CAMO## ##VISOR##)); \
        hiddenSelectionsTextures[]= { \
            QP(Army\Headgear\ECH35J\data\##CAMO##\helmet_ECH35J_CO.paa), \
            Q(\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Green\helmet_ECH35J_Visor_CA.paa), \
            QP(Army\Vest\data\##CAMO##\vest_M43_DecalSheet_CA.paa) \
        }; \
    };