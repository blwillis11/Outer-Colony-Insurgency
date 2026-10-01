// 7.62x51mm NATO

class TCP_15Rnd_762x51_Mag;
class TCP_32Rnd_762x51_Mag;

class OCI_15Rnd_762x51_Mag: TCP_15Rnd_762x51_Mag{
    displayName="[OCI] 15Rnd 7.62x51mm Magazine";
    author= AUTHOR;
    ammo="OCI_B_762x51_Ball";
};
class OCI_15Rnd_762x51_BTHP_Mag:TCP_15Rnd_762x51_Mag
{
    ammo = "OCI_B_762x51_BTHP";
    displayname	= "[OCI] 15Rnd 7.62x51mm BTHP Magazine";
};
class OCI_15Rnd_762x51_HVAP_Mag:TCP_15Rnd_762x51_Mag
{
    displayname	= "[OCI] 15Rnd 7.62x51mm HVAP Magazine";
    ammo = "OCI_B_762x51_HVAP";
};

class OCI_32Rnd_762x51_Mag: TCP_32Rnd_762x51_Mag{
    displayName="[OCI] 32Rnd 7.62x51mm Magazine";
    author= AUTHOR;
    ammo="OCI_B_762x51_Ball";
};

class TCP_100Rnd_762x51_Mag;
class TCP_200Rnd_762x51_Mag;

class OCI_200rnd_762x51_Mag: TCP_200Rnd_762x51_Mag{
    displayName = "[OCI] 200Rnd 7.62x51mm Box";
    ammo = "OCI_B_762x51_Ball";
};

class OCI_100rnd_762x51_Mag: TCP_100Rnd_762x51_Mag{
    displayName = "[OCI] 100Rnd 7.62x51mm Box";
    ammo = "OCI_B_762x51_Ball";
};
// 95x40mm magazines

class TCP_36Rnd_95x40_Mag;

class OCI_95x40_36Rnd_Mag:TCP_36Rnd_95x40_Mag
{
    displayName="[OCI] 36Rnd 9.5x40mm Magazine";
    author= AUTHOR;
    ammo="OCI_B_95x40_Ball";
};

// Launcher

class MRAWS_HEAT_F;
class OCI_1Rnd_50x137_HEAT: MRAWS_HEAT_F
{
    scope=2;
    scopeArsenal=2;
    ammo="OCI_50x137_HEAT";
    author=AUTHOR;
    count=1;
    displayname="[OCI] 50x137mm HEAT Rocket";
    descriptionShort="1 Rocket<br>50x137mm<br>High Explosive Anti-Tank<br>Unguided";
    mass=32;
    allowedSlots[]={901,701};
};
class MRAWS_HE_F;
class OCI_1Rnd_50x137_HE: MRAWS_HE_F
{
    ammo="OCI_50X137_HE";
    author=AUTHOR;
    count=1;
    displayname="[OCI] 50x137mm HE Rocket";
    displaynameshort="HE";
    descriptionShort="1 Rocket<br>50x137mm<br>High Explosive<br>Unguided";
    mass=27;
    allowedSlots[]={901,701};
};
class OCI_1Rnd_50x137_PEN: OCI_1Rnd_50x137_HE
{
    ammo="OCI_50x137_PEN";
    author=AUTHOR;
    count=1;
    displayname="[OCI] 50x137mm Penetrator Rocket";
    displaynameshort="Penetrator";
    descriptionShort="1 Rocket<br>50x137mm<br>Anti-Tank<br>Unguided";
    mass=50;
    allowedSlots[]={901,701};
};

class OPTRE_M41_Twin_HEAT_G;

class OCI_M41_Twin_HEAT:OPTRE_M41_Twin_HEAT_G{
    displayname	= "[OCI] M19 HEAT Twin Rockets";
    author=AUTHOR;
    displaynameshort = "HEAT";
    descriptionshort = "High Explosive Anti Tank";
    ammo = "OCI_HEAT";
    hiddenSelections[] = {"camo_tubes","camo_details"};
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\heat.paa",
        "\optre_weapons\rockets\data\logos_ca.paa"
    };
};
class OCI_M41_Twin_HEAP:OCI_M41_Twin_HEAT{
    count=2;
    displayname	= "[OCI] M19 HEAP Twin Rockets";
    author=AUTHOR;
    displaynameshort = "HEAP";
    descriptionshort = "High Explosive Anti Personnel (Un-guided)<br/>Un-guided";
    ammo = "OCI_HEAP";
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\heap.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
    picture = "\OPTRE_Weapons\Rockets\icons\magazine\heap.paa";
};
class OCI_M41_Twin_HEAA:OCI_M41_Twin_HEAT{
    count=2;
    displayname	= "[OCI] M19 HEAA Twin Rockets";
    displaynameshort = "HEAA";
    descriptionshort = "High Explosive Anti Air (Guided)<br/>Guided";
    ammo = "OCI_HEAA";
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\he.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
    picture = "\OPTRE_Weapons\Rockets\icons\magazine\heat.paa";
};


