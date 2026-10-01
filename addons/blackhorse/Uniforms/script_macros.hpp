#define TCP_UNIFORM_VEH_CLASS_DEFS(SHIRT, SLEEVE) \
    class DOUBLES(TCP_B_CBUU,##SHIRT##_##SLEEVE##_Base); \
    class DOUBLES(TCP_B_CBUU,##SHIRT##_##SLEEVE##_Kneepads_Base); \
    class DOUBLES(TCP_B_CBUU,##SHIRT##_##SLEEVE##_Unzipped_Base); \
    class DOUBLES(TCP_B_CBUU,##SHIRT##_##SLEEVE##_Unzipped_Kneepads_Base); \
    class DOUBLES(TCP_B_CBUU,##SHIRT##_##SLEEVE##_Gloves_Base); \
    class DOUBLES(TCP_B_CBUU,##SHIRT##_##SLEEVE##_Gloves_Kneepads_Base); \
    class DOUBLES(TCP_B_CBUU,##SHIRT##_##SLEEVE##_Gloves_Unzipped_Base); \
    class DOUBLES(TCP_B_CBUU,##SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_Base);

#define UNIFORM_VEH_CLASS_DEFS \
    TCP_UNIFORM_VEH_CLASS_DEFS(FieldTop,Full) \
    TCP_UNIFORM_VEH_CLASS_DEFS(FieldTop,QuarterRoll) \
    TCP_UNIFORM_VEH_CLASS_DEFS(FieldTop,HalfRoll)

#define TCP_TSHIRT_TUCKED_VEH_CLASS_DEFS(CAMO) \
    class DOUBLES(BH_B_CBUU,TShirt_Tucked_##CAMO) : TCP_B_CBUU_TShirt_Tucked_Base { \
    displayName= Q(TAG Blackhorse T-Shirt (##CAMO##)); \
    SCOPE_S \
    SCOPEA_S \
    modelSides[] = {0,2}; \
    hiddenSelectionsTextures[]= \
    { \
        QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_UnderShirt_CO.paa), \
        QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Pants_CO.paa) \
    }; \
    uniformClass=Q(DOUBLES(BH_U_B_CBUU,TShirt_Tucked_##CAMO)); \
};

#define NEW_UNIFORM_VEH_CLASS_DEFS(SHIRT, SLEEVE, CAMO) \
    class DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_##CAMO) : DOUBLES(TCP_B_CBUU,SHIRT##_##SLEEVE##_Base) { \
        displayName= Q(TAG Blackhorse Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        modelSides[] = {0,2}; \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Pants_CO.paa) \
        }; \
        uniformClass=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_##CAMO)); \
    }; \
    class DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Kneepads_##CAMO) : DOUBLES(TCP_B_CBUU,SHIRT##_##SLEEVE##_Kneepads_Base) { \
        displayName= Q(TAG Blackhorse Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        modelSides[] = {0,2}; \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Pants_CO.paa) \
        }; \
        uniformClass=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Kneepads_##CAMO)); \
    }; \
    class DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_##CAMO) : DOUBLES(TCP_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_Base) { \
        displayName= Q(TAG Blackhorse Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        modelSides[] = {0,2}; \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Pants_CO.paa) \
        }; \
        uniformClass=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_##CAMO)); \
    }; \
    class DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_Kneepads_##CAMO) : DOUBLES(TCP_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_Kneepads_Base) { \
        displayName= Q(TAG Blackhorse Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        modelSides[] = {0,2}; \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Pants_CO.paa) \
        }; \
        uniformClass=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_Kneepads_##CAMO)); \
    }; \
    class DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Gloves_##CAMO) : DOUBLES(TCP_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Base) { \
        displayName= Q(TAG Blackhorse Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        modelSides[] = {0,2}; \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Pants_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Gloves_CO.paa) \
        }; \
        uniformClass=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_##CAMO)); \
    }; \
    class DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Kneepads_##CAMO) : DOUBLES(TCP_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Kneepads_Base) { \
        displayName= Q(TAG Blackhorse Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        modelSides[] = {0,2}; \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Pants_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Gloves_CO.paa) \
        }; \
        uniformClass=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Kneepads_##CAMO)); \
    }; \
    class DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO) : DOUBLES(TCP_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_Base) { \
        displayName= Q(TAG Blackhorse Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        modelSides[] = {0,2}; \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Pants_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Gloves_CO.paa) \
        }; \
        uniformClass=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO)); \
    }; \
    class DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_##CAMO) : DOUBLES(TCP_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_Base) { \
        displayName= Q(TAG Blackhorse Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        modelSides[] = {0,2}; \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Pants_CO.paa), \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_Gloves_CO.paa) \
        }; \
        uniformClass=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_##CAMO)); \
    };

