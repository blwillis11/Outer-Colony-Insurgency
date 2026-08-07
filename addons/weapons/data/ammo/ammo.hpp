// 7.62x51mm AR
class TCP_B_762x51_Ball;

class OCI_B_762x51_Ball: TCP_B_762x51_Ball
{
};

class TCP_B_762x51_BTHP;
class OCI_B_762x51_BTHP: TCP_B_762x51_BTHP
{
};

class TCP_B_762x51_AP;
class OCI_B_762x51_HVAP: TCP_B_762x51_AP
{
};

// 9.5x40mm BR

class TCP_B_95x40_Ball;
class OCI_B_95x40_Ball: TCP_B_95x40_Ball
{
};

// 12 gauge
class OPTRE_8Gauge_Pellets;
class OPTRE_8Gauge_Slugs;
class OCI_12Gauge_Pellets: OPTRE_8Gauge_Pellets
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class OCI_12Gauge_Slugs: OPTRE_8Gauge_Slugs
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class OPTRE_12Gauge_Smoke;
class OCI_12Gauge_Smoke: OPTRE_12Gauge_Smoke
{
    hit = 2;
    caliber = 0.1;
    typicalSpeed = 550;
    smokeColor[] = {1, 1, 1, 1};
    timeToLive = 10;
    fuseDistance = 0;
};

// 5.23x23mm
class TCP_B_5x23_Ball;
class OCI_5x23_Caseless:TCP_B_5x23_Ball
{
};

// 12.7x40mm

class TCP_B_127x30_Ball;
class OCI_B_127x30_Ball:TCP_B_127x30_Ball
{
};

// 14.5x114mm
class TCP_B_127x99_APFSDS;
class OCI_B_127x99_APFSDS:TCP_B_127x99_APFSDS
{
    caliber=4;
    hit=105;
    ACE_ballisticCoefficients[]= {0.757};
    ACE_muzzleVelocities[] = {1400,1400};
    ACE_caliber=12.7;
    ACE_bulletLength=50;
    ACE_bulletMass=65;
    ACE_ammoTempMuzzleVelocityShifts[]={-2.55,-2.47,-2.25,-2.1199999,-1.6799999,-1.28,-7.6399999,-1.3,0.58999997,1.51,2.6099999};

    ACE_velocityBoundaries[]={};
    ACE_standardAtmosphere="ICAO";
    ACE_dragModel=7;
    ACE_muzzleVelocityVariationSD=0.1;
    ACE_barrelLengths[]={400,450,500,550,600,700,1000};
};

class R_MRAAWS_HEAT_F;
class OCI_50x137_HEAT: R_MRAAWS_HEAT_F
{
    model="\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
    caliber=10;
    hit=400;
    indirectHit=200;
    indirectHitRange=0.050000001;
    timeToLive=30;
    allowAgainstInfantry=0;
};
class R_MRAAWS_HE_F;
class OCI_50X137_HE: R_MRAAWS_HE_F
{
    caliber=0;
    hit=200;
    indirectHit=200;
    indirectHitRange=5;
    allowAgainstInfantry=1;
};
class OCI_50x137_PEN: OCI_50X137_HE
{
    caliber=20;
    hit=600;
    indirectHit=0;
    indirectHitRange=0;
    explosive=0;
    fuseDistance=0;
    allowAgainstInfantry=0;
};

class OPTRE_M41_Rocket_HEAT_G;
class OPTRE_M41_Rocket_HEAP;
class OPTRE_M41_Rocket_HEAT_G_AA;

class OCI_HEAT:OPTRE_M41_Rocket_HEAT_G{
    maxSpeed=350;
    hit = 800;
};
class OCI_HEAP:OPTRE_M41_Rocket_HEAP{
    maxSpeed=350;
    allowAgainstInfantry = 1;
    proximityExplosionDistance = 0;
    hit = 150;
};
class OCI_HEAA:OPTRE_M41_Rocket_HEAT_G_AA
{
    hit = 300;
    indirectHit = 150;
    indirectHitRange = 4;
    explosive=0.80000001;
    cmImmunity = 0.75;
    maneuvrability = 28;
    maxControlRange = 30000;
    missileKeepLockedCone = 180;
    missileLockCone = 60;
    missileLockMaxDistance = 20000;
    missileLockMinDistance = 50;
    missileLockMaxSpeed = 1200;
    maxSpeed = 800;
};

class G_40mm_Smoke;
#define OPTRE_IMPACTGLVALUES \
	deflecting=5;\
	explosive = 1;\
	simulation = "shotShell";\
	explosionTime = 0;\
	fuseDistance = 0;

class OCI_40mm_Shell_Smoke_White: G_40mm_Smoke
{
    author=AUTHOR;
    OPTRE_IMPACTGLVALUES
    explosionEffects = "OPTRE_Effect_GL_White";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1rnd_Smoke_White.p3d";
    timetolive = 60; //60 in smokes
};

class GrenadeBase;
class OCI_40mm_Shell_HE: GrenadeBase
{
    author=AUTHOR;
    warheadName="HE";
    hit=80;
    indirectHit=8;
    indirectHitRange=6;
    cartridge="";
    pictureWire="\TCP\Weapons\Ammo\40\HE\data\ui\icon_ammo_40_W_CA.paa";
    explosive=1;
    explosionSoundEffect="DefaultExplosion";
    fuseDistance=15;
    whistleDist=16;
    simulation="shotShell";
    visibleFire=1;
    visibleFireTime=3;
    audibleFire=30;
    dangerRadiusBulletClose=8;
    dangerRadiusHit=60;
    suppressionRadiusBulletClose=6;
    suppressionRadiusHit=24;
    cost=10;
    airLock=1;
    typicalSpeed=76;
    deflecting=5;
    deflectionSlowDown=0.75;
    TCP_ammoMinTimeToLive=0;
    explosionTime=0;
    timeToLive=20;
    caliber=1.0526316;
    model="\TCP\Weapons\Ammo\40\HE\mag_40mm_1rnd.p3d";
    tracerScale=0.69999999;
    tracerStartTime=0.0074999998;
    tracerEndTime=5;
    airFriction=-0.001;
    soundHit1[]=
    {
        "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
        3.1622777,
        1,
        1500
    };
    soundHit2[]=
    {
        "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
        3.1622777,
        1,
        1500
    };
    soundHit3[]=
    {
        "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
        3.1622777,
        1,
        1500
    };
    soundHit4[]=
    {
        "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
        3.1622777,
        1,
        1500
    };
    multiSoundHit[]=
    {
        "soundHit1",
        0.25,
        "soundHit2",
        0.25,
        "soundHit3",
        0.25,
        "soundHit4",
        0.25
    };
    class CamShakeExplode
    {
        power=8;
        duration=1.2;
        frequency=20;
        distance=74.596397;
    };
    class CamShakeHit
    {
        power=20;
        duration=0.40000001;
        frequency=20;
        distance=1;
    };
    class CamShakeFire
    {
        power=0;
        duration=0.2;
        frequency=20;
        distance=0;
    };
    class CamShakePlayerFire
    {
        power=0;
        duration=0.1;
        frequency=20;
        distance=1;
    };
};
