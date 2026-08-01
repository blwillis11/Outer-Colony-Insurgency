class CfgPatches
{
    class OCI_OCLF_Uniforms
    {
        authors[] = {"B. Salmon"};
        name = "Outer Colony Liberation Front - Uniforms";
        
        units[]=
        {
        };
        weapons[]=
        {
        };
        
        requiredVersion = "2.20.153649";
        requiredAddons[] =
        {
            "OCI_OCLF",
            "TCP_Characters_BLUFOR_UNSC_Army_Uniforms_CBUU"
        };
    };
};
class ItemInfo;
class CfgWeapons
{
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base;
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base;

    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Standard)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Woodland: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Woodland)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Woodland";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Arid)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Arctic)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Tropic)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Black: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Black)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\black\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Black";
        };
    };


    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Standard: TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Standard, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Standard";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Woodland: TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Woodland, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Woodland";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Arid: TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Arid, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Arid";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Arctic: TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Arctic, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Arctic";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Tropic: TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Tropic, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Tropic";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Black: TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Black, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\black\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Black";
        };
    };
};
class CfgVehicles
{
	class TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base;
	class TCP_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base;

    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Standard)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_FieldTop_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_Pants_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Woodland: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Woodland)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_FieldTop_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_Pants_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Woodland";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Arid)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_FieldTop_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_Pants_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Arctic)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_FieldTop_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_Pants_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Tropic)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_FieldTop_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_Pants_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Black: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Black)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
        {
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\black\CBUU_FieldTop_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\black\CBUU_Pants_CO.paa",
            "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\black\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Black";
    };


    class OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Standard: TCP_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Standard, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
            {
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_FieldTop_CO.paa",
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_Pants_CO.paa"
            };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Standard";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Woodland: TCP_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Woodland, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
            {
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_FieldTop_CO.paa",
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_Pants_CO.paa"
            };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Woodland";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Arid: TCP_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Arid, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
            {
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_FieldTop_CO.paa",
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_Pants_CO.paa"
            };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Arid";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Arctic: TCP_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Arctic, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
            {
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_FieldTop_CO.paa",
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_Pants_CO.paa"
            };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Arctic";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Tropic: TCP_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Tropic, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
            {
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_FieldTop_CO.paa",
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_Pants_CO.paa"
            };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Tropic";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Black: TCP_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Black, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,2};
        hiddenSelectionsTextures[]=
            {
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\black\CBUU_FieldTop_CO.paa",
                "\z\OCI\addons\oclf\oclf_uniforms\data\uniforms\black\CBUU_Pants_CO.paa"
            };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Black";
    };
};