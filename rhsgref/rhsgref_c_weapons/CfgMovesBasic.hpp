class CfgMovesBasic
{
	class Default;
	class DefaultDie;

	class ManActions
	{
		// Gestures
		RHS_GestureRechamberM1903A1[]	= { "RHS_GestureRechamberM1903A1_Context", "Gesture" };
		RHS_GestureRechamberM38[]		= { "RHS_GestureRechamberM38_Context", "Gesture" };

		RHS_GestureReloadM1903A1		= "RHS_GestureReloadM1903A1"; // Would reccommend changing the naming convention, just so nothing overlaps
		RHS_GestureReloadM38			= "RHS_GestureReloadM38";
		RHS_GestureReloadM1Garand		= "RHS_GestureReloadM1Garand";
		RHS_GestureReloadM3Grease		= "RHS_GestureReloadM3Grease";
		RHS_GestureReloadMG42			= "RHS_GestureReloadMG42";
		RHS_GestureReloadMP44			= "RHS_GestureReloadMP44";
		RHS_GestureReloadFNFAL			= "RHS_GestureReloadFNFAL";
		RHS_GestureReloadIZh18			= "RHS_GestureReloadIZh18";
		RHS_GestureReloadM79GL			= "RHS_GestureReloadM79GL";
		rhs_GestureHoldMG42				= "rhs_GestureHoldMG42";
	};

	class Actions
	{
		class NoActions : ManActions
		{
			RHS_GestureRechamberM1903A1[]	= { "RHS_GestureRechamberM1903A1_Context", "Gesture" };
			RHS_GestureReloadM1903A1[]		= { "RHS_GestureReloadM1903A1", "Gesture" };
			RHS_GestureRechamberM38[]		= { "RHS_GestureRechamberM38_Context", "Gesture" };
			RHS_GestureReloadM38[]			= { "RHS_GestureReloadM38", "Gesture" };
			RHS_GestureReloadM1Garand[]		= { "RHS_GestureReloadM1Garand", "Gesture"};
			RHS_GestureReloadM3Grease[]		= { "RHS_GestureReloadM3Grease", "Gesture"};
			RHS_GestureReloadMG42[]			= { "RHS_GestureReloadMG42", "Gesture"};
			RHS_GestureReloadMP44[]			= { "RHS_GestureReloadMP44", "Gesture"};
			RHS_GestureReloadFNFAL[]		= { "RHS_GestureReloadFNFAL", "Gesture"};
			RHS_GestureReloadIZh18[]		= { "RHS_GestureReloadIZh18", "Gesture"};
			RHS_GestureReloadM79GL[]		= { "RHS_GestureReloadM79GL", "Gesture" };
			rhs_GestureHoldMG42[]			= { "RHS_GestureHoldMG42", "Gesture" };
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			RHS_GestureRechamberM1903A1[]	= { "RHS_GestureRechamberM1903A1_Prone", "Gesture" };
			RHS_GestureReloadM1903A1[]		= { "RHS_GestureReloadM1903A1_Prone", "Gesture" };
			RHS_GestureRechamberM38[]		= { "RHS_GestureRechamberM38_Prone", "Gesture" };
			RHS_GestureReloadM38[]			= { "RHS_GestureReloadM38_Prone", "Gesture" };
			RHS_GestureReloadM1Garand[]		= { "RHS_GestureReloadM1Garand_Prone", "Gesture"};
			RHS_GestureReloadM3Grease[]		= { "RHS_GestureReloadM3Grease_Prone", "Gesture"};
			RHS_GestureReloadMG42[]			= { "RHS_GestureReloadMG42_Prone", "Gesture"};
			RHS_GestureReloadMP44[]			= { "RHS_GestureReloadMP44_Prone", "Gesture"};
			RHS_GestureReloadFNFAL[]		= { "RHS_GestureReloadFNFAL_Prone", "Gesture"};
			RHS_GestureReloadIZh18[]		= { "RHS_GestureReloadIZh18_Prone", "Gesture"};
			RHS_GestureReloadM79GL[]		= { "RHS_GestureReloadM79GL_Prone", "Gesture" };
			rhs_GestureHoldMG42[]			= { "RHS_GestureHoldMG42_Prone", "Gesture" };
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			RHS_GestureRechamberM1903A1[]	= { "RHS_GestureRechamberM1903A1_Prone", "Gesture" };
			RHS_GestureReloadM1903A1[]		= { "RHS_GestureReloadM1903A1_Prone", "Gesture" };
			RHS_GestureRechamberM38[]		= { "RHS_GestureRechamberM38_Prone", "Gesture" };
			RHS_GestureReloadM38[]			= { "RHS_GestureReloadM38_Prone", "Gesture" };
			RHS_GestureReloadM1Garand[]		= { "RHS_GestureReloadM1Garand_Prone", "Gesture"};
			RHS_GestureReloadM3Grease[]		= { "RHS_GestureReloadM3Grease_Prone", "Gesture"};
			RHS_GestureReloadMG42[]			= { "RHS_GestureReloadMG42_Context", "Gesture"};
			RHS_GestureReloadMP44[]			= { "RHS_GestureReloadMP44_Context", "Gesture"};
			RHS_GestureReloadFNFAL[]		= { "RHS_GestureReloadFNFAL_Context", "Gesture"};
			RHS_GestureReloadIZh18[]		= { "RHS_GestureReloadIZh18_Context", "Gesture"};
			RHS_GestureReloadM79GL[]		= { "RHS_GestureReloadM79GL_Context", "Gesture" };
			rhs_GestureHoldMG42[]			= { "RHS_GestureHoldMG42_Context", "Gesture" };
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			RHS_GestureRechamberM1903A1[]	= { "RHS_GestureRechamberM1903A1_Context", "Gesture" };
			RHS_GestureReloadM1903A1[]		= { "RHS_GestureReloadM1903A1_Context", "Gesture" };
			RHS_GestureRechamberM38[]		= { "RHS_GestureRechamberM38_Context", "Gesture" };
			RHS_GestureReloadM38[]			= { "RHS_GestureReloadM38_Context", "Gesture" };
			RHS_GestureReloadM1Garand[]		= { "RHS_GestureReloadM1Garand_Context", "Gesture"};
			RHS_GestureReloadM3Grease[]		= { "RHS_GestureReloadM3Grease_Context", "Gesture"};
			RHS_GestureReloadMG42[]			= { "RHS_GestureReloadMG42_Context", "Gesture"};
			RHS_GestureReloadMP44[]			= { "RHS_GestureReloadMP44_Context", "Gesture"};
			RHS_GestureReloadFNFAL[]		= { "RHS_GestureReloadFNFAL_Context", "Gesture"};
			RHS_GestureReloadIZh18[]		= { "RHS_GestureReloadIZh18_Context", "Gesture"};
			RHS_GestureReloadM79GL[]		= { "RHS_GestureReloadM79GL_Context", "Gesture" };
			rhs_GestureHoldMG42[]			= { "RHS_GestureHoldMG42_Context", "Gesture" };
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			RHS_GestureRechamberM1903A1[]	= { "RHS_GestureRechamberM1903A1_Context", "Gesture" };
			RHS_GestureReloadM1903A1[]		= { "RHS_GestureReloadM1903A1_Context", "Gesture" };
			RHS_GestureRechamberM38[]		= { "RHS_GestureRechamberM38_Context", "Gesture" };
			RHS_GestureReloadM38[]			= { "RHS_GestureReloadM38_Context", "Gesture" };
			RHS_GestureReloadM1Garand[]		= { "RHS_GestureReloadM1Garand_Context", "Gesture"};
			RHS_GestureReloadM3Grease[]		= { "RHS_GestureReloadM3Grease_Context", "Gesture"};
			RHS_GestureReloadMG42[]			= { "RHS_GestureReloadMG42_Prone", "Gesture"};
			RHS_GestureReloadMP44[]			= { "RHS_GestureReloadMP44_Prone", "Gesture"};
			RHS_GestureReloadFNFAL[]		= { "RHS_GestureReloadFNFAL_Prone", "Gesture"};
			RHS_GestureReloadIZh18[]		= { "RHS_GestureReloadIZh18_Prone", "Gesture"};
			RHS_GestureReloadM79GL[]		= { "RHS_GestureReloadM79GL_Prone", "Gesture" };
			rhs_GestureHoldMG42[]			= { "RHS_GestureHoldMG42_Context", "Gesture" };
		};
	};
};
#define ANIMATION_DURATION_S(duration)  __EVAL(1/duration)
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class RHS_GestureRechamberM1903A1: Default
		{
			file = "\rhsgref\addons\rhsgref_c_weapons\anims\rechamber_1903a1_standing.rtm";
			speed = 0.59998;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 1, 1 };
		};
		class RHS_GestureRechamberM1903A1_Prone: Default
		{
			file = "\rhsgref\addons\rhsgref_c_weapons\anims\rechamber_1903a1_prone.rtm";
			speed = 0.59998;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.01;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1,1, 1 };
		};
		class RHS_GestureRechamberM1903A1_Context : RHS_GestureRechamberM1903A1
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadM1903A1 :GestureReloadBase
		{
			file = "\rhsgref\addons\rhsgref_c_weapons\anims\reload_1903a1_standing.rtm";
			speed = 0.1875000000117188;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 2;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.026667, 1, 0.04, 0, 0.88, 0, 0.9022, 1 };
			rightHandIKEnd = true;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
			leftHandIKEnd = true;
		};
		class RHS_GestureReloadM1903A1_Prone :GestureReloadBase
		{
			file = "\rhsgref\addons\rhsgref_c_weapons\anims\reload_1903a1_prone.rtm";
			speed = 0.1875000000117188;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.026667, 1, 0.04, 0, 0.88, 0, 0.9022, 1 };
			rightHandIKEnd = true;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
			leftHandIKEnd = true;
		};
		class RHS_GestureReloadM1903A1_Context : RHS_GestureReloadM1903A1
		{
			mask = "handsWeapon_context";
		};

