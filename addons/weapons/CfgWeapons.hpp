class CfgWeapons {
    class TCP_launch_M301;
	class OCI_launch_M301: TCP_launch_M301
	{
		author=AUTHOR;
		scope=1;
		magazines[]=
		{
			"OCI_1Rnd_40mm_Shell_HE",
            "OCI_1Rnd_40mm_Shell_TD",
            "OCI_1Rnd_40mm_Shell_Smoke_Blue",
            "OCI_1Rnd_40mm_Shell_Smoke_Green",
            "OCI_1Rnd_40mm_Shell_Smoke_Orange",
            "OCI_1Rnd_40mm_Shell_Smoke_Purple",
            "OCI_1Rnd_40mm_Shell_Smoke_White",
            "OCI_1Rnd_40mm_Shell_Smoke_Yellow",
            "OCI_1Rnd_40mm_Shell_Signal_Green",
            "OCI_1Rnd_40mm_Shell_Signal_Red",
            "OCI_1Rnd_40mm_Shell_Signal_White",
            "OCI_1Rnd_40mm_Shell_Signal_Yellow",
            "PHEN_FSPLUS_ChemGrenade_RiotCSGasGrenade_40mm_3GL"
		};
		magazineWell[]=
		{
			"OCI_1Rnd_40mm_MagWell"
		};
	};
    #include "data\SMG\smg.hpp"
    #include "data\DMR\dmr.hpp"
    #include "data\LMG\lmg.hpp"
    #include "data\Launcher\launcher.hpp"
    #include "data\Sniper\sniper.hpp"
    #include "data\BR\br.hpp"
    #include "data\Shotgun\shotgun.hpp"
    #include "data\AR\ar.hpp"
    #include "data\Sidearm\sidearm.hpp"
};
