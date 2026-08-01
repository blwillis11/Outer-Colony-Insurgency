class TCP_SMG_M7;
class TCP_arifle_M6J;

class OCI_M7_SMG: TCP_SMG_M7 {
    author= AUTHOR;
    displayName = "[OCI] M7S SMG";
    scope = 2;
    scopeArsenal = 2;
    baseWeapon="OCI_M7_SMG";
    magazineWell[]={
    "OCI_48Rnd_5x23Caseless_MagWell",
    "OCI_60Rnd_5x23Caseless_MagWell"
    };
    magazines[] =
    {
        "OCI_48Rnd_5x23Caseless_FMJ_Mag"
    };
};
class OCI_M6J : TCP_arifle_M6J
{
    author= AUTHOR;
    baseWeapon 	= "OCI_M6J";
    displayName = "[OCI] M6J PDWS";
    scope = 2;
    scopeArsenal = 2;
    magazines[] = {"OCI_36Rnd_127x30_SAP_Mag"};
    magazineWell[]=
    {
        "OCI_12Rnd_127x30_MagWell",
        "OCI_24Rnd_127x30_MagWell",
        "OCI_36Rnd_127x30_MagWell"
    };
};
