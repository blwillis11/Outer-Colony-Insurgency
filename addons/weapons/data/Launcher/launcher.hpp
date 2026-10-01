class launch_MRAWS_green_F;
class launch_MRAWS_green_rail_F;

class OCI_Fang2: launch_MRAWS_green_F
{
    author= AUTHOR;
    displayname="[OCI] M40 'Fang' Launcher";
    baseWeapon="OCI_Fang2";
    scope = 2;
    scopeArsenal = 2;
    magazines[]=
    {
        "OCI_1Rnd_50x137_HE",
        "OCI_1Rnd_50x137_HEAT",
        "OCI_1Rnd_50x137_PEN"
    };
};

class OPTRE_M41_SSR;

class OCI_M41_SSR:OPTRE_M41_SSR{
    displayName = "[OCI] M41 SSR MAV/AW";
    author= AUTHOR;
    baseWeapon="OCI_M41_SSR";
    scope = 2;
    scopeArsenal = 2;
    weaponInfoType = "";
    magazines[]={
        "OCI_M41_Twin_HEAT"
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
class OCI_M41_SSR_AA : OCI_M41_SSR
{
    displayName = "[OCI] M41 SSR MAV/AW AA";
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
