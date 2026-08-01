class CfgPatches
{
    class OCI_OCLF_Weapons
    {
        addonRootClass="OCI_OCLF";
        authors[] = {"B. Salmon"};
        name = "Outer Colony Liberation Front - Weapons";
        units[]=
        {
        };
        weapons[]=
        {
        };
        requiredAddons[] =
        {
            "OCI_OCLF",
            "OCI_Weapons"
        };
    };
};
class CfgWeapons
{
    class OCI_MA37;
    class OCI_MA37_TCP_optic_M11VERO: OCI_MA37
    {
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "TCP_optic_M11VERO";
            };
        };
    };

    class OCI_MA37GL;
    class OCI_MA37GL_TCP_optic_M11VERO: OCI_MA37GL
    {
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "TCP_optic_M11VERO";
            };
        };
    };
    class OCI_M41_SSR;
    class OCI_M41_SSR_AA : OCI_M41_SSR
    {
        displayName = "[CENTCOM] M41 SSR MAV/AW AA";
        baseWeapon="OCI_M41_SSR_AA";
        scope = 1;
        scopeArsenal = 1;
        magazines[]={
            "OCI_M41_Twin_HEAA"
        };
        magazineWell[] = {"OCI_rockets"};
        hiddenSelections[]= {
            "camo",
            "camo_tubes",
            "camo_details"
        };
        hiddenSelectionsTextures[] = {
            "optre_weapons\rockets\data\launcher_co.paa",
            "optre_weapons\rockets\data\tubes_co.paa",
            "optre_weapons\rockets\data\logos_ca.paa"
        };
    };

    class OCI_MA37K;
    class OCI_MA37K_TCP_optic_M11VERO: OCI_MA37K
    {
        scope = 1;
        hiddenSelectionsTextures[]=
        {
            "\TCP\Weapons\Rifles\MA37\data\camo\default\MA37_01_CO.paa",
            "\TCP\Weapons\Rifles\MA37\data\camo\default\MA37_02_CO.paa"
        };
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "TCP_optic_M11VERO";
            };
        };
    };

    class OCI_M392_DMR;
    class OCI_M392_DMR_TCP_optic_M43RCO: OCI_M392_DMR
    {
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "TCP_optic_M43RCO";
            };
        };
    };

    class OCI_M6G;
    class OCI_M6G_TCP_acc_flashlight_M6G_TCP_optic_KFA_M6G_TCP_bipod_handGuard_M6G: OCI_M6G
    {
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "TCP_optic_KFA_M6G";
            };
            class LinkedItemsRail
            {
                slot = "PointerSlot";
                item = "TCP_acc_flashlight_M6G";
            };
            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "TCP_bipod_handGuard_M6G";
            };
        };
    };

    class OCI_LMG_M731;
    class OCI_LMG_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01: OCI_LMG_M731
    {
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "TCP_optic_EVOSD";
            };
            class LinkedItemsRail
            {
                slot = "PointerSlot";
                item = "TCP_acc_carryHandle_M731";
            };
            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "TCP_bipod_01";
            };
        };
        magazines[] = {
            "OCI_100Rnd_762x51_Mag"
        };
    };

    class OCI_BR45;
    class OCI_BR45_TCP_optic_M27RCO: OCI_BR45
    {
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "TCP_optic_M27RCO";
            };
        };
    };

    class OCI_BR45_TCP_optic_M11VERO: OCI_BR45
    {
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "TCP_optic_M11VERO";
            };
        };
    };

    class OCI_M7_SMG;
    class OCI_M7_SMG_TCP_optic_M11VERO: OCI_M7_SMG
    {
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "TCP_optic_M11VERO";
            };
        };
    };

    class rockets_230mm_GAT;

    class OCI_MLRS_230mm_rockets: rockets_230mm_GAT
    {
        magazines[] = {
            "OCI_12Rnd_230mm_rockets"
        };
    };
    class mortar_155mm_AMOS;

    class OCI_mortar_155mm_AMOS: mortar_155mm_AMOS
    {
        magazines[] = {
            "OCI_12Rnd_105mm_Con",
            "6Rnd_155mm_Mo_smoke"
        };
    };
};