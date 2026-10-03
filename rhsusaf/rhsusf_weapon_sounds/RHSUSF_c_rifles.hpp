


// M590
class rhs_weap_M590_5RD : Rifle_Base_F {
	class Single: Mode_SemiAuto {
		sounds[]={"StandardSound"};
		class StandardSound {
			PACKAGE(m590,MMG1)
		};
	};
};
class rhs_weap_M590_8RD : rhs_weap_M590_5RD {
	class Single: Single {
		sounds[]={"StandardSound"};
		class StandardSound {
			PACKAGE(m590,MMG1)
		};
	};
};




//XM2010
class rhs_weap_XM2010_Base_F: Rifle_Base_F {
	class Single: Mode_SemiAuto {
		sounds[]={"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(xm2010,rifle2)
		};
		class SilencedSound {
			PACKAGE(sd_xm2010,sd_mmg1)
		};
	};
};

// M24
class rhs_weap_m24sws : rhs_weap_XM2010_Base_F {
	class Single: Single {
		class StandardSound {
			PACKAGE(m24,rifle2)
		};
		class SilencedSound {
			PACKAGE(sd_M24,sd_mmg1)
		};
	};
};

// M40
class rhs_weap_m40a5 : rhs_weap_XM2010_Base_F {
	class Single: Single {
		class StandardSound {
			PACKAGE(m24,rifle2)
		};
		class SilencedSound {
			PACKAGE(sd_M24,sd_mmg1)
		};
	};
};

//SCAR
class rhs_weap_SCAR_Base : arifle_MX_Base_F {
	class Single;
	class FullAuto;
};
class rhs_weap_SCAR_L_Base : rhs_weap_SCAR_Base {
	class Single: Single {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGE(M4,Rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_M4,sd_Rifle1)
		};
	};
	class FullAuto : FullAuto {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGE(M4,Rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_M4,sd_Rifle1)
		};
	};
};
class rhs_weap_SCAR_H_Base : rhs_weap_SCAR_Base {
	class Single: Single {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGE(SCARH,rifle2)
		};
		class SilencedSound {
			PACKAGE(sd_SCARH,sd_Rifle1)
		};
	};
	class FullAuto : FullAuto {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGE(SCARH,rifle2)
		};
		class SilencedSound {
			PACKAGE(sd_SCARH,sd_Rifle1)
		};
	};
};

