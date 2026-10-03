class cfgRecoils
{
	class recoil_default;
	class rhs_recoil_g36: recoil_default
	{
		muzzleOuter[] = {0.3, 0.9, 0.4, 0.3};
		kickBack[] = {0.02, 0.04};
		temporary = 0.02;
	};
	class rhs_recoil_g36_folded: recoil_default
	{
		muzzleOuter[] = {0.37, 1.0, 0.5, 0.5};
		kickBack[] = {0.04, 0.06};
		temporary = 0.04;
	};
};