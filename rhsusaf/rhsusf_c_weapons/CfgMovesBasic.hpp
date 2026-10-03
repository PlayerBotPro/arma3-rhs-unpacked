class CfgMovesBasic
{
	class Default;
	class DefaultDie;

 	class ManActions
 	{
 		RHS_ReloadRPG 					= "RHS_ReloadRPG";
		RHS_GestureReloadAR15			= "RHS_GestureReloadAR15";
		RHS_GestureReloadAR15_CMAG		= "RHS_GestureReloadAR15_CMAG";
		RHS_GestureReloadM14			= "RHS_GestureReloadM14";
		RHS_GestureReloadSR25			= "RHS_GestureReloadSR25";
		RHS_GestureReloadM2010			= "RHS_GestureReloadM2010";
		RHS_GestureReloadM590			= "RHS_GestureReloadM590";
		RHS_GestureReloadM590_start		= "RHS_GestureReloadM590_start";
		RHS_GestureReloadM590_addShell	= "RHS_GestureReloadM590_addShell";
		RHS_GestureReloadM590_end		= "RHS_GestureReloadM590_end";
		RHS_GestureRechamberM2010		= "RHS_GestureReloadM2010";
		RHS_GestureRechamberM590		= "RHS_GestureReloadM590";
		rhs_GestureReloadM249			= "rhs_GestureReloadM249";
		rhs_GestureReloadM249STANAG		= "rhs_GestureReloadM249STANAG";
		rhs_GestureReloadAT4			= "rhs_GestureReloadAT4";
		rhs_GestureReloadM320_ugl		= "rhs_GestureReloadM320_ugl";
		rhs_GestureReloadM320_hk		= "rhs_GestureReloadM320_hk";
		rhs_GestureReloadM320_pistol	= "rhs_GestureReloadM320_pistol";
		rhs_GestureHoldM240				= "rhs_GestureHoldM240";
		rhs_GestureHoldM107				= "rhs_GestureHoldM107";
		RHS_GestureFoldSCAR				= "RHS_GestureFoldSCAR";
		RHS_GestureUnfoldSCAR			= "RHS_GestureUnfoldSCAR";
 	};

	class Actions
	{
		class NoActions : ManActions
		{
			RHS_GestureReloadAR15[]				= { "RHS_GestureReloadAR15", "Gesture"};
			RHS_GestureReloadAR15_CMAG[]		= { "RHS_GestureReloadAR15_CMAG", "Gesture"};
			RHS_GestureReloadM14[]				= { "RHS_GestureReloadM14", "Gesture"};
			RHS_GestureReloadSR25[]				= { "RHS_GestureReloadSR25", "Gesture"};
			RHS_GestureReloadM2010[]			= { "RHS_GestureReloadM2010", "Gesture" };
			RHS_GestureReloadM590[]				= { "RHS_GestureReloadM590", "Gesture" };
			RHS_GestureReloadM590_start[]		= { "RHS_GestureReloadM590_start", "Gesture" };
			RHS_GestureReloadM590_addShell[]	= { "RHS_GestureReloadM590_addShell", "Gesture" };
			RHS_GestureReloadM590_end[]			= { "RHS_GestureReloadM590_end", "Gesture" };
			RHS_GestureRechamberM2010[]			= { "RHS_GestureRechamberM2010", "Gesture" };
			RHS_GestureRechamberM590[]			= { "RHS_GestureRechamberM590", "Gesture" };
			rhs_GestureReloadM249[]				= { "rhs_GestureReloadM249", "Gesture" };
			rhs_GestureReloadM249STANAG[]		= { "rhs_GestureReloadM249STANAG", "Gesture" };
			rhs_GestureReloadAT4[]				= { "rhs_GestureReloadAT4","Gesture"};
			rhs_GestureReloadM320_ugl[]			= { "rhs_GestureReloadM320_ugl", "Gesture" };
			rhs_GestureReloadM320_hk[]			= { "rhs_GestureReloadM320_hk", "Gesture" };
			rhs_GestureReloadM320_pistol[]		= { "rhs_GestureReloadM320_pistol", "Gesture" };
			rhs_GestureHoldM240[]				= { "RHS_GestureHoldM240", "Gesture" };
			rhs_GestureHoldM107[]				= { "RHS_GestureHoldM107", "Gesture" };
			RHS_GestureFoldSCAR[]				= { "RHS_GestureFoldSCAR", "Gesture" };
			RHS_GestureUnfoldSCAR[]				= { "RHS_GestureUnfoldSCAR", "Gesture" };
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			RHS_GestureReloadAR15[]				= { "RHS_GestureReloadAR15_Prone", "Gesture"};
			RHS_GestureReloadAR15_CMAG[]		= { "RHS_GestureReloadAR15_CMAG_Prone", "Gesture"};
			RHS_GestureReloadM14[]				= { "RHS_GestureReloadM14_Prone", "Gesture"};
			RHS_GestureReloadSR25[]				= { "RHS_GestureReloadSR25_Prone", "Gesture"};
			RHS_GestureReloadM2010[]			= { "RHS_GestureReloadM2010_Prone", "Gesture" };
			RHS_GestureReloadM590[]				= { "RHS_GestureReloadM590_Prone", "Gesture" };
			RHS_GestureReloadM590_start[]		= { "RHS_GestureReloadM590_start_prone", "Gesture" };
			RHS_GestureReloadM590_addShell[]	= { "RHS_GestureReloadM590_addShell_prone", "Gesture" };
			RHS_GestureReloadM590_end[]			= { "RHS_GestureReloadM590_end_prone", "Gesture" };
			RHS_GestureRechamberM2010[]			= { "RHS_GestureRechamberM2010_Prone", "Gesture" };
			RHS_GestureRechamberM590[]			= { "RHS_GestureRechamberM590_Prone", "Gesture" };
			rhs_GestureReloadM249[]				= { "rhs_GestureReloadM249_Prone", "Gesture" };
			rhs_GestureReloadM249STANAG[]		= { "rhs_GestureReloadM249STANAG_Prone", "Gesture" };
			rhs_GestureReloadM320_ugl[]			= { "rhs_GestureReloadM320_ugl_Prone", "Gesture" };
			rhs_GestureReloadM320_hk[]			= { "rhs_GestureReloadM320_hk_Prone", "Gesture" };
			rhs_GestureReloadM320_pistol[]		= { "rhs_GestureReloadM320_pistol", "Gesture" };
			rhs_GestureHoldM240[]				= { "RHS_GestureHoldM240_prone", "Gesture" };
			rhs_GestureHoldM107[]				= { "RHS_GestureHoldM107_prone", "Gesture" };
			RHS_GestureFoldSCAR[]				= { "RHS_GestureFoldSCAR", "Gesture" };
			RHS_GestureUnfoldSCAR[]				= { "RHS_GestureUnfoldSCAR", "Gesture" };
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{

			RHS_GestureReloadAR15[]				= { "RHS_GestureReloadAR15_Context", "Gesture"};
			RHS_GestureReloadAR15_CMAG[]		= { "RHS_GestureReloadAR15_CMAG_Context", "Gesture"};
			RHS_GestureReloadM14[]				= { "RHS_GestureReloadM14_Context", "Gesture"};
			RHS_GestureReloadSR25[]				= { "RHS_GestureReloadSR25_Context", "Gesture"};
			RHS_GestureReloadM2010[]			= { "RHS_GestureReloadM2010_Context", "Gesture" };
			RHS_GestureReloadM590[]				= { "RHS_GestureReloadM590_Context", "Gesture" };
			RHS_GestureReloadM590_start[]		= { "RHS_GestureReloadM590_start_Context", "Gesture" };
			RHS_GestureReloadM590_addShell[]	= { "RHS_GestureReloadM590_addShell_Context", "Gesture" };
			RHS_GestureReloadM590_end[]			= { "RHS_GestureReloadM590_end_Context", "Gesture" };
			RHS_GestureRechamberM2010[]			= { "RHS_GestureRechamberM2010_Context", "Gesture" };
			RHS_GestureRechamberM590[]			= { "RHS_GestureRechamberM590_Context", "Gesture" };
			rhs_GestureReloadM249[]				= { "rhs_GestureReloadM249_Context", "Gesture" };
			rhs_GestureReloadM249STANAG[]		= { "rhs_GestureReloadM249STANAG_Context", "Gesture" };
			rhs_GestureReloadM320_ugl[]			= { "rhs_GestureReloadM320_ugl_Context", "Gesture" };
			rhs_GestureReloadM320_hk[]			= { "rhs_GestureReloadM320_hk_Context", "Gesture" };
			rhs_GestureReloadM320_pistol[]		= { "rhs_GestureReloadM320_pistol_context", "Gesture" };
			RHS_GestureHoldM240[]				= { "RHS_GestureHoldM240_context", "Gesture" };
			rhs_GestureHoldM107[]				= { "RHS_GestureHoldM107_context", "Gesture" };
			RHS_GestureFoldSCAR[]				= { "RHS_GestureFoldSCAR_context", "Gesture" };
			RHS_GestureUnfoldSCAR[]				= { "RHS_GestureUnfoldSCAR_context", "Gesture" };
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{

			RHS_GestureReloadAR15[]				= { "RHS_GestureReloadAR15_Context", "Gesture"};
			RHS_GestureReloadAR15_CMAG[]		= { "RHS_GestureReloadAR15_CMAG_Context", "Gesture"};
			RHS_GestureReloadM14[]				= { "RHS_GestureReloadM14_Context", "Gesture"};
			RHS_GestureReloadSR25[]				= { "RHS_GestureReloadSR25_Context", "Gesture"};
			RHS_GestureReloadM2010[]			= { "RHS_GestureReloadM2010_Context", "Gesture" };
			RHS_GestureReloadM590[]				= { "RHS_GestureReloadM590_Context", "Gesture" };
			RHS_GestureReloadM590_start[]		= { "RHS_GestureReloadM590_start_Context", "Gesture" };
			RHS_GestureReloadM590_addShell[]	= { "RHS_GestureReloadM590_addShell_Context", "Gesture" };
			RHS_GestureReloadM590_end[]			= { "RHS_GestureReloadM590_end_Context", "Gesture" };
			RHS_GestureRechamberM2010[]			= { "RHS_GestureRechamberM2010_Context", "Gesture" };
			RHS_GestureRechamberM590[]			= { "RHS_GestureRechamberM590_Context", "Gesture" };
			rhs_GestureReloadM249[]				= { "rhs_GestureReloadM249_Context", "Gesture" };
			rhs_GestureReloadM249STANAG[]		= { "rhs_GestureReloadM249STANAG_Context", "Gesture" };
			rhs_GestureReloadM320_ugl[]			= { "rhs_GestureReloadM320_ugl_Context", "Gesture" };
			rhs_GestureReloadM320_hk[]			= { "rhs_GestureReloadM320_hk_Context", "Gesture" };
			rhs_GestureReloadM320_pistol[]		= { "rhs_GestureReloadM320_pistol_context", "Gesture" };
			RHS_GestureHoldM240[]				= { "RHS_GestureHoldM240_context", "Gesture" };
			rhs_GestureHoldM107[]				= { "RHS_GestureHoldM107_context", "Gesture" };
			RHS_GestureFoldSCAR[]				= { "RHS_GestureFoldSCAR_context", "Gesture" };
			RHS_GestureUnfoldSCAR[]				= { "RHS_GestureUnfoldSCAR_context", "Gesture" };
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			RHS_GestureReloadAR15[]				= { "RHS_GestureReloadAR15", "Gesture"};
			RHS_GestureReloadAR15_CMAG[]		= { "RHS_GestureReloadAR15_CMAG", "Gesture"};
			RHS_GestureReloadM14[]				= { "RHS_GestureReloadM14", "Gesture"};
			RHS_GestureReloadSR25[]				= { "RHS_GestureReloadSR25", "Gesture"};
			RHS_GestureReloadM2010[]			= { "RHS_GestureReloadM2010", "Gesture" };
			RHS_GestureReloadM590[]				= { "RHS_GestureReloadM590", "Gesture" };
			RHS_GestureReloadM590_start[]		= { "RHS_GestureReloadM590_start", "Gesture" };
			RHS_GestureReloadM590_addShell[]	= { "RHS_GestureReloadM590_addShell", "Gesture" };
			RHS_GestureReloadM590_end[]			= { "RHS_GestureReloadM590_end", "Gesture" };
			RHS_GestureRechamberM2010[]			= { "RHS_GestureRechamberM2010", "Gesture" };
			RHS_GestureRechamberM590[]			= { "RHS_GestureRechamberM590", "Gesture" };
			rhs_GestureReloadM249[]				= { "rhs_GestureReloadM249_Context", "Gesture" };
			rhs_GestureReloadM249STANAG[]		= { "rhs_GestureReloadM249STANAG_Context", "Gesture" };
			rhs_GestureReloadM320_ugl[]			= { "rhs_GestureReloadM320_ugl_Context", "Gesture" };
			rhs_GestureReloadM320_hk[]			= { "rhs_GestureReloadM320_hk_Context", "Gesture" };
			rhs_GestureReloadM320_pistol[]		= { "rhs_GestureReloadM320_pistol_context", "Gesture" };
			rhs_GestureHoldM240[]				= { "RHS_GestureHoldM240_context", "Gesture" };
			rhs_GestureHoldM107[]				= { "RHS_GestureHoldM107", "Gesture" };
			RHS_GestureFoldSCAR[]				= { "RHS_GestureFoldSCAR", "Gesture" };
			RHS_GestureUnfoldSCAR[]				= { "RHS_GestureUnfoldSCAR", "Gesture" };
		};
	};
};
#define ANIMATION_DURATION_S(duration)  __EVAL(1/duration)
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class ReloadRPG;
		class AmovPknlMstpSrasWlnrDnon;
		class AmovPercMstpSrasWlnrDnon: AmovPknlMstpSrasWlnrDnon
		{
			ConnectTo[] += {"RHS_ReloadRPG", 0.02};
			InterpolateTo[] += {"RHS_ReloadRPG", 0.02};
		};
		class RHS_ReloadRPG: ReloadRPG
		{
			speed = 0.1469149;
			relSpeedMin = 0.5;
		};
		class RHSUSF_flashbang_cover: Default
		{
			file = "\a3\anims_f\data\Anim\sdr\cts\cts_CrouchingCoveringRifle01";
			speed = 0.058571;
			looped = 0;
			headBobStrength = -1;
			actions = "RifleKneelActions";
			disableWeapons = 1;
			weaponIK = 1;
			canPullTrigger = 0;
			canReload = 0;
			rightHandIKCurve[] = {0,1,0.01754,0,0.97453,0,1,1};
			leftHandIKCurve[] = {0,1,0.01754,0,0.97453,0,1,1};
			connectFrom[]={"AmovPknlMstpSrasWrflDnon",0.02};
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon",0.2};
			InterpolateTo[] = {"Unconscious",0.1};
		};
	};
};

