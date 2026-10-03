class rhs_weap_XM2010_Base_F: Rifle_Base_F {
	class Single;
};

// M24
class rhs_weap_m24sws : rhs_weap_XM2010_Base_F {
	class Single: Single {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGELAYER(m24,rifle2,PREFIX)
		};
		class SilencedSound {
			PACKAGELAYER(sd_xm2010,sd_mmg1,PREFIX)
		};
	};
};

// M14
class rhs_weap_m14_base : srifle_EBR_F {
	class Single: Mode_SemiAuto {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGELAYER(m14,rifle2,PREFIX)
		};
		class SilencedSound {
			PACKAGELAYER(sd_M4,sd_Rifle1,PREFIX)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGELAYER(m14,rifle2,PREFIX)
		};
		class SilencedSound {
			PACKAGELAYER(sd_M4,sd_Rifle1,PREFIX)
		};
	};
};


// M4
class rhs_weap_m4_Base : arifle_MX_Base_F {
	class Single: Mode_SemiAuto {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGELAYER(m4,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGELAYER(sd_M4,sd_Rifle1,PREFIX)
		};
	};
	class Burst: Mode_Burst {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGELAYER(m4,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGELAYER(sd_M4,sd_Rifle1,PREFIX)
		};
	};
	class FullAuto : Mode_FullAuto {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGELAYER(m4,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGELAYER(sd_M4,sd_Rifle1,PREFIX)
		};
	};
};


// M16
class rhs_weap_m16a4 : rhs_weap_m4_Base {
	class Single: Single {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGELAYER(m16,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGELAYER(sd_M4,sd_Rifle1,PREFIX)
		};
	};
	class Burst: Burst {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGELAYER(m16,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGELAYER(sd_M4,sd_Rifle1,PREFIX)
		};
	};
};