#define TCP_UNIFORM_WEP_CLASS_DEFS(SHIRT, SLEEVE) \
    class DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Base) : Uniform_Base {class TCP_equipmentTypes; class ItemInfo;}; \
    class DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Kneepads_Base) : DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Base) {class TCP_equipmentTypes; class ItemInfo;}; \
    class DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Unzipped_Base) : DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Base) {class TCP_equipmentTypes; class ItemInfo;}; \
    class DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Unzipped_Kneepads_Base) : DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Base) {class TCP_equipmentTypes; class ItemInfo;}; \
    class DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Gloves_Base) : DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Base) {class TCP_equipmentTypes; class ItemInfo;}; \
    class DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Gloves_Kneepads_Base) : DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Base) {class TCP_equipmentTypes; class ItemInfo;}; \
    class DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Gloves_Unzipped_Base)  : DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Base) {class TCP_equipmentTypes; class ItemInfo;}; \
    class DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_Base) : DOUBLES(TCP_U_B_CBUU,##SHIRT##_##SLEEVE##_Base) {class TCP_equipmentTypes; class ItemInfo;};

#define UNIFORM_WEP_CLASS_DEFS \
    TCP_UNIFORM_WEP_CLASS_DEFS(FieldTop,Full) \
    TCP_UNIFORM_WEP_CLASS_DEFS(FieldTop,QuarterRoll) \
    TCP_UNIFORM_WEP_CLASS_DEFS(FieldTop,HalfRoll)

#define TCP_TSHIRT_TUCKED_WEP_CLASS_DEFS(CAMO) \
    class DOUBLES(BH_U_B_CBUU,TShirt_Tucked_##CAMO) : TCP_U_B_CBUU_TShirt_Tucked_Base { \
        displayName= Q(TAG Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_UnderShirt_CO.paa) \
        }; \
        class ItemInfo: ItemInfo \
        { \
            uniformClass=Q(DOUBLES(BH_B_CBUU,TShirt_Tucked_##CAMO)); \
        }; \
    }; \

#define NEW_UNIFORM_WEP_CLASS_DEFS(SHIRT, SLEEVE, CAMO) \
    class DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_##CAMO) : DOUBLES(TCP_U_B_CBUU,SHIRT##_##SLEEVE##_Base) { \
        displayName= Q(TAG Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa) \
        }; \
        class ItemInfo: ItemInfo \
        { \
            uniformClass=Q(DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_##CAMO)); \
        }; \
        class TCP_equipmentTypes : TCP_equipmentTypes { \
            baseEquipment=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_##CAMO)); \
        }; \
        class XtdGearInfo \
        { \
            model="BH_U_B_CBUU"; \
            camo=Q(##CAMO##); \
            zipper=Q(Zipped); \
            sleeves=Q(##SLEEVE##); \
            gloves=Q(None); \
            kneepads=Q(None); \
        }; \
    }; \
    class DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Kneepads_##CAMO) : DOUBLES(TCP_U_B_CBUU,SHIRT##_##SLEEVE##_Kneepads_Base) { \
        displayName= Q(TAG Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa) \
        }; \
        class TCP_equipmentTypes : TCP_equipmentTypes { \
            baseEquipment=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Kneepads_##CAMO)); \
        }; \
        class ItemInfo: ItemInfo \
        { \
            uniformClass=Q(DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Kneepads_##CAMO)); \
        }; \
        class XtdGearInfo \
        { \
            model="BH_U_B_CBUU"; \
            camo=Q(##CAMO##); \
            zipper=Q(Zipped); \
            sleeves=Q(##SLEEVE##); \
            gloves=Q(None); \
            kneepads=Q(Kneepads); \
        }; \
    }; \
    class DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_##CAMO) : DOUBLES(TCP_U_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_Base) { \
        displayName= Q(TAG Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa) \
        }; \
        class TCP_equipmentTypes : TCP_equipmentTypes { \
            baseEquipment=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_##CAMO)); \
        }; \
        class ItemInfo: ItemInfo \
        { \
            uniformClass=Q(DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_##CAMO)); \
        }; \
        class XtdGearInfo \
        { \
            model="BH_U_B_CBUU"; \
            camo=Q(##CAMO##); \
            zipper=Q(Unzipped); \
            sleeves=Q(##SLEEVE##); \
            gloves=Q(None); \
            kneepads=Q(None); \
        }; \
    }; \
    class DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_Kneepads_##CAMO) : DOUBLES(TCP_U_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_Kneepads_Base) { \
        displayName= Q(TAG Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa) \
        }; \
        class TCP_equipmentTypes : TCP_equipmentTypes { \
            baseEquipment=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_Kneepads_##CAMO)); \
        }; \
        class ItemInfo: ItemInfo \
        { \
            uniformClass=Q(DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Unzipped_Kneepads_##CAMO)); \
        }; \
        class XtdGearInfo \
        { \
            model="BH_U_B_CBUU"; \
            camo=Q(##CAMO##); \
            zipper=Q(Unzipped); \
            sleeves=Q(##SLEEVE##); \
            gloves=Q(None); \
            kneepads=Q(Kneepads); \
        }; \
    }; \
    class DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_##CAMO) : DOUBLES(TCP_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Base) { \
        displayName= Q(TAG Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa) \
        }; \
        class TCP_equipmentTypes : TCP_equipmentTypes { \
            baseEquipment=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_##CAMO)); \
        }; \
        class ItemInfo: ItemInfo \
        { \
            uniformClass=Q(DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Gloves_##CAMO)); \
        }; \
        class XtdGearInfo \
        { \
            model="BH_U_B_CBUU"; \
            camo=Q(##CAMO##); \
            zipper=Q(Zipped); \
            sleeves=Q(##SLEEVE##); \
            gloves=Q(Gloves); \
            kneepads=Q(None); \
        }; \
    }; \
    class DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Kneepads_##CAMO) : DOUBLES(TCP_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Kneepads_Base) { \
        displayName= Q(TAG Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa) \
        }; \
        class TCP_equipmentTypes : TCP_equipmentTypes { \
            baseEquipment=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Kneepads_##CAMO)); \
        }; \
        class ItemInfo: ItemInfo \
        { \
            uniformClass=Q(DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Kneepads_##CAMO)); \
        }; \
        class XtdGearInfo \
        { \
            model="BH_U_B_CBUU"; \
            camo=Q(##CAMO##); \
            zipper=Q(Zipped); \
            sleeves=Q(##SLEEVE##); \
            gloves=Q(Gloves); \
            kneepads=Q(Kneepads); \
        }; \
    }; \
    class DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO) : DOUBLES(TCP_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_Base) { \
        displayName= Q(TAG Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa) \
        }; \
        class TCP_equipmentTypes : TCP_equipmentTypes { \
            baseEquipment=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO)); \
        }; \
        class ItemInfo: ItemInfo \
        { \
            uniformClass=Q(DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO)); \
        }; \
        class XtdGearInfo \
        { \
            model="BH_U_B_CBUU"; \
            camo=Q(##CAMO##); \
            zipper=Q(Unzipped); \
            sleeves=Q(##SLEEVE##); \
            gloves=Q(Gloves); \
            kneepads=Q(None); \
        }; \
    }; \
    class DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_##CAMO) : DOUBLES(TCP_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_Base) { \
        displayName= Q(TAG Combat Uniform (##CAMO##)); \
        SCOPE_S \
        SCOPEA_S \
        hiddenSelectionsTextures[]= \
        { \
            QP(SUBCOMPONENT\data\camo\##CAMO##\CBUU_FieldTop_CO.paa) \
        }; \
        class TCP_equipmentTypes : TCP_equipmentTypes { \
            baseEquipment=Q(DOUBLES(BH_U_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_##CAMO)); \
        }; \
        class ItemInfo: ItemInfo \
        { \
            uniformClass=Q(DOUBLES(BH_B_CBUU,SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_##CAMO)); \
        }; \
        class XtdGearInfo \
        { \
            model="BH_U_B_CBUU"; \
            camo=Q(##CAMO##); \
            zipper=Q(Unzipped); \
            sleeves=Q(##SLEEVE##); \
            gloves=Q(Gloves); \
            kneepads=Q(Kneepads); \
        }; \
    };