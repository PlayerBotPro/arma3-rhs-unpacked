class pdw2000_base_F;

class hgun_PDW2000_F : pdw2000_base_F {
	class Single;
	class FullAuto;
};

class rhs_weap_pp2000: hgun_PDW2000_F {
	class Single : Single {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(pp2000,rifle_small,PREFIX)
		};
	};
	class FullAuto : FullAuto {
		class StandardSound {
			PACKAGE(pp2000,rifle_small,PREFIX)
		};
	};
};