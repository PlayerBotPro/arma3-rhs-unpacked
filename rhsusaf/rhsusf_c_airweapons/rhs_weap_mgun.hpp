class CannonCore;
class weapon_Fighter_Gun20mm_AA : CannonCore {
	class manual;
};
class rhsusf_M61A2: weapon_Fighter_Gun20mm_AA
{
	scope = 2;
	displayName="M61A2";
	displayNameMagazine="M61A2";
	shortNameMagazine="20mm";

	class manual: manual
	{
		reloadTime=0.01;
		displayName = "M61A2";
	};

	cursorAim="EmptyCursor";
	holdsterAnimValue = 1.5;
	initSpeed=900;
	CanLock=2;
	optics = 1;
	aiDispersionCoefX = 1;
	aiDispersionCoefY = 1;
	magazines[]={rhsusf_20mm_M61A2};
};