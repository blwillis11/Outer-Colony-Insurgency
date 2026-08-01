class EAST
{
    class OCI_oclf
    {
        name = "[OCI] Outer Colony Liberation Front";
        class OCLF_Standard_Infantry
        {
            name = "Infantry (Standard)";
            class OCI_OCLF_Infantry_Squad
            {
                name = "[OCI] OCLF Infantry Squad";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_SquadLead";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_TeamLead";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_TeamLead";
                };
                class Unit3
                {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Autorifleman";
                };
                class Unit4
                {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Autorifleman";
                };
                class Unit5
                {
                    position[] = {15,-15,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman";
                };
                class Unit6
                {
                    position[] = {-15,-15,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman";
                };
                class Unit7
                {
                    position[] = {20,-20,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_AT";
                };
                class Unit8
                {
                    position[] = {-20,-20,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Grenadier";
                };
                class Unit9
                {
                    position[] = {25,-25,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic";
                };
                class Unit10
                {
                    position[] = {-25,-25,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic";
                };
                class Unit11
                {
                    position[] = {30,-30,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_BR";
                };
                class Unit12
                {
                    position[] = {-30,-30,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_BR";
                };
                class Unit13
                {
                    position[] = {35,-35,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman";
                };
                class Unit14
                {
                    position[] = {-35,-35,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman";
                };
            };

            class OCI_OCLF_Infantry_Fireteam
            {
                name = "[OCI] OCLF Infantry Fireteam";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_TeamLead";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic";
                };
                class Unit3
                {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Grenadier";
                };
                class Unit4
                {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman";
                };
            };

            class OCI_OCLF_Infantry_Sentry
            {
                name = "[OCI] OCLF Infantry Sentry";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_Rifleman";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Spotter";
                };
            };

            class OCI_OCLF_Infantry_Sniper_Team
            {
                name = "[OCI] OCLF Infantry Sniper Team";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_Sniper";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Spotter";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic";
                };
            };
        };
        class OCLF_Woodland_Infantry
        {
            name = "Infantry (Woodland)";
            class OCI_OCLF_Infantry_Squad
            {
                name = "[OCI] OCLF Infantry Squad";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_SquadLead_Woodland";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Woodland";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Woodland";
                };
                class Unit3
                {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Autorifleman_Woodland";
                };
                class Unit4
                {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Autorifleman_Woodland";
                };
                class Unit5
                {
                    position[] = {15,-15,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Woodland";
                };
                class Unit6
                {
                    position[] = {-15,-15,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Woodland";
                };
                class Unit7
                {
                    position[] = {20,-20,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_AT_Woodland";
                };
                class Unit8
                {
                    position[] = {-20,-20,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Grenadier_Woodland";
                };
                class Unit9
                {
                    position[] = {25,-25,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Woodland";
                };
                class Unit10
                {
                    position[] = {-25,-25,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Woodland";
                };
                class Unit11
                {
                    position[] = {30,-30,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_BR_Woodland";
                };
                class Unit12
                {
                    position[] = {-30,-30,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_BR_Woodland";
                };
                class Unit13
                {
                    position[] = {35,-35,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Woodland";
                };
                class Unit14
                {
                    position[] = {-35,-35,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Woodland";
                };
            };

            class OCI_OCLF_Infantry_Fireteam
            {
                name = "[OCI] OCLF Infantry Fireteam";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Woodland";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Woodland";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Woodland";
                };
                class Unit3
                {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Grenadier_Woodland";
                };
                class Unit4
                {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Woodland";
                };
            };

            class OCI_OCLF_Infantry_Sentry
            {
                name = "[OCI] OCLF Infantry Sentry";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Woodland";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Spotter_Woodland";
                };
            };
            
            class OCI_OCLF_Infantry_Sniper_Team
            {
                name = "[OCI] OCLF Infantry Sniper Team";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_Sniper_Woodland";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Spotter_Woodland";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Woodland";
                };
            };
        };
        class OCLF_Arctic_Infantry
        {
            name = "Infantry (Arctic)";
            class OCI_OCLF_Infantry_Squad
            {
                name = "[OCI] OCLF Infantry Squad";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_SquadLead_Arctic";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Arctic";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Arctic";
                };
                class Unit3
                {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Autorifleman_Arctic";
                };
                class Unit4
                {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Autorifleman_Arctic";
                };
                class Unit5
                {
                    position[] = {15,-15,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arctic";
                };
                class Unit6
                {
                    position[] = {-15,-15,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arctic";
                };
                class Unit7
                {
                    position[] = {20,-20,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_AT_Arctic";
                };
                class Unit8
                {
                    position[] = {-20,-20,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Grenadier_Arctic";
                };
                class Unit9
                {
                    position[] = {25,-25,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Arctic";
                };
                class Unit10
                {
                    position[] = {-25,-25,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Arctic";
                };
                class Unit11
                {
                    position[] = {30,-30,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_BR_Arctic";
                };
                class Unit12
                {
                    position[] = {-30,-30,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_BR_Arctic";
                };
                class Unit13
                {
                    position[] = {35,-35,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arctic";
                };
                class Unit14
                {
                    position[] = {-35,-35,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arctic";
                };
            };

            class OCI_OCLF_Infantry_Fireteam
            {
                name = "[OCI] OCLF Infantry  Fireteam";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Arctic";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arctic";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Arctic";
                };
                class Unit3
                {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Grenadier_Arctic";
                };
                class Unit4
                {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arctic";
                };
            };

            class OCI_OCLF_Infantry_Sentry
            {
                name = "[OCI] OCLF Infantry  Sentry";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arctic";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Spotter_Arctic";
                };
            };
            
            class OCI_OCLF_Infantry_Sniper_Team
            {
                name = "[OCI] OCLF Infantry  Sniper Team";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_Sniper_Arctic";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Spotter_Arctic";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Arctic";
                };
            };
        };
        class OCLF_Arid_Infantry
        {
            name = "Infantry (Arid)";
            class OCI_OCLF_Infantry_Squad
            {
                name = "[OCI] OCLF Infantry Squad";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_SquadLead_Arid";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Arid";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Arid";
                };
                class Unit3
                {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Autorifleman_Arid";
                };
                class Unit4
                {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Autorifleman_Arid";
                };
                class Unit5
                {
                    position[] = {15,-15,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arid";
                };
                class Unit6
                {
                    position[] = {-15,-15,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arid";
                };
                class Unit7
                {
                    position[] = {20,-20,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_AT_Arid";
                };
                class Unit8
                {
                    position[] = {-20,-20,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Grenadier_Arid";
                };
                class Unit9
                {
                    position[] = {25,-25,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Arid";
                };
                class Unit10
                {
                    position[] = {-25,-25,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Arid";
                };
                class Unit11
                {
                    position[] = {30,-30,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_BR_Arid";
                };
                class Unit12
                {
                    position[] = {-30,-30,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_BR_Arid";
                };
                class Unit13
                {
                    position[] = {35,-35,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arid";
                };
                class Unit14
                {
                    position[] = {-35,-35,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arid";
                };
            };

            class OCI_OCLF_Infantry_Fireteam
            {
                name = "[OCI] OCLF Infantry  Fireteam";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Arid";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arid";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Arid";
                };
                class Unit3
                {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Grenadier_Arid";
                };
                class Unit4
                {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arid";
                };
            };

            class OCI_OCLF_Infantry_Sentry
            {
                name = "[OCI] OCLF Infantry  Sentry";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Arid";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Spotter_Arid";
                };
            };
            
            class OCI_OCLF_Infantry_Sniper_Team
            {
                name = "[OCI] OCLF Infantry  Sniper Team";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_Sniper_Arid";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Spotter_Arid";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Arid";
                };
            };
        };
        class OCLF_Tropic_Infantry
        {
            name = "Infantry (Tropic)";
            class OCI_OCLF_Infantry_Squad
            {
                name = "[OCI] OCLF Infantry Squad";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_SquadLead_Tropic";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Tropic";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Tropic";
                };
                class Unit3
                {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Autorifleman_Tropic";
                };
                class Unit4
                {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Autorifleman_Tropic";
                };
                class Unit5
                {
                    position[] = {15,-15,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Tropic";
                };
                class Unit6
                {
                    position[] = {-15,-15,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Tropic";
                };
                class Unit7
                {
                    position[] = {20,-20,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_AT_Tropic";
                };
                class Unit8
                {
                    position[] = {-20,-20,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Grenadier_Tropic";
                };
                class Unit9
                {
                    position[] = {25,-25,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Tropic";
                };
                class Unit10
                {
                    position[] = {-25,-25,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Tropic";
                };
                class Unit11
                {
                    position[] = {30,-30,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_BR_Tropic";
                };
                class Unit12
                {
                    position[] = {-30,-30,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_BR_Tropic";
                };
                class Unit13
                {
                    position[] = {35,-35,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Tropic";
                };
                class Unit14
                {
                    position[] = {-35,-35,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Tropic";
                };
            };

            class OCI_OCLF_Infantry_Fireteam
            {
                name = "[OCI] OCLF Infantry  Fireteam";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_TeamLead_Tropic";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Tropic";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Tropic";
                };
                class Unit3
                {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Grenadier_Tropic";
                };
                class Unit4
                {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Tropic";
                };
            };

            class OCI_OCLF_Infantry_Sentry
            {
                name = "[OCI] OCLF Infantry  Sentry";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_Rifleman_Tropic";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Spotter_Tropic";
                };
            };

            class OCI_OCLF_Infantry_Sniper_Team
            {
                name = "[OCI] OCLF Infantry  Sniper Team";
                side = 0;
                faction = "OCI_OCLF_Fac";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;

                class Unit0
                {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 0;
                    vehicle = "OCLF_Sniper_Tropic";
                };
                class Unit1
                {
                    position[] = {5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Spotter_Tropic";
                };
                class Unit2
                {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 0;
                    vehicle = "OCLF_Medic_Tropic";
                };
            };
        };
    };
};
