class TCP_arifle_MA40;
class TCP_arifle_MA37;
class TCP_arifle_MA40_GL;
class TCP_arifle_MA37_GL;
class OPTRE_MA37K;

class OCI_MA40: TCP_arifle_MA40
{
    author= AUTHOR;
    displayName = "[OCI] MA40 ICWS Assault Rifle";
    baseWeapon = "OCI_MA40";
    scope = 2;
    scopeArsenal = 2;
    magazines[] = {"OCI_32Rnd_762x51_Mag"}; // Requires a magazine to be defined so that the "Impact" slider in the arsenal will have a value. This also defines the standard magazine when the weapon is spawned.
    magazineWell[]={"OCI_32Rnd_762x51_MagWell","OCI_15Rnd_762x51_MagWell"};
};
class OCI_MA40GL: TCP_arifle_MA40_GL
{
    author= AUTHOR;
    displayName = "[OCI] MA40 + M301 GL Assault Rifle";
    baseWeapon 	= "OCI_MA40GL";
    scope = 2;
    scopeArsenal = 2;
    magazines[] = {
        "OCI_32Rnd_762x51_Mag"
    };
    magazineWell[]  = {"OCI_32Rnd_762x51_MagWell","OCI_15Rnd_762x51_MagWell"};
    class M301:OCI_launch_M301
    {
        useModelOptics=0;
        useExternalOptic=0;
        cameraDir="op_look";
        discreteDistance[]={50,75,100,150,200,300,400};
        discreteDistanceCameraPoint[]=
        {
            "op_eye_50",
            "op_eye_75",
            "op_eye_100",
            "op_eye_150",
            "op_eye_200",
            "op_eye_300",
            "op_eye_400"
        };
        discreteDistanceInitIndex=3;
        reloadAction="GestureReloadMSBS_UGL";
        reloadMagazineSound[]=
        {
            "A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_UGL_reload",
            1,
            1,
            10
        };
        magazineReloadSwitchPhase=1;
    };
};
class OCI_MA37: TCP_arifle_MA37
{
    author= AUTHOR;
    displayName = "[OCI] MA37 ICWS Assault Rifle";
    baseWeapon = "OCI_MA37";
    scope = 2;
    scopeArsenal = 2;
    magazines[] = {"OCI_32Rnd_762x51_Mag"}; // Requires a magazine to be defined so that the "Impact" slider in the arsenal will have a value. This also defines the standard magazine when the weapon is spawned.
    magazineWell[]={"OCI_32Rnd_762x51_MagWell","OCI_15Rnd_762x51_MagWell"};
};
class OCI_MA37_NoLight: OCI_MA37
{
    scope = 2;
    scopeArsenal = 2;
    class Flashlight{};
};
class OCI_MA37GL: TCP_arifle_MA37_GL
{
    author= AUTHOR;
    displayName = "[OCI] MA37 + M301 GL Assault Rifle";
    baseWeapon 	= "OCI_MA37GL";
    magazines[] = {
        "OCI_32Rnd_762x51_Mag"
    };
    scope = 2;
    scopeArsenal = 2;
    magazineWell[]  = {"OCI_32Rnd_762x51_MagWell","OCI_15Rnd_762x51_MagWell"};
    class M301:OCI_launch_M301
    {
        useModelOptics=0;
        useExternalOptic=0;
        cameraDir="op_look";
        discreteDistance[]={50,75,100,150,200,300,400};
        discreteDistanceCameraPoint[]=
        {
            "op_eye_50",
            "op_eye_75",
            "op_eye_100",
            "op_eye_150",
            "op_eye_200",
            "op_eye_300",
            "op_eye_400"
        };
        discreteDistanceInitIndex=3;
        reloadAction="GestureReloadMSBS_UGL";
        reloadMagazineSound[]=
        {
            "A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_UGL_reload",
            1,
            1,
            10
        };
        magazineReloadSwitchPhase=1;
    };
};
class OCI_MA37K: OPTRE_MA37K
{
    baseWeapon = "OCI_MA37K";
    author= AUTHOR;
    displayName = "[OCI] MA37K Carbine";
    scope = 2;
    scopeArsenal = 2;
    magazines[] = {"OCI_32Rnd_762x51_Mag"};
    magazineWell[]={"OCI_32Rnd_762x51_MagWell","OCI_15Rnd_762x51_MagWell"};
    HUD_BulletInARows = 2;
    HUD_TotalPosibleBullet = 32;
};

//"HVAP-1" (https://skfb.ly/ouIYY) by valterjherson1 is licensed under Creative Commons Attribution (http://creativecommons.org/licenses/by/4.0/).

class OCI_HVAP1: OCI_MA37K
{
    author= AUTHOR;
    displayName="[OCI] HVAP-1";
    baseWeapon="OCI_HVAP1";
    descriptionShort="A High Velocity Assault Platform chambered in 7.62x51mm.";
    model = "\z\OCI\addons\weapons\data\AR\HVAP1.p3d";
    magazines[] = {"OCI_30Rnd_762x51_Mag"};
    magazineWell[]={"OCI_32Rnd_762x51_MagWell","OCI_15Rnd_762x51_MagWell"};
    scope = 1;
    scopeArsenal = 1;
    ace_Overheating_mrbs=200000;
    ace_Overheating_slowdownFactor=0;
    ace_Overheating_dispersion=0;
    ace_Overheating_allowSwapBarrel=1;
    ace_recoilCoefficient=1.0;
    ace_clearJamAction="GestureReloadHVAP1";
    reloadAction="GestureReloadHVAP1";
    handAnim[] = {"OFP2_ManSkeleton","\z\OCI\addons\weapons\anims\hvap1aim.rtm"};
    class GunParticles
    {
        class FirstEffect
        { 
            directionName="Konec hlavne";
            effectName="RifleAssaultCloud";
            positionName="Usti hlavne";
        };
    };
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\z\OCI\addons\weapons\data\AR\testweapon_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "\z\OCI\addons\weapons\data\AR\hvap1_rv.rvmat"
    };
};
