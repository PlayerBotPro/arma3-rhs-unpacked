// Mp7
class rhsusf_weap_MP7A1_base_f: SMG_02_base_F {
	class Single: Single {
		class StandardSound {
			PACKAGE(MP7,pistol1)
		};
		class SilencedSound {
			soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
		};
	};
	class FullAuto: FullAuto {
		class StandardSound {
			PACKAGE(MP7,pistol1)
		};
		class SilencedSound {
			soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
		};
	};
};