class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class RHS_GestureReloadAR15_Prone: Default
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_ar15_prone.rtm";
			looped=0;
			speed=0.25;
			mask="handsWeapon";
			// mask="empty";
			headBobStrength=0.05;
			headBobMode=2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {0,1,0.08,0,0.14, 0, 0.17, 1,0.57,1,0.68,0,0.78,1};
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadAR15: Default
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_ar15.rtm";
			looped=0;
			speed=0.25;
			mask="handsWeapon";
			// mask="empty";
			headBobStrength=0.05;
			headBobMode=2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {0,1,0.08,0,0.14, 0, 0.17, 1,0.57,1,0.68,0,0.78,1};
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadAR15_Context: RHS_GestureReloadAR15
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureReloadAR15_cmag_Prone: GestureReloadBase
		{
			file				= "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_ar15_cmag_prone.rtm";
			speed				= -3.45;
			weaponIK 			= 1;
			leftHandIKCurve[] 	= {0,1,0.08,0,0.92,0,1,1};
		};

		class RHS_GestureReloadAR15_cmag: GestureReloadBase
		{
			file				= "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_ar15_cmag.rtm";
			speed				= -3.45;
			weaponIK 			= 1;
			leftHandIKCurve[] 	= {0,1,0.08,0,0.92,0,1,1};
		};

		class RHS_GestureReloadAR15_cmag_Context: RHS_GestureReloadAR15_cmag
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureReloadSR25_Prone: Default
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_SR25_prone.rtm";
			looped=0;
			speed=0.25;
			mask="handsWeapon";
			// mask="empty";
			headBobStrength=0.05;
			headBobMode=2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {0,1,0.08,0,0.14, 0, 0.17, 1,0.57,1,0.68,0,0.78,1};
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadSR25: Default
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_SR25.rtm";
			looped=0;
			speed=0.25;
			mask="handsWeapon";
			// mask="empty";
			headBobStrength=0.05;
			headBobMode=2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {0,1,0.08,0,0.14, 0, 0.17, 1,0.57,1,0.68,0,0.78,1};
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadSR25_Context: RHS_GestureReloadSR25
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureReloadM2010_Prone : Default
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m2010_prone.rtm";
			looped = 0;
			speed = 0.15;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.08, 1, 0.12, 0, 0.89, 0, 0.925, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.02, 0, 0.845, 0, 0.87, 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadM2010 : Default
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m2010_standing.rtm";
			looped = 0;
			speed = 0.15;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.08, 1, 0.12, 0, 0.89, 0, 0.925, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.08, 0, 0.13, 0, 0.15, 1, 0.715, 1, 0.735, 0, 0.84, 0, 0.865, 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadM2010_Context : RHS_GestureReloadM2010
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureRechamberM2010_Prone : Default
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\rechamber_m2010_prone.rtm";
			looped = 0;
			speed = 0.6;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.01666667, 0, 0.7912, 0, 0.953, 1 };
			rightHandIKEnd = true;
			enableOptics = 1;
		};

		class RHS_GestureRechamberM2010 : Default
		{
			enableOptics = 1;
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\rechamber_m2010_standing.rtm";
			looped = 0;
			speed = 0.6;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			disableWeapons = 0;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.01666667, 0, 0.7912, 0, 0.953, 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureRechamberM2010_Context : RHS_GestureRechamberM2010
		{
			mask = "handsWeapon_context";
		};


		class GestureReloadM4SSAS;
		class RHS_GestureReloadM590_Prone : GestureReloadM4SSAS
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m590_prone.rtm";
			looped = 0;
			speed = 0.15;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.08, 1, 0.12, 0, 0.89, 0, 0.925, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.02, 0, 0.845, 0, 0.87, 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadM590 : GestureReloadM4SSAS
		{
		};

		class RHS_GestureReloadM590_Context : RHS_GestureReloadM590
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureReloadM590_start_prone : GestureReloadM4SSAS
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m590_start_prone.rtm";
			looped = 0;
			speed = 0.15;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.08, 1, 0.12, 0, 0.89, 0, 0.925, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.02, 0, 0.845, 0, 0.87, 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadM590_start : GestureReloadM4SSAS
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m590_start.rtm";
			looped = 0;
			speed = 0.75;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = {  0, 0, 0.925, 0 };
			//leftHandIKCurve[] = { 0, 0.7, 0.3, 0.4, 0.7, 0.2, 0.89, 0, 0.925, 0 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {  0, 0, 1, 0 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadM590_start_Context : RHS_GestureReloadM590_start
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureReloadM590_addShell_prone : GestureReloadM4SSAS
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m590_addShell_prone.rtm";
			looped = 1;
			speed = 1.255;
			mask = "handsWeapon";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = {  0, 0, 0.925, 0 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {  0, 1, 0.865, 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadM590_addShell : RHS_GestureReloadM590_addShell_prone
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m590_addShell.rtm";
			leftHandIKBeg = true;
			leftHandIKCurve[] = {  0, 0, 0.925, 0 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {  0, 1, 0.865, 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadM590_addShell_Context : RHS_GestureReloadM590_addShell
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureReloadM590_end_prone : GestureReloadM4SSAS
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m590_end_prone.rtm";
			looped = 0;
			speed = 0.85;
			mask = "handsWeapon";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 0, 0.08, 0.1, 0.12, 0, 0.89, 0, 0.925, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {  0, 1, 0.865, 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadM590_end : RHS_GestureReloadM590_end_prone
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m590_end.rtm";
			leftHandIKCurve[] = { 0, 0, 0.08, 0.1, 0.12, 0, 0.89, 0, 0.925, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {  0, 1, 0.865, 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadM590_end_Context : RHS_GestureReloadM590_end
		{
			mask = "handsWeapon_context";
		};


		class RHS_GestureRechamberM590_Prone : Default
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\rechamber_m590_prone.rtm";
			looped = 0;
			speed = 1.65;
			mask = "handsWeapon";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] =
			{
				0, 0,
				0.1, 0.0,
				0.8, 0,
				0.9,1
			};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.01666667, 0, 0.7912, 0, 0.953, 1 };
			rightHandIKEnd = true;
			enableOptics = 1;
			disableWeapons = 0;
		};

		class RHS_GestureRechamberM590 : RHS_GestureRechamberM590_Prone
		{
			file = "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\rechamber_m590_standing.rtm";
			speed = 1.65;
			leftHandIKCurve[] =
			{
				0, 0,
				0.1, 0.0,
				0.8, 0,
				0.9,1
			};
			rightHandIKCurve[] =
			{
				0, 0.5,
				0.1, 0.0,
				0.8, 0.0,
				0.9,1
			};
			leftHandIKBeg = false;
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKEnd = false;
		};

		class RHS_GestureRechamberM590_Context : RHS_GestureRechamberM590
		{
			mask = "handsWeapon_context";
		};


		class RHS_GestureReloadM14: Default
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m14_standing.rtm";
			speed=0.23;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[] = {0, 1,0.59,1,0.615384,0,0.7538 ,0,0.84615,1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {0, 1, 0.04166666, 0, 0.58416, 0, 0.615384, 1};
		};

		class RHS_GestureReloadM14_Prone: Default
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_m14_prone.rtm";
			speed=0.23;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {0, 1, 0.04166666, 0, 0.86666, 0, 0.9, 1};
		};

		class RHS_GestureReloadM14_Context: RHS_GestureReloadM14
		{
			mask = "handsWeapon_context";
		};

		class rhs_GestureReloadM249 :Default
		{
			file = "rhsusf\addons\rhsusf_c_weapons\anims\gestures\m249_reload_stand.rtm";
			speed = 0.09868421052631578947368421052632;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 2;
			rightHandIKCurve[] = { 0, 1, 0.016, 0, 0.288, 0, 0.3076, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0.09868, 1, 0.1118421, 0, 0.92105, 0, 0.947368, 1 };
		};

		class rhs_GestureReloadM249_Crouch :Default
		{
			file = "rhsusf\addons\rhsusf_c_weapons\anims\gestures\m249_reload_crouch.rtm";
			speed = 0.09868421052631578947368421052632;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.45;
			headBobMode = 2;
			rightHandIKCurve[]={0,1,1,1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 0.00986, 0, 0.92105, 0, 0.947368, 1 };
		};

		class rhs_GestureReloadM249_Prone :Default
		{
			file = "rhsusf\addons\rhsusf_c_weapons\anims\gestures\m249_reload_prone.rtm";
			speed = 0.09868421052631578947368421052632;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = { 0, 1, 0.016, 0, 0.288, 0, 0.3076, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0.09868, 1, 0.1118421, 0, 0.92105, 0, 0.947368, 1 };
		};

		class rhs_GestureReloadM249_Context : rhs_GestureReloadM249
		{
			mask = "handsWeapon_context";
		};

		class rhs_GestureReloadM249STANAG :Default
		{
			file = "rhsusf\addons\rhsusf_c_weapons\anims\gestures\m249_STANAGreload_stand.rtm";
			speed = 0.24;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[]={0,1,1,1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 0.0476190, 0, 0.8492063, 0, 0.873015, 1 };
		};

		class rhs_GestureReloadM249STANAG_Prone :Default
		{
			file = "rhsusf\addons\rhsusf_c_weapons\anims\gestures\m249_STANAGreload_prone.rtm";
			speed = 0.24;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[]={0,1,1,1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 0.047619, 0,0.8492063, 0, 0.873015, 1 };
		};

		class rhs_GestureReloadM249STANAG_Context : rhs_GestureReloadM249STANAG
		{
			mask = "handsWeapon_context";
		};

		class rhs_GestureReloadAT4: Default
 		{
 			file="\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_at4prep.rtm";
			mask = "launcher";
			speed = 0.4;
			looped = 0;
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
 		};

		class RHS_GestureReloadM320_ugl_Prone: Default
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_M320_ugl_prone.rtm";
			mask = "handsWeapon";
			looped = 0;
			speed = 0.3;
			leftHandIKCurve[] = {0.014, 1, 0.042, 0, 0.95, 0, 0.985, 1};
		};
		class RHS_GestureReloadM320_hk_Prone: RHS_GestureReloadM320_ugl_Prone
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_M320_hk_prone.rtm";
		};

		class RHS_GestureReloadM320_ugl: Default
		{
			looped = 0;
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_M320_ugl.rtm";
			mask = "handsWeapon_context";
			speed = 0.3;
			leftHandIKCurve[] = {0.014, 1, 0.042, 0, 0.95, 0, 0.985, 1};
		};
		class RHS_GestureReloadM320_hk: RHS_GestureReloadM320_ugl
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_M320_hk.rtm";
		};
		class RHS_GestureReloadM320_ugl_Context: RHS_GestureReloadM320_ugl
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadM320_hk_Context: RHS_GestureReloadM320_ugl_Context
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_M320_hk.rtm";
		};

		class RHS_GestureReloadM320_Pistol_Prone: Default
		{
			//file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_M320_Pistol_prone.rtm";
			mask = "handsWeapon_pst";
			//headBobStrength=0.05;
			//headBobMode=2;
			looped = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatibaUGL";
			speed = 0.3;
			leftHandIKCurve[] = {0.014, 1, 0.042, 0, 0.95, 0, 0.985, 1};
		};

		class RHS_GestureReloadM320_Pistol: Default
		{
			looped = 0;
			//file="\rhsusf\addons\rhsusf_c_weapons\anims\gestures\reload_M320_Pistol.rtm";
			mask = "handsWeapon_pst";
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatibaUGL";
			speed = 0.3;
			leftHandIKCurve[] = {0.014, 1, 0.042, 0, 0.95, 0, 0.985, 1};
		};
		class RHS_GestureReloadM320_Pistol_Context: RHS_GestureReloadM320_Pistol
		{
			mask = "handsWeapon_pst_context";
		};

		class RHS_GestureHoldM240: Default
		 {
			file="\rhsusf\addons\rhsusf_c_weapons\anims\rhs_gesture_M240.rtm";
			looped = 1;
			speed = 1;
			mask="leftHand";
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.0};
			enableOptics=1;
			canPullTrigger=1;
			disableWeapons=0;
		};
		class RHS_GestureHoldM240_prone: RHS_GestureHoldM240
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\rhs_gesture_M240_prone.rtm";
		};
		class RHS_GestureHoldM240_Context: RHS_GestureHoldM240
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureHoldM107: Default
		 {
			file="\rhsusf\addons\rhsusf_c_weapons\anims\rhs_gesture_M107.rtm";
			looped = 1;
			speed = 1;
			mask="leftHand";
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.0};
			enableOptics=1;
			canPullTrigger=1;
			disableWeapons=0;
		};
		class RHS_GestureHoldM107_prone: RHS_GestureHoldM107
		{
			file="\rhsusf\addons\rhsusf_c_weapons\anims\rhs_gesture_M107_prone.rtm";
		};
		class RHS_GestureHoldM107_Context: RHS_GestureHoldM107
		{
			mask = "handsWeapon_context";
		};
		// Fold Actions
		class RHS_GestureFoldSCAR: Default
		 {
			file				= "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\fold_SCAR.rtm";
			looped				= 0;
			mask				= "handsWeapon";
			canPullTrigger = 0;
			disableWeapons = 1;
			speed				= ANIMATION_DURATION_S(1.5);
			leftHandIKCurve[] =
			{
				0, 1,
				0.03, 0.8,
				0.93, 0.8,
				0.99,1
			};
			rightHandIKCurve[] =
			{
				0.0, 1,
				0.02,0.0,
				0.97, 0.0,
				0.99,1
			};
		};
		class RHS_GestureFoldSCAR_prone: RHS_GestureFoldSCAR
		{
			file				= "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\fold_SCAR.rtm";
		};
		class RHS_GestureFoldSCAR_Context: RHS_GestureFoldSCAR
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureUnFoldSCAR: Default
		 {
			file				= "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\unfold_SCAR.rtm";
			looped				= 0;
			mask				= "handsWeapon";
			canPullTrigger = 0;
			disableWeapons = 1;
			speed				= ANIMATION_DURATION_S(1.5);
			leftHandIKCurve[] =
			{
				0, 1,
				0.03, 0.8,
				0.93, 0.8,
				0.99,1
			};
			rightHandIKCurve[] =
			{
				0.0, 1,
				0.02,0.0,
				0.97, 0.0,
				0.99,1
			};
		};
		class RHS_GestureUnFoldSCAR_prone: RHS_GestureUnFoldSCAR
		{
			file				= "\rhsusf\addons\rhsusf_c_weapons\anims\gestures\unfold_SCAR.rtm";
		};
		class RHS_GestureUnFoldSCAR_Context: RHS_GestureUnFoldSCAR
		{
			mask = "handsWeapon_context";
		};
	};
};