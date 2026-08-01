class CfgPatches
{
    class OCI_Peacekeepers_Uniforms
    {
        authors[] = {"B. Salmon"};
        name = "UNSC Peacekeepers - Uniforms";
        
        units[]=
        {
        };
        weapons[]=
        {
        };
        
        requiredVersion = "2.20.153649";
        requiredAddons[] =
        {
            "OCI_Peacekeepers",
            "TCP_Characters_BLUFOR_UNSC_Army_Uniforms_CBUU"
        };
    };
};
class ItemInfo;
class CfgWeapons
{
	class TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Gray;

    class PK_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Gray: TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Gray
    {
        displayName="[OCI] Combat Uniform (Standard)";
        scope = 2;
        scopeCurator = 2;
        class ItemInfo: ItemInfo
        {
            uniformClass="PK_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Gray";
        };
    };
    
};
class CfgVehicles
{
	class TCP_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Gray;

    class PK_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Gray: TCP_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Gray
    {
        displayName="[OCI] Combat Uniform (Standard)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,1,2,3};
        uniformClass="PK_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Gray";
    };
};