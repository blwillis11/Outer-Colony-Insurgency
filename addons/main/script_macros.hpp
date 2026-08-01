#include "\z\ace\addons\main\script_macros.hpp"
#include "\x\cba\addons\main\script_macros_common.hpp"

#define P(PATH) \z\OCI\addons\armor\##PATH

#define Q(INPUT) QUOTE(INPUT)

#define OCI_TEXPATH(PIECE,FILE) P(data\##PIECE\##FILE)

#define QP(PATH) #P(PATH)

//--- Hitpoints protection default values

#define LVL1_ARMOR    8
#define LVL1_PASS    0.5

#define LVL2_ARMOR    12
#define LVL2_PASS    0.4

#define LVL3_ARMOR    16
#define LVL3_PASS    0.3

#define LVL4_ARMOR    20
#define LVL4_PASS    0.2

#define OPFOR_FULL_HELMET_HITPOINT_INFO       \
class HitpointsProtectionInfo {  \
  class Head {                   \
    hitpointName="HitHead";      \
    armor=LVL2_ARMOR;                    \
    passThrough=LVL2_PASS;             \
  };                             \
  class Face {                   \
    hitpointName="HitFace";      \
    armor=LVL2_ARMOR;                    \
    passThrough=LVL2_PASS;             \
  };                             \
};

#define OPFOR_SPECOPS_HELMET_HITPOINT_INFO       \
class HitpointsProtectionInfo {  \
  class Head {                   \
    hitpointName="HitHead";      \
    armor=LVL4_ARMOR;                    \
    passThrough=LVL4_PASS;             \
  };                             \
  class Face {                   \
    hitpointName="HitFace";      \
    armor=LVL2_ARMOR;                    \
    passThrough=LVL2_PASS;             \
  };                             \
  class Neck {                   \
    hitpointName="HitNeck";      \
    armor=LVL1_ARMOR;                    \
    passThrough=LVL1_PASS;             \
  }; \
};

#define OPFOR_HALF_HELMET_HITPOINT_INFO       \
class HitpointsProtectionInfo {  \
  class Head {                   \
    hitpointName="HitHead";      \
    armor=LVL2_ARMOR;                    \
    passThrough=LVL2_PASS;             \
  };                             \
};

#define OPFOR_VEST_HITPOINT_INFO       \
class HitpointsProtectionInfo {  \
  class Arms {                   \
    hitpointName="HitArms";      \
    armor=LVL2_ARMOR;                    \
    passThrough=LVL2_PASS;             \
  };                             \
  class Chest {                  \
    hitpointName="HitChest";     \
    armor=LVL3_ARMOR;                    \
    passThrough=LVL3_PASS;             \
  };                             \
  class Diaphragm {              \
    hitpointName="HitDiaphragm"; \
    armor=LVL3_ARMOR;                    \
    passThrough=LVL3_PASS;             \
  };                             \
  class Abdomen {                \
    hitpointName="HitAbdomen";   \
    armor=LVL3_ARMOR;                    \
    passThrough=LVL3_PASS;             \
  };                             \
  class Body {                   \
    hitpointName="HitBody";      \
    passThrough=LVL3_PASS;             \
  };                             \
  class Legs {                   \
    hitpointName="HitLegs";      \
    armor=LVL2_ARMOR;                    \
    passThrough=LVL2_PASS;             \
  };                             \
};

#define OPFOR_SPECOPS_VEST_HITPOINT_INFO       \
class HitpointsProtectionInfo {  \
  class Arms {                   \
    hitpointName="HitArms";      \
    armor=LVL3_ARMOR;                    \
    passThrough=LVL3_PASS;             \
  };                             \
  class Chest {                  \
    hitpointName="HitChest";     \
    armor=LVL4_ARMOR;                    \
    passThrough=LVL4_PASS;             \
  };                             \
  class Diaphragm {              \
    hitpointName="HitDiaphragm"; \
    armor=LVL4_ARMOR;                    \
    passThrough=LVL4_PASS;             \
  };                             \
  class Abdomen {                \
    hitpointName="HitAbdomen";   \
    armor=LVL4_ARMOR;                    \
    passThrough=LVL4_PASS;             \
  };                             \
  class Body {                   \
    hitpointName="HitBody";      \
    passThrough=LVL4_PASS;             \
  };                             \
  class Legs {                   \
    hitpointName="HitLegs";      \
    armor=LVL3_ARMOR;                    \
    passThrough=LVL3_PASS;             \
  };                             \
};

#define MAG_XX(a,b) \
class _xx_##a \
{ \
    magazine=QUOTE(a); \
    count=QUOTE(b); \
}; \