//mosin
		class RHS_GestureRechamberM38: Default
		{
			file = "\rhsgref\addons\rhsgref_c_weapons\anims\9130_rechamber_standing.rtm";
			speed = 0.59998;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 1, 1 };
		};
		class RHS_GestureRechamberM38_Prone: Default
		{
			file = "\rhsgref\addons\rhsgref_c_weapons\anims\9130_rechamber_prone.rtm";
			speed = 0.59998;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.01;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1,1, 1 };
		};
		class RHS_GestureRechamberM38_Context : RHS_GestureRechamberM38
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadM38 :GestureReloadBase
		{
			file = "\rhsgref\addons\rhsgref_c_weapons\anims\9130_reload_standing.rtm";
			speed = -4.9333;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 2;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.033, 0, 0.91, 0, 0.94, 1 };
			rightHandIKEnd = true;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.033, 0, 0.966, 0, 0.99, 1 };
			leftHandIKEnd = true;
		};
		class RHS_GestureReloadM38_Prone :GestureReloadBase
		{
			file = "\rhsgref\addons\rhsgref_c_weapons\anims\9130_reload_prone.rtm";
			speed = 0.1875000000117188;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.026667, 1, 0.04, 0, 0.88, 0, 0.9022, 1 };
			rightHandIKEnd = true;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
			leftHandIKEnd = true;
		};
		class RHS_GestureReloadM38_Context : RHS_GestureReloadM38
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadM1Garand :GestureReloadBase
		{
			file				= "\rhsgref\addons\rhsgref_c_weapons\anims\reload_m1_garand.rtm";
			speed				= ANIMATION_DURATION_S(4.16);
			rightHandIKBeg		= true;
			rightHandIKEnd		= true;
			leftHandIKBeg		= true;
			leftHandIKEnd		= true;
			leftHandIKCurve[]	= {0, 1, 0.03125, 0, 0.89, 0, 0.9375, 1};
			rightHandIKCurve[]	= {0, 1, 0.026667, 1, 0.04, 0, 0.88, 0, 0.9022, 1 };
		};
		class RHS_GestureReloadM1Garand_Prone :RHS_GestureReloadM1Garand
		{
			file				= "\rhsgref\addons\rhsgref_c_weapons\anims\reload_m1_garand_prone.rtm";
		};
		class RHS_GestureReloadM1Garand_Context : RHS_GestureReloadM1Garand
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadM3Grease : GestureReloadBase
		{
			file				= "\rhsgref\addons\rhsgref_c_weapons\anims\reload_M3A1.rtm";
			speed				= 0.29;
			leftHandIKCurve[] =
			{
				0, 1,
				0.05, 0.0,
				0.93, 0,
				0.99,1
			};
			rightHandIKCurve[] =
			{
				0.0, 1,
				0.3,0.0,
				0.98, 0.0,
				0.999,1
			};
		};
		class RHS_GestureReloadM3Grease_prone : RHS_GestureReloadM3Grease
		{
			file               = "\rhsgref\addons\rhsgref_c_weapons\anims\reload_M3A1_prone.rtm";
		};
		class RHS_GestureReloadM3Grease_Context : RHS_GestureReloadM3Grease_prone
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadMG42: GestureReloadBase
		{
			file               = "\rhsgref\addons\rhsgref_c_weapons\anims\reload_mg42_standing.rtm";
			speed              = -10.233334;
			looped             = 0;
			mask               = "handsWeapon";
			headBobStrength    = 0.2;
			headBobMode        = 2;
			rightHandIKCurve[] = {0, 1, 0.029315, 0, 0.120521, 0, 0.14006, 1};
			leftHandIKBeg      = 1;
			leftHandIKEnd      = 1;
			leftHandIKCurve[]  = {0.146579, 1, 0.16612, 0, 0.94462, 0, 0.97068, 1};
		};

		class RHS_GestureReloadMG42_Prone: GestureReloadBase
		{
			file               = "\rhsgref\addons\rhsgref_c_weapons\anims\reload_mg42_prone.rtm";
			speed              = -10.233334;
			looped             = 0;
			mask               = "handsWeapon";
			headBobStrength    = 0.2;
			headBobMode        = 2;
			rightHandIKCurve[] = {0, 1, 0.029315, 0, 0.120521, 0, 0.14006, 1};
			leftHandIKBeg      = 1;
			leftHandIKEnd      = 1;
			leftHandIKCurve[]  = {0.146579, 1, 0.16612, 0, 0.94462, 0, 0.97068, 1};
		};

		class RHS_GestureReloadMG42_Context: RHS_GestureReloadMG42
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadMP44 : GestureReloadBase
		{
			file               = "\rhsgref\addons\rhsgref_c_weapons\anims\reload_MP44.rtm";
			speed				= ANIMATION_DURATION_S(4.1);
			leftHandIKCurve[] =
			{
				0, 1,
				0.05, 0.0,
				0.93, 0,
				0.99,1
			};
			rightHandIKCurve[] =
			{
				0.0, 1,
				0.05,0.0,
				0.9, 0.0,
				0.95,1
			};
			leftHandIKBeg		= true;
			leftHandIKEnd		= true;
			rightHandIKBeg		= true;
			rightHandIKEnd		= true;
		};
		class RHS_GestureReloadMP44_prone : RHS_GestureReloadMP44
		{
			file               = "\rhsgref\addons\rhsgref_c_weapons\anims\reload_MP44_prone.rtm";
		};
		class RHS_GestureReloadMP44_Context : RHS_GestureReloadMP44
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadFNFAL : GestureReloadBase
		{
			file				= "\rhsgref\addons\rhsgref_c_weapons\anims\reload_FNFAL.rtm";
			speed				= ANIMATION_DURATION_S(4.0);
			leftHandIKCurve[] =
			{
				0, 1,
				0.03, 0.0,
				0.93, 0,
				0.99,1
			};
			rightHandIKCurve[] =
			{
				0.0, 1,
				0.05,0.0,
				0.94, 0.0,
				0.99,1
			};
		};
		class RHS_GestureReloadFNFAL_prone : RHS_GestureReloadFNFAL
		{
			file				= "\rhsgref\addons\rhsgref_c_weapons\anims\reload_fnfal_prone.rtm";
			mask				= "handsWeapon";
		};
		class RHS_GestureReloadFNFAL_Context : RHS_GestureReloadFNFAL_prone
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadIZh18 : GestureReloadBase
		{
			file               = "\rhsgref\addons\rhsgref_c_weapons\anims\reload_IZh18.rtm";
			speed				= ANIMATION_DURATION_S(4.3);
			leftHandIKCurve[] =
			{
				0, 1,
				0.05, 0.0,
				0.93, 0,
				0.99,1
			};
			rightHandIKCurve[] =
			{
				0.0, 1,
				0.05,0.0,
				0.9, 0.0,
				0.95,1
			};
			leftHandIKBeg		= true;
			leftHandIKEnd		= true;
			rightHandIKBeg		= true;
			rightHandIKEnd		= true;
		};
		class RHS_GestureReloadIZh18_prone : RHS_GestureReloadIZh18
		{
			file               = "\rhsgref\addons\rhsgref_c_weapons\anims\reload_izh18_prone.rtm";
		};
		class RHS_GestureReloadIZh18_Context : RHS_GestureReloadIZh18_prone
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadM79GL : GestureReloadBase
		{
			file				= "\rhsgref\addons\rhsgref_c_weapons\anims\reload_M79GL.rtm";
			speed				= ANIMATION_DURATION_S(3.7);

			leftHandIKCurve[] =
			{
				0, 1,
				0.2, 0.0,
				0.95, 0,
				0.99,1
			};
			rightHandIKCurve[] =
			{
				0.0, 1,
				0.05,0.0,
				0.95, 0.0,
				0.99,1
			};
			leftHandIKBeg		= true;
			leftHandIKEnd		= true;
			rightHandIKBeg		= true;
			rightHandIKEnd		= true;
		};
		class RHS_GestureReloadM79GL_prone : RHS_GestureReloadM79GL
		{
			file				= "\rhsgref\addons\rhsgref_c_weapons\anims\reload_M79GL_prone.rtm";
			mask				= "handsWeapon";
		};
		class RHS_GestureReloadM79GL_Context : RHS_GestureReloadM79GL_prone
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureHoldMG42: Default
		 {
			file				= "\rhsgref\addons\rhsgref_c_weapons\anims\rhs_gesture_MG42.rtm";
			looped				= 1;
			speed				= 1;
			mask				= "leftHand";
			leftHandIKBeg		= 1;
			leftHandIKEnd		= 1;
			leftHandIKCurve[]	= {0.0};
			enableOptics		= 1;
			canPullTrigger		= 1;
			disableWeapons		= 0;
		};
		class RHS_GestureHoldMG42_prone: RHS_GestureHoldMG42
		{
			file = "\rhsgref\addons\rhsgref_c_weapons\anims\rhs_gesture_MG42_prone.rtm";
		};
		class RHS_GestureHoldMG42_Context: RHS_GestureHoldMG42
		{
			mask = "handsWeapon_context";
		};
	};
};