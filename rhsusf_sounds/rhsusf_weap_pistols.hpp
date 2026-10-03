class hgun_ACPC2_F: Pistol_Base_F
{
	class Single;
};

class rhsusf_weap_m1911a1: hgun_ACPC2_F
{
	class Single: Single
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound
		{
			begin1[]={"rhsusf\addons\rhsusf_sounds\m1911A1\m1911A1_1",2.0,1,1400};
			begin2[]={"rhsusf\addons\rhsusf_sounds\m1911A1\m1911A1_2",2.0,1,1400};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
			soundClosure[] = {};
		};
		class SilencedSound
		{
			soundClosure[] = {};
		};
	};
};