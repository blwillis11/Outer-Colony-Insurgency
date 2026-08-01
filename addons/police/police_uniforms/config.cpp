class CfgPatches
{
    class OCI_Police_Uniforms
    {
        authors[] = {"B. Salmon"};
        name = "Police - Uniforms";
        
        units[]=
        {
        };
        weapons[]=
        {
        };
        
        requiredVersion = "2.20.153649";
        requiredAddons[] =
        {
            "OCI_Police",
            "OPTRE_Equipment_Police"
        };
    };
};
class ItemInfo;
class CfgWeapons
{
	class OPTRE_CPD_Uniform;

    class OCI_CPD_Uniform: OPTRE_CPD_Uniform
    {
        displayName="[OCI] Colonial Police Uniform";
        scope = 2;
        scopeCurator = 2;
        class ItemInfo: ItemInfo
        {
            uniformClass="OCI_CPD_Uniform_Base";
        };
    };
    
};
class CfgVehicles
{
	class OPTRE_CPD_Uniform_Base;

    class OCI_CPD_Uniform_Base: OPTRE_CPD_Uniform_Base
    {
        displayName="[OCI] Combat Uniform (Standard)";
        scope = 2;
        scopeCurator = 2;
        modelSides[] = {0,1,2,3};
        uniformClass="OCI_CPD_Uniform";
    };
};