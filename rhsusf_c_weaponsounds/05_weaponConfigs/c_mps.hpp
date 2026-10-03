class rhsusf_weap_MP7A1_base_f: SMG_02_base_F {
	class Single: Single {
		class StandardSound {
			PACKAGELAYER(mp7,rifle_small,PREFIX)
		};
		class SilencedSound {
			soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
		};
	};
	class FullAuto: FullAuto {
		class StandardSound {
			PACKAGELAYER(mp7,rifle_small,PREFIX)
		};
		class SilencedSound {
			soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
		};
	};
};