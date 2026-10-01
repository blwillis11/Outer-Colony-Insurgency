class CfgGlasses
{
    class G_AirPurifyingRespirator_02_black_nofilter_F;
    class OCI_Respirator : G_AirPurifyingRespirator_02_black_nofilter_F {
        displayName = "[OCI] ORC Mask Respirator";
        identityTypes[] = {"OCI_G_ORC_Mask", 300};
    };

    class None {
        identityTypes[] += {
            "OCI_G_Default_OCLF_A_A", 300,
            "OCI_G_Default_OCLF_A_D", 300,
            "OCI_G_Default_OCLF_A_T", 300,
            "OCI_G_Default_OCLF_A_W", 300,
            "OCI_G_Casual_OCLF_A_A", 300,
            "OCI_G_Casual_OCLF_A_D", 300,
            "OCI_G_Casual_OCLF_A_T", 300,
            "OCI_G_Casual_OCLF_A_W", 300

        };
    };

    class TCP_G_BalaclavaTacticalGlasses_White_Red;
    class TCP_G_BalaclavaTacticalGlasses_Tan_Red;
    class TCP_G_BalaclavaTacticalGlasses_Green_Red;
    class TCP_G_BalaclavaTacticalGlasses_Olive_Red;
    class TCP_G_BalaclavaTacticalGlasses_White_Red_DP;
    class TCP_G_BalaclavaTacticalGlasses_Tan_Red_DP;
    class TCP_G_BalaclavaTacticalGlasses_Green_Red_DP;
    class TCP_G_BalaclavaTacticalGlasses_Olive_Red_DP;
    class TCP_G_TacticalGlasses_Red;
    class TCP_G_TacticalGlasses_Red_DP;
    class TCP_G_Balaclava_White;
    class TCP_G_Balaclava_Tan;
    class TCP_G_Balaclava_Green;
    class TCP_G_Balaclava_Olive;
    
    #define FACEWEAR_TG(TYPE,CAMO,AFF) \
        class OCI_G_##AFF##_##TYPE##_##CAMO : TCP_G_##TYPE##_##CAMO { \
            SCOPE_NS \
            displayName = Q([OCI] ##TYPE## ##CAMO##); \
            identityTypes[] = { \
                Q(OCI_G_Default_OCLF_A_##AFF), 100, \
                Q(OCI_G_Casual_OCLF_A_##AFF), 100 \
                }; \
        }; \
        class OCI_G_##AFF##_##TYPE##_##CAMO##_DP : TCP_G_##TYPE##_##CAMO##_DP { \
            SCOPE_NS \
            displayName = Q([OCI] ##TYPE## ##CAMO##); \
            identityTypes[] = { \
                Q(OCI_G_Default_OCLF_A_##AFF), 100, \
                Q(OCI_G_Casual_OCLF_A_##AFF), 100 \
            }; \
        };
    
    #define FACEWEAR_B(TYPE,CAMO,AFF) \
        class OCI_G_##AFF##_##TYPE##_##CAMO : TCP_G_##TYPE##_##CAMO { \
            SCOPE_NS \
            displayName = Q([OCI] ##TYPE## ##CAMO##); \
            identityTypes[] = {Q(OCI_G_Default_OCLF_A_##AFF), 100}; \
        };

    #define FACEWEAR_BTG(TYPE,CAMO,VISOR,AFF) \
        class OCI_G_##AFF##_##TYPE##_##CAMO##_##VISOR## : TCP_G_##TYPE##_##CAMO##_##VISOR## { \
            SCOPE_NS \
            displayName = Q([OCI] ##TYPE## ##CAMO## ##VISOR##); \
            identityTypes[] = { \
                Q(OCI_G_Default_OCLF_A_##AFF), 100 \
            }; \
        }; \
        class OCI_G_##AFF##_##TYPE##_##CAMO##_##VISOR##_DP : TCP_G_##TYPE##_##CAMO##_##VISOR##_DP { \
            SCOPE_NS \
            displayName = Q([OCI] ##TYPE## ##CAMO## ##VISOR##); \
            identityTypes[] = {Q(OCI_G_Default_OCLF_A_##AFF), 100}; \
        };

    FACEWEAR_BTG(BalaclavaTacticalGlasses,White,Red,A)
    FACEWEAR_BTG(BalaclavaTacticalGlasses,Tan,Red,D)
    FACEWEAR_BTG(BalaclavaTacticalGlasses,Green,Red,T)
    FACEWEAR_BTG(BalaclavaTacticalGlasses,Olive,Red,W)
    FACEWEAR_B(Balaclava,White,A)
    FACEWEAR_B(Balaclava,Tan,D)
    FACEWEAR_B(Balaclava,Green,T)
    FACEWEAR_B(Balaclava,Olive,W)
    FACEWEAR_TG(TacticalGlasses,Red,A)
    FACEWEAR_TG(TacticalGlasses,Red,D)
    FACEWEAR_TG(TacticalGlasses,Red,T)
    FACEWEAR_TG(TacticalGlasses,Red,W)
    

};