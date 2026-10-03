
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
        rhsgref_BRDM2_Driver = "rhsgref_BRDM2_Driver";
        rhsgref_BRDM2_Gunner = "rhsgref_BRDM2_Gunner";
        rhsgref_BRDM2_Cargo01 = "rhsgref_BRDM2_Cargo01";
        rhsgref_BRDM2_Cargo02 = "rhsgref_BRDM2_Cargo02";
        rhsgref_GAZ_Gunner = "rhsgref_GAZ_Gunner";
        rhsgref_GAZ_GunnerIN = "rhsgref_GAZ_GunnerIN";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class rhsgref_KIA_BRDM2_Driver:DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\KIA_BRDM2_Driver.rtm";
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class rhsgref_BRDM2_Driver: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\BRDM2_Driver.rtm";
			interpolateTo[]={"rhsgref_KIA_BRDM2_Driver",1};
		};
		class rhsgref_KIA_BRDM2_Gunner:DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\KIA_BRDM2_Gunner.rtm";
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class rhsgref_BRDM2_Gunner: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\BRDM2_Gunner.rtm";
			interpolateTo[]={"rhsgref_KIA_BRDM2_Gunner",1};
		};
		class rhsgref_KIA_BRDM2_Cargo01:DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\KIA_BRDM2_Cargo01.rtm";
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class rhsgref_BRDM2_Cargo01: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\BRDM2_Cargo01.rtm";
			interpolateTo[]={"rhsgref_KIA_BRDM2_Cargo01",1};
		};
		class rhsgref_KIA_BRDM2_Cargo02:DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\KIA_BRDM2_Cargo02.rtm";
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class rhsgref_BRDM2_Cargo02: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\BRDM2_Cargo02.rtm";
			interpolateTo[]={"rhsgref_KIA_BRDM2_Cargo02",1};
		};
		class rhsgref_KIA_GAZ_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\KIA_GAZ_Gunner.rtm";
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class rhsgref_GAZ_Gunner: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\Stryker_GunnerOut.rtm";
			interpolateTo[]={"rhsgref_KIA_GAZ_Gunner",1};
		};
		class rhsgref_GAZ_GunnerIN: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\BRDM2_HQ_GunnerIn.rtm";
			interpolateTo[]={"rhsgref_KIA_GAZ_Gunner",1};
		};
	};
};