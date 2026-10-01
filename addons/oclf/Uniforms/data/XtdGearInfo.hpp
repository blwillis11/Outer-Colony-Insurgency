class XtdGearModels
{
    class CC_CamoBase
	{
		label="Camouflage";
		class Black
		{
			label="$STR_TCP_Data_Black";
			image="#(rgb,8,8,3)color(0.22,0.22,0.22,1)";
		};
		class Brown
		{
			label="$STR_TCP_Data_Brown";
			image="#(rgb,8,8,3)color(0.36,0.29,0.27,1)";
		};
		class Gray
		{
			label="$STR_TCP_Data_Gray";
			image="#(rgb,8,8,3)color(0.33,0.36,0.36,1)";
		};
		class Green
		{
			label="$STR_TCP_Data_Green";
			image="#(rgb,8,8,3)color(0.37,0.42,0.30,1)";
		};
		class Olive
		{
			label="$STR_TCP_Data_Olive";
			image="#(rgb,8,8,3)color(0.31,0.33,0.27,1)";
		};
		class Tan
		{
			label="$STR_TCP_Data_Tan";
			image="#(rgb,8,8,3)color(0.73,0.62,0.50,1)";
		};
		class White
		{
			label="$STR_TCP_Data_White";
			image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)";
		};
		class Arctic
		{
			label="$STR_TCP_Data_Arctic";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\arctic\fabric.paa";
		};
		class Arid
		{
			label="$STR_TCP_Data_Arid";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\arid\fabric.paa";
		};
		class Tropic
		{
			label="$STR_TCP_Data_Tropic";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\tropic\fabric.paa";
		};
		class Tundra
		{
			label="$STR_TCP_Data_Tundra";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\tundra\fabric.paa";
		};
		class Urban
		{
			label="$STR_TCP_Data_Urban";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\urban\fabric.paa";
		};
		class Woodland
		{
			label="$STR_TCP_Data_Woodland";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\woodland\fabric.paa";
		};
	};
    class CC_CamoFabric: CC_CamoBase
	{
		class Black
		{
			label="$STR_TCP_Data_Black";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\black\fabric.paa";
		};
		class Blue
		{
			label="$STR_TCP_Data_Blue";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\blue\fabric.paa";
		};
		class Gray
		{
			label="$STR_TCP_Data_Gray";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\gray\fabric.paa";
		};
		class Green
		{
			label="$STR_TCP_Data_Green";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\green\fabric.paa";
		};
		class Olive
		{
			label="$STR_TCP_Data_Olive";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\olive\fabric.paa";
		};
		class Red
		{
			label="$STR_TCP_Data_Red";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\red\fabric.paa";
		};
		class Tan
		{
			label="$STR_TCP_Data_Tan";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\tan\fabric.paa";
		};
		class White
		{
			label="$STR_TCP_Data_White";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\white\fabric.paa";
		};
		class Arctic: Arctic
		{
		};
		class Arid: Arid
		{
		};
		class Tropic: Tropic
		{
		};
		class Tundra: Tundra
		{
		};
		class Urban: Urban
		{
		};
		class Woodland: Woodland
		{
		};
	};
    class CfgWeapons {
        class SleevesBase
		{
			class Full;
			class Quarter;
			class Half;
		};
		class OCLF_U_B_Shirt
		{
			label="T-Shirt";
			author=AUTHOR;
			options[]=
			{
				"camo"
			};
			class camo: CC_CamoFabric
			{
				values[]=
				{
					"Arctic",
					"Arid",
					"Tropic",
					"Woodland"
				};
			};
		};
        class OCLF_U_B_CBUU
		{
			label="CBUU";
			author=AUTHOR;
			options[]=
			{
				"camo",
				"zipper",
				"sleeves",
				"gloves",
				"kneepads"
			};
			class camo: CC_CamoFabric
			{
				values[]=
				{
					"Arctic",
					"Arid",
					"Black",
					"Red",
					"Tropic",
					"Woodland"
				};
			};
			class zipper
			{
				label="Zipper";
				values[]=
				{
					"Zipped",
					"Unzipped"
				};
				changeInGame=1;
				class Zipped
				{
					label="Zipped";
					actionLabel="Zip shirt";
				};
				class Unzipped
				{
					label="Unzipped";
					actionLabel="Unzip shirt";
				};
			};
			class sleeves: SleevesBase
			{
				label="Sleeves";
				values[]=
				{
					"Full",
					"QuarterRoll",
					"HalfRoll"
				};
				class Full: Full
				{
					label="Full";
				};
				class QuarterRoll: Quarter
				{
					label="Quarter";
				};
				class HalfRoll: Half
				{
					label="Half";
				};
			};
			class gloves
			{
				label="Gloves";
				values[]=
				{
					"None",
					"Gloves"
				};
				changeInGame=1;
				class None
				{
					label="None";
					actionLabel="Remove gloves";
				};
				class Gloves
				{
					label="Gloves";
					actionLabel="Put on gloves";
				};
			};
			class kneepads
			{
				label="Kneepads";
				values[]=
				{
					"None",
					"Kneepads"
				};
				changeInGame=1;
				class None
				{
					label="None";
					actionLabel="Remove kneepads";
				};
				class Kneepads
				{
					label="Kneepads";
					actionLabel="Put on kneepads";
				};
			};
		};
    };
};