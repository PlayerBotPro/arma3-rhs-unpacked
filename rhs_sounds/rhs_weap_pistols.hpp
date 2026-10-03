class hgun_Rook40_F;

class rhs_weap_pya : hgun_Rook40_F
{
	sounds[] = {"StandardSound","SilencedSound"};
	class StandardSound
	{
		begin1[]={"rhsafrf\addons\rhs_sounds\mp-443\mp-443_1",2.55,1,1000};
		begin2[]={"rhsafrf\addons\rhs_sounds\mp-443\mp-443_2",2.55,1,1000};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
		soundClosure[] = {};
	};
	class SilencedSound
	{
		begin1[]={"rhsafrf\addons\rhs_sounds\mp-443\mp-443_1",2.55,1,1000};
		begin2[]={"rhsafrf\addons\rhs_sounds\mp-443\mp-443_2",2.55,1,1000};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
		soundClosure[] = {};
	};

};