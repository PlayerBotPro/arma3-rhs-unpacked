// M70
class rhs_weap_m70_base: Rifle_Base_F {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(M70,MMG1)
		};
		class SilencedSound {
			PACKAGE(sd_M70,sd_MMG1)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(M70,MMG1)
		};
		class SilencedSound {
			PACKAGE(sd_M70,sd_MMG1)
		};
	};
};


// M76
class rhs_weap_m76 : rhs_weap_m70_base {
	class Single : Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(M76,Rifle2)
		};
		class SilencedSound {
			PACKAGE(sd_M76,sd_mmg1)
		};
	};
};

class rhs_weap_m21_base : rhs_weap_m70_base {
	class Single: Mode_SemiAuto {
		class StandardSound {
			PACKAGE(M21,rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_M21,sd_rifle1)
		};
	};
	class FullAuto: Mode_FullAuto {
		class StandardSound {
			PACKAGE(M21,rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_M21,sd_rifle1)
		};
	};
};

//G36
class rhs_weap_g36_base: Rifle_Base_F
{
	class Single: Mode_SemiAuto
	{
		class StandardSound {
			PACKAGE(G36,Rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_G36,sd_Rifle1)
		};
	};
	class Burst: Mode_Burst
	{
		class StandardSound {
			PACKAGE(G36,Rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_G36,sd_Rifle1)
		};
	};
	class FullAuto: Mode_FullAuto
	{
		class StandardSound {
			PACKAGE(G36,Rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_G36,sd_Rifle1)
		};
	};
};

// Scorp
class rhs_weap_scorpion: SMG_01_F {
	class Single : Single {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(scorp,pistol1)
		};
	};
	class FullAuto : FullAuto {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(scorp,pistol1)
		};
	};
};