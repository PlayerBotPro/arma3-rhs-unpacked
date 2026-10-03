// K98
class rhs_weap_kar98k_Base_F: Rifle_Base_F {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(K98,rifle2)
		};
	};
};


// M38
class rhs_weap_m38_Base_F: Rifle_Base_F {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(nagant,rifle2)
		};
	};
};


class rhs_weap_m38: rhs_weap_m38_Base_F {};
class rhs_weap_m38_rail: rhs_weap_m38{};


// SBR
class rhs_weap_mosin_sbr: rhs_weap_m38_rail {
	class Single: Single {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(sbr,rifle2)
		};
		class SilencedSound {
			PACKAGE(sd_sbr,sd_mmg1)
		};
	};
};


// M70
class rhs_weap_m70_base: Rifle_Base_F {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(M70,rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_M70,sd_rifle1)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(M70,rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_M70,sd_rifle1)
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

//M21
class rhs_weap_m21_base : rhs_weap_m70_base {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(M21,rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_M21,sd_rifle1)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(M21,rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_M21,sd_rifle1)
		};
	};
};

//VHS-2
class rhs_weap_vhs2_base : Rifle_Base_F {
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(VHS2,rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_VHS2,sd_rifle1)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(VHS2,rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_VHS2,sd_rifle1)
		};
	};
};

// Scorp
class rhs_weap_savz61: SMG_01_F {
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

// M3 Greasegun
class rhs_weap_m3a1_base: Rifle_Base_F {
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(thompson,rifle1)
		};
	};
};
class rhs_weap_m3a1_specops: rhs_weap_m3a1_base {
	class FullAuto: FullAuto {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(sd_m3a1,sd_rifle1)
		};
	};
};

// MP44
class rhs_weap_MP44_base: Rifle_Base_F{
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(STG44,mmg1)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(STG44,mmg1)
		};
	};
};

//M1 Garand
class rhs_weap_M1garand_Base_F: Rifle_Base_F {
  class Single: Mode_SemiAuto
  {
	sounds[] = {"StandardSound"};
	class StandardSound
	{
	  PACKAGE(m1, rifle2)
	};
  };
};

// FN FAL

class rhs_weap_fnfal_base: Rifle_Base_F
{
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(fnfal,mmg1)
		};
		class SilencedSound {
			PACKAGE(sd_fnfal,sd_mmg1)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(fnfal,mmg1)
		};
		class SilencedSound {
			PACKAGE(sd_fnfal,sd_mmg1)
		};
	};
};