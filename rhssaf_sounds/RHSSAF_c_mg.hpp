class rhs_weap_m84 : Rifle_Long_Base_F
{
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound"};
	 	class StandardSound {
			PACKAGE(M84,MMG1)
		};
	};
};