// 12 gauge magazines

class OPTRE_6Rnd_8Gauge_Pellets;
class OPTRE_6Rnd_8Gauge_Slugs;

class OCI_6Rnd_12Gauge_Pellets: OPTRE_6Rnd_8Gauge_Pellets
{
    displayname	= "[OCI] 6Rnd 12 Gauge Pellets";
    ammo = "OCI_12Gauge_Pellets";
};
class OCI_6Rnd_12Gauge_Slugs: OPTRE_6Rnd_8Gauge_Slugs
{
    displayname	= "[OCI] 6Rnd 12 Gauge Slugs";
    ammo = "OCI_12Gauge_Slugs";
};
class OCI_6Rnd_12Gauge_Smoke: OPTRE_6Rnd_8Gauge_Slugs
{
    displayname	= "[OCI] 6Rnd 12 Gauge Smoke";
    ammo = "OCI_12Gauge_Smoke";
};

// 12.7x30mm magazines

class TCP_12Rnd_127x30_52_Mag;

class OCI_12Rnd_127x30_SAP_Mag: TCP_12Rnd_127x30_52_Mag
{
    author=AUTHOR;
    displayName="[OCI] 12Rnd 12.7x30mm SAP Magazine";
    ammo="OCI_B_127x30_Ball";
};

class TCP_24Rnd_127x30_Mag;

class OCI_24Rnd_127x30_SAP_Mag: TCP_24Rnd_127x30_Mag
{
    author=AUTHOR;
    displayName="[OCI] 24Rnd 12.7x30mm SAP Magazine";
    ammo="OCI_B_127x30_Ball";
};

class TCP_36Rnd_127x30_Mag;

class OCI_36Rnd_127x30_SAP_Mag: TCP_36Rnd_127x30_Mag
{
    author=AUTHOR;
    displayName="[OCI] 36Rnd 12.7x30mm SAP Magazine";
    ammo="OCI_B_127x30_Ball";
};


// 5x23mm Caseless magazines

class TCP_48Rnd_5x23_Mag;
class TCP_60Rnd_5x23_Mag;

class OCI_48Rnd_5x23Caseless_FMJ_Mag: TCP_48Rnd_5x23_Mag{
    displayName="[OCI] 48Rnd 5x23mm FMJ Magazine";
    author= AUTHOR;
    ammo="OCI_5x23_Caseless";
};

class OCI_60Rnd_5x23Caseless_FMJ_Mag: TCP_60Rnd_5x23_Mag{
    displayName="[OCI] 60Rnd 5x23mm FMJ Magazine";
    author= AUTHOR;
    ammo="OCI_5x23_Caseless";

};

// 14.5x114mm magazines

class TCP_4Rnd_127x99_Mag_APFSDS;

class OCI_4Rnd_127x99_Mag_APFSDS:TCP_4Rnd_127x99_Mag_APFSDS
{
    mass=25;
    ammo="OCI_B_127x99_APFSDS";
};

class CA_Magazine;
class OCI_1Rnd_40mm_Shell_Smoke_White: CA_Magazine
{
    displayName="[OCI] 40mm Smoke Round (White)";
    displayNameShort="40mm Smoke Round (White)";
    descriptionShort="A white impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_White_1Rnd_CA.paa";
    ammo="OCI_40mm_Shell_Smoke_White";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_White.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_White.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class OCI_1Rnd_40mm_Shell_HE: CA_Magazine
{
    author=AUTHOR;
    scope=2;
    displayName="[OCI] 40mm HE Round";
    displayNameShort="40mm HE Round";
    descriptionShort="A high-explosive round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\HE\data\ui\icon_40mm_1rnd_CA.paa";
    ammo="OCI_40mm_Shell_HE";
    model="\TCP\Weapons\Ammo\40\HE\mag_40mm_1rnd.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\HE\mag_40mm_1rnd.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};