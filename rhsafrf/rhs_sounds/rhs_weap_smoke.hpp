
class SmokeLauncher;
class rhs_weap_902a : SmokeLauncher
{
	sounds[] = { "StandardSound" };
	class StandardSound
	{
		begin1[] = { "rhsafrf\addons\rhs_sounds\smoke\902A_1", 2.8, 1, 600 };
		begin2[] = { "rhsafrf\addons\rhs_sounds\smoke\902A_2", 2.8, 1, 600 };
		soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
	};
};

class rhs_weap_902b : rhs_weap_902a
{
	class Double : rhs_weap_902a
	{
		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = { "rhsafrf\addons\rhs_sounds\smoke\902A_1", 2.8, 1, 600 };
			begin2[] = { "rhsafrf\addons\rhs_sounds\smoke\902A_2", 2.8, 1, 600 };
			soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
		};
	};
	class Volley : Double{};
};
