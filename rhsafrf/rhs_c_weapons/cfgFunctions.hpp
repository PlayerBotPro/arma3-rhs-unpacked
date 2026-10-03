
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class rgno_impact
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_rgno_impact.sqf";
				description = "RGN/O Impact Grenade";
			};

			class virtualAmmoBoxRus
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\virtualAmmoBox.sqf";
				description = "[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxRus, make a object virtual ammo box with russian gear inside";
			};
			class accCombo
			{
				file = "rhsafrf\addons\rhs_c_weapons\scripts\acc_combo.sqf";
				description = "Handling of surefire/ir laser combo";
			};
			class anpeq15_rail
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_anpeq15_rail.sqf";
				description = "Handling of ANPEQ15 height";
			};
			class accGripod
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_gripod.sqf";
				description = "Handling of gripods";
			};
			class accGripod_change
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_gripod_change.sqf";
				description = "Handling of gripods";
			};
			class preferedOptic
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_preferedOptic.sqf";
				description = "Handling of prefered optic changing";
			};
			class flashbang
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_flashbang.sqf";
				description = "flashbang handler";
			};
			class flashbang_effect
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_flashbang_effect.sqf";
				description = "flashbang effect";
			};
			class tripwireFlare_msk40p
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_tripwireFlare_msk40p.sqf";
				description = "Tripwire flare effect";
			};
			class disposable
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_disposable.sqf";
				description = "Disposable launchers handler";
			};
			class disposable_load
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_disposable_load.sqf";
				description = "Loading disposable launchers for players";
			};
			class sight_kobra
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_abrakadabra.sqf";
				description = "Recticle changing function for Kobra sight";
			};
			class fold_weapon
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_fold.sqf";
				description = "Fold/unfold Primary Weapon";
			};
			// backward compatibility
			class fold_ak: fold_weapon {};
			class fold_PP
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_fold_PP.sqf";
				description = "Fold/unfold PP";
			};
			class rsp30
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_rsp30.sqf";
			};
			class rsp30_fired
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_rsp30_fired.sqf";
			};
			class sight_pso1
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_sight_pso1.sqf";
				description = "PSO-1 handler";
			};
			class sight_pgo7
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_sight_pgo7.sqf";
			};
			class sight_1p29
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_sight_1p29.sqf";
				description = "1p29 Illumination handler";
			};
			class sight_swap
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_sight_swap.sqf";
				description = "Handling ironsight modes";
			};
			class acc_npz
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_npz.sqf";
				description = "NPZ mounting handler";
			};
			class acc_npz_handler
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_npz_dismount.sqf";
				description = "NPZ dismounting handler";
			};
			class tr8_handler
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_tr8_handler.sqf";
				description = "TR-8 handler";
			};
			class pdu4_rf
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_pdu4_rf.sqf";
				description = "PDU-4 LRF handler";
			};
			class arsenal
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\arsenal\rhs_arsenal.sqf";
				description = "RHS custom arsenal script";
			};
			class addVirtualItemCargo
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\arsenal\rhs_addVirtualItemCargo.sqf";
				description = "RHS custom arsenal script";
			};
			class handle_pk
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_handle_pk.sqf";
				description = "PKP/PKM hand anim changer on deploy";
			};
			class safemode
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_safemode.sqf";
				description = "Handling of safe mode switch";
			};
			class orsis_handler
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_orsis_handler.sqf";
				description = "Handling Orsis bolting";
			};
			class boltAction
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_boltAction.sqf";
				description = "Handling of bolt action rifles";
			};
			class rpg_airburst
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_rpg_airburst.sqf";
				description = "RPG airburst effect";
			};
			class an94_fired
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_an94_fired.sqf";
			};
		};
	};
};

class CfgRemoteExec
{
	class Functions
	{
		mode = 2;
		jip = 1;
		class RHS_fnc_rgno_impact
		{
			allowedTargets = 0;
		};
		class RHS_fnc_flashbang_effect
		{
			allowedTargets = 0;
		};
	};
};

class CfgSounds
{
	class RHS_Flashbang
	{
		name="Flashbang explosion";
		sound[]=
		{
			"\rhsafrf\addons\rhs_weapons\sounds\flashbang.ogg",
			1,
			1
		};
		titles[]={};
	};
	class rhs_Orsis_bolt {
		name = "rhs orsis bolt sound";
		sound[] = {"rhsafrf\addons\rhs_c_weapons\sounds\bolt", 0.42, 1, 20};
		titles[] = {};
	};
};

class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		RHS_flashbang_cover				= "RHS_flashbang_cover";
		RHS_GestureReloadRPG7			= "RHS_GestureReloadRPG7";
		RHS_GestureReloadAK				= "RHS_GestureReloadAK";
		RHS_GestureReloadAK74			= "RHS_GestureReloadAK74";
		RHS_GestureReloadAKS			= "RHS_GestureReloadAKS";
		RHS_GestureReloadAK762			= "RHS_GestureReloadAK762";
		RHS_GestureReloadAK_1hand		= "RHS_GestureReloadAK_1hand";
		RHS_GestureReloadAK762_1hand	= "RHS_GestureReloadAK762_1hand";
		RHS_GestureReloadAKSU			= "RHS_GestureReloadAKSU";
		RHS_GestureReloadAK2			= "RHS_GestureReloadAK2";
		RHS_GestureReloadGP30			= "RHS_GestureReloadGP30";
		RHS_GestureReloadRPK			= "RHS_GestureReloadRPK";
		RHS_GestureHoldPK				= "RHS_GestureHoldPK";
		RHS_GestureReloadOrsis			= "RHS_GestureReloadOrsis";
		RHS_GestureRechamberOrsis		= "RHS_GestureReloadOrsis";
		RHS_GestureReloadSVDS			= "RHS_GestureReloadSVDS";
		RHS_GestureFoldAK74M			= "RHS_GestureFoldAK74M";
		RHS_GestureUnfoldAK74M			= "RHS_GestureUnfoldAK74M";
		RHS_GestureFoldAKMS				= "RHS_GestureFoldAKMS";
		RHS_GestureUnfoldAKMS			= "RHS_GestureUnfoldAKMS";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			RHS_GestureReloadRPG7[]			= { "RHS_GestureReloadRPG7", "Gesture"};
			RHS_GestureReloadAK[]			= { "RHS_GestureReloadAK", "Gesture" };
			RHS_GestureReloadAK74[]			= { "RHS_GestureReloadAK74", "Gesture" };
			RHS_GestureReloadAKS[]			= { "RHS_GestureReloadAKS", "Gesture" };
			RHS_GestureReloadAK762[]		= { "RHS_GestureReloadAK762", "Gesture" };
			RHS_GestureReloadAK_1hand[]		= { "RHS_GestureReloadAK_1hand", "Gesture" };
			RHS_GestureReloadAK762_1hand[]	= { "RHS_GestureReloadAK762_1hand", "Gesture" };
			RHS_GestureReloadAKSU[]			= { "RHS_GestureReloadAKSU", "Gesture"};
			RHS_GestureReloadAK2[]			= { "RHS_GestureReloadAK2", "Gesture"};
			RHS_GestureReloadGP30[]			= { "RHS_GestureReloadGP30", "Gesture"};
			RHS_GestureReloadRPK[]			= { "RHS_GestureReloadRPK", "Gesture"};
			RHS_GestureHoldPK[]				= { "RHS_GestureHoldPK", "Gesture"};
			RHS_GestureReloadOrsis[]		= { "RHS_GestureReloadOrsis", "Gesture" };
			RHS_GestureRechamberOrsis[]		= { "RHS_GestureRechamberOrsis", "Gesture" };
			RHS_GestureReloadSVDS[]			= { "RHS_GestureReloadSVDS", "Gesture" };
			RHS_GestureFoldAK74M[]			= { "RHS_GestureFoldAK74M", "Gesture" };
			RHS_GestureUnfoldAK74M[]		= { "RHS_GestureUnfoldAK74M", "Gesture" };
			RHS_GestureFoldAKMS[]			= { "RHS_GestureFoldAKMS", "Gesture" };
			RHS_GestureUnfoldAKMS[]			= { "RHS_GestureUnfoldAKMS", "Gesture" };
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			RHS_GestureReloadAK[]			= { "RHS_GestureReloadAK_Prone", "Gesture" };
			RHS_GestureReloadAK74[]			= { "RHS_GestureReloadAK_Prone", "Gesture" };
			RHS_GestureReloadAKS[]			= { "RHS_GestureReloadAKS_Prone", "Gesture" };
			RHS_GestureReloadAK762[]		= { "RHS_GestureReloadAK762_Prone", "Gesture" };
			RHS_GestureReloadAK_1hand[]		= { "RHS_GestureReloadAK_1hand_Prone", "Gesture" };
			RHS_GestureReloadAK762_1hand[]	= { "RHS_GestureReloadAK762_1hand_Prone", "Gesture" };
			RHS_GestureReloadAKSU[]			= { "RHS_GestureReloadAKSU_Prone", "Gesture"};
			RHS_GestureReloadAK2[]			= { "RHS_GestureReloadAK762_Prone", "Gesture"};
			RHS_GestureReloadGP30[]			= { "RHS_GestureReloadGP30_Prone", "Gesture"};
			RHS_GestureReloadRPK[]			= { "RHS_GestureReloadRPK_Prone", "Gesture"};
			RHS_GestureHoldPK[]				= { "RHS_GestureHoldPK_Prone", "Gesture"};
			RHS_GestureReloadOrsis[]		= { "RHS_GestureReloadOrsis_Prone", "Gesture" };
			RHS_GestureRechamberOrsis[]		= { "RHS_GestureRechamberOrsis_Prone", "Gesture" };
			RHS_GestureReloadSVDS[]			= { "RHS_GestureReloadSVDS_Prone", "Gesture" };
			RHS_GestureFoldAK74M[]			= { "RHS_GestureFoldAK74M", "Gesture" };
			RHS_GestureUnfoldAK74M[]		= { "RHS_GestureUnfoldAK74M", "Gesture" };
			RHS_GestureFoldAKMS[]			= { "RHS_GestureFoldAKMS", "Gesture" };
			RHS_GestureUnfoldAKMS[]			= { "RHS_GestureUnfoldAKMS", "Gesture" };
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			RHS_GestureReloadAK[]			= { "RHS_GestureReloadAK_Context", "Gesture" };
			RHS_GestureReloadAK74[]			= { "RHS_GestureReloadAK74_Context", "Gesture" };
			RHS_GestureReloadAKS[]			= { "RHS_GestureReloadAKS_Context", "Gesture" };
			RHS_GestureReloadAK762[]		= { "RHS_GestureReloadAK762_context", "Gesture" };
			RHS_GestureReloadAK_1hand[]		= { "RHS_GestureReloadAK_1hand_Context", "Gesture" };
			RHS_GestureReloadAK762_1hand[]	= { "RHS_GestureReloadAK762_1hand_Context", "Gesture" };
			RHS_GestureReloadAKSU[]			= { "RHS_GestureReloadAKSU_Context", "Gesture"};
			RHS_GestureReloadAK2[]			= { "RHS_GestureReloadAK2_Context", "Gesture"};
			RHS_GestureReloadGP30[]			= { "RHS_GestureReloadGP30_Context", "Gesture"};
			RHS_GestureReloadRPK[]			= { "RHS_GestureReloadRPK_Context", "Gesture"};
			RHS_GestureHoldPK[]				= { "RHS_GestureHoldPK_Context", "Gesture"};
			RHS_GestureReloadOrsis[]		= { "RHS_GestureReloadOrsis_Context", "Gesture" };
			RHS_GestureRechamberOrsis[]		= { "RHS_GestureRechamberOrsis_Context", "Gesture" };
			RHS_GestureReloadSVDS[]			= { "RHS_GestureReloadSVDS_Context", "Gesture" };
			RHS_GestureFoldAK74M[]			= { "RHS_GestureFoldAK74M_Context", "Gesture" };
			RHS_GestureUnfoldAK74M[]		= { "RHS_GestureUnfoldAK74M_Context", "Gesture" };
			RHS_GestureFoldAKMS[]			= { "RHS_GestureFoldAKMS_Context", "Gesture" };
			RHS_GestureUnfoldAKMS[]			= { "RHS_GestureUnfoldAKMS_Context", "Gesture" };
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			RHS_GestureReloadAK[]			= { "RHS_GestureReloadAK_Context", "Gesture" };
			RHS_GestureReloadAK74[]			= { "RHS_GestureReloadAK74_Context", "Gesture" };
			RHS_GestureReloadAKS[]			= { "RHS_GestureReloadAKS_Context", "Gesture" };
			RHS_GestureReloadAK762[]		= { "RHS_GestureReloadAK762_context", "Gesture" };
			RHS_GestureReloadAK_1hand[]		= { "RHS_GestureReloadAK_1hand_Context", "Gesture" };
			RHS_GestureReloadAK762_1hand[]	= { "RHS_GestureReloadAK762_1hand_Context", "Gesture" };
			RHS_GestureReloadAKSU[]			= { "RHS_GestureReloadAKSU_Context", "Gesture"};
			RHS_GestureReloadAK2[]			= { "RHS_GestureReloadAK2_Context", "Gesture"};
			RHS_GestureReloadGP30[]			= { "RHS_GestureReloadGP30_Context", "Gesture"};
			RHS_GestureReloadRPK[]			= { "RHS_GestureReloadRPK_Context", "Gesture"};
			RHS_GestureHoldPK[]				= { "RHS_GestureHoldPK_Context", "Gesture"};
			RHS_GestureReloadOrsis[]		= { "RHS_GestureReloadOrsis_Context", "Gesture" };
			RHS_GestureRechamberOrsis[]		= { "RHS_GestureRechamberOrsis_Context", "Gesture" };
			RHS_GestureReloadSVDS[]			= { "RHS_GestureReloadSVDS_Context", "Gesture" };
			RHS_GestureFoldAK74M[]			= { "RHS_GestureFoldAK74M_Context", "Gesture" };
			RHS_GestureUnfoldAK74M[]		= { "RHS_GestureUnfoldAK74M_Context", "Gesture" };
			RHS_GestureFoldAKMS[]			= { "RHS_GestureFoldAKMS_Context", "Gesture" };
			RHS_GestureUnfoldAKMS[]			= { "RHS_GestureUnfoldAKMS_Context", "Gesture" };
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			RHS_GestureReloadAK[]			= { "RHS_GestureReloadAK", "Gesture" };
			RHS_GestureReloadAK74[]			= { "RHS_GestureReloadAK74_Context", "Gesture" };
			RHS_GestureReloadAKS[]			= { "RHS_GestureReloadAKS", "Gesture" };
			RHS_GestureReloadAK762[]		= { "RHS_GestureReloadAK762", "Gesture" };
			RHS_GestureReloadAK_1hand[]		= { "RHS_GestureReloadAK_1hand", "Gesture" };
			RHS_GestureReloadAK762_1hand[]	= { "RHS_GestureReloadAK762_1hand", "Gesture" };
			RHS_GestureReloadAKSU[]			= { "RHS_GestureReloadAKSU", "Gesture"};
			RHS_GestureReloadAK2[]			= { "RHS_GestureReloadAK2", "Gesture"};
			RHS_GestureReloadGP30[]			= { "RHS_GestureReloadGP30", "Gesture"};
			RHS_GestureReloadRPK[]			= { "RHS_GestureReloadRPK", "Gesture"};
			RHS_GestureHoldPK[]				= { "RHS_GestureHoldPK", "Gesture"};
			RHS_GestureReloadOrsis[]		= { "RHS_GestureReloadOrsis", "Gesture" };
			RHS_GestureRechamberOrsis[]		= { "RHS_GestureRechamberOrsis", "Gesture" };
			RHS_GestureReloadSVDS[]			= { "RHS_GestureReloadSVDS", "Gesture" };
			RHS_GestureFoldAK74M[]			= { "RHS_GestureFoldAK74M", "Gesture" };
			RHS_GestureUnfoldAK74M[]		= { "RHS_GestureUnfoldAK74M", "Gesture" };
			RHS_GestureFoldAKMS[]			= { "RHS_GestureFoldAKMS", "Gesture" };
			RHS_GestureUnfoldAKMS[]			= { "RHS_GestureUnfoldAKMS", "Gesture" };
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class RHS_flashbang_cover: Default
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

#define ANIMATION_DURATION_S(duration)  __EVAL(1/duration)
class CfgGesturesMale
{
	class Default;
	class States
	{
		class RHS_GestureReloadRPG7: Default
		{
			file="rhsafrf\addons\rhs_c_weapons\anims\RPG7reload.rtm";
			looped = 0;
			speed = 0.17;
			mask = "launcher";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			  leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		 };
		class RHS_GestureReloadAK :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.631944, 1, 0.657922, 0, 0.840278, 0, 0.875, 1 };
			leftHandIKCurve[] = { 0, 1, 0.03125, 0, 0.868056, 0, 0.96, 1 };
			leftHandIKBeg = false;
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadAK74 :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak74.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.631944, 1, 0.657922, 0, 0.840278, 0, 0.875, 1 };
			leftHandIKCurve[] = { 0, 1, 0.03125, 0, 0.868056, 0, 0.96, 1 };
			leftHandIKBeg = false;
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadAKS :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak2.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.631944, 1, 0.657922, 0, 0.840278, 0, 0.875, 1 };
			leftHandIKCurve[] = { 0, 1, 0.03125, 0, 0.868056, 0, 0.96, 1 };
			leftHandIKBeg = false;
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadAK762 :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak762_twohanded.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.631944, 1, 0.657922, 0, 0.840278, 0, 0.875, 1 };
			leftHandIKCurve[] = { 0, 1, 0.03125, 0, 0.868056, 0, 0.96, 1 };
			leftHandIKBeg = false;
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadAK_1hand :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak_onehanded.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.200000;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = true;
		};


		class RHS_GestureReloadAK762_1hand :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak762_onehanded.rtm";
			looped = 0;
			speed = -4.333333;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.02;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = true;
		};


		class RHS_GestureReloadAKSU : RHS_GestureReloadAK_1hand
		 {
			file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_aksu_onehanded.rtm";
		};
		class RHS_GestureReloadAK2: RHS_GestureReloadAK
		 {
			 file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak762_twohanded.rtm";
			 looped = 0;
			 speed = -4.8;
			 mask = "handsWeapon";
			 // mask="empty";
			 headBobStrength = 0.200000;
			 headBobMode = 2;
			 rightHandIKCurve[] = { 0.631944, 1, 0.657922, 0, 0.840278, 0, 0.875, 1 };
			 leftHandIKCurve[] = { 0, 1, 0.03125, 0, 0.868056, 0, 0.96, 1 };
			 leftHandIKBeg = false;
			 leftHandIKEnd = true;
			 rightHandIKBeg = true;
			 rightHandIKEnd = true;
		};

		class RHS_GestureReloadAK_Prone :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak_prone.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.2;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadAKS_Prone :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_aks_prone.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.2;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadAK762_Prone :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak762_twohanded_prone.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.2;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.868, 0, 0.96, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.027778, 0, 0.84, 0, 0.86, 1 };
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadAK_1hand_Prone :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak_prone2.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.2;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadAK762_1hand_Prone :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak_prone2.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.02;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadAK_Context : RHS_GestureReloadAK
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadAK74_Context : RHS_GestureReloadAK74
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadAKS_Context : RHS_GestureReloadAKS
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadAK762_Context : RHS_GestureReloadAK762
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadAK_1hand_Context : RHS_GestureReloadAK_1hand
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadAK762_1hand_Context : RHS_GestureReloadAK762_1hand
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadAKSU_Prone : RHS_GestureReloadAK_1hand_Prone
		{

			file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak_prone.rtm";
		};
		class RHS_GestureReloadAKSU_Context: RHS_GestureReloadAKSU
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadAK2_Context: RHS_GestureReloadAK2
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadRPK: Default
		 {
			file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_rpk_standing.rtm";
			speed=0.1875;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[] = {0.6125,1,0.675,0,0.85625,0,0.90625,1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.60625, 0, 0.625, 1};
		};

		class RHS_GestureReloadRPK_Prone: Default
		 {
			file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_rpk_prone.rtm";
			speed=0.1875;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.02;
			headBobMode=2;
			rightHandIKCurve[] = {0.6125,1,0.675,0,0.85625,0,0.90625,1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.60625, 0, 0.625, 1};
		};
		class RHS_GestureReloadRPK_Context: RHS_GestureReloadRPK
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureReloadGP30: Default
		{
			file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_gp30.rtm";
			speed=0.42863266180882983283326189455637;
			looped = false;
			mask = "handsWeapon_context";
			headBobStrength=0.1;
			headBobMode=2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = {0, 1, 0.075, 0, 0.65, 0, 0.74, 1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadGP30_Prone: Default
		{
			file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_gp30_prone.rtm";
			speed=0.42863266180882983283326189455637;
			looped = false;
				mask = "handsWeapon_context";
			headBobStrength=0.1;
			headBobMode=2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = {0, 1, 0.075, 0, 0.65, 0, 0.74, 1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadGP30_Context: RHS_GestureReloadGP30
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureHoldPK: Default
		 {
			file="\rhsafrf\addons\rhs_c_weapons\anims\rhs_gesture_pk.rtm";
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
		class RHS_GestureHoldPK_prone: RHS_GestureHoldPK
		{
			file="\rhsafrf\addons\rhs_c_weapons\anims\rhs_gesture_pk_prone.rtm";
		};
		class RHS_GestureHoldPK_Context: RHS_GestureHoldPK
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadOrsis_Prone : Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_orsis_prone.rtm";
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

		class RHS_GestureReloadOrsis : Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_orsis_standing.rtm";
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
		class RHS_GestureReloadOrsis_Context : RHS_GestureReloadOrsis
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureRechamberOrsis_Prone : Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\rechamber_orsis_prone.rtm";
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

		class RHS_GestureRechamberOrsis : Default
		{
			enableOptics = 1;
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\rechamber_orsis_standing.rtm";
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

		class RHS_GestureRechamberOrsis_Context : RHS_GestureRechamberOrsis
		{
			mask = "handsWeapon_context";
		};

		class RHS_GestureReloadSVDS :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_SVDS_Standing.rtm";
			speed = -4.83333;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.6662, 1, 0.685, 0, 0.875, 0, 0.89, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 0.034448, 0, 0.64827586, 0, 0.675, 1 };
		};

		class RHS_GestureReloadSVDS_Prone :Default
		{
			file = "\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_SVDS_Prone.rtm";
			speed = -4.83333;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.02;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.689, 1, 0.712, 0, 0.895, 0, 0.91, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 0.034448, 0, 0.9375, 0, 0.9655, 1 };
		};
		class RHS_GestureReloadSVDS_Context : RHS_GestureReloadSVDS
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureFoldAK74M: Default
		 {
			file				= "\rhsafrf\addons\rhs_c_weapons\anims\gestures\fold_ak74m.rtm";
			looped				= 0;
			mask				= "handsWeapon";
			canPullTrigger = 0;
			disableWeapons = 1;
			speed				= ANIMATION_DURATION_S(2.5);
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
		class RHS_GestureFoldAK74M_prone: RHS_GestureFoldAK74M
		{
			file				= "\rhsafrf\addons\rhs_c_weapons\anims\gestures\fold_ak74m.rtm";
		};
		class RHS_GestureFoldAK74M_Context: RHS_GestureFoldAK74M
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureUnFoldAK74M: Default
		 {
			file				= "\rhsafrf\addons\rhs_c_weapons\anims\gestures\unfold_ak74m.rtm";
			looped				= 0;
			mask				= "handsWeapon";
			canPullTrigger = 0;
			disableWeapons = 1;
			speed				= ANIMATION_DURATION_S(1.5);
			leftHandIKCurve[] =
			{
				0, 1,
				0.03, 0.0,
				0.93, 0.0,
				0.99,1
			};
			rightHandIKCurve[] =
			{
				0.0, 1,
				0.02,0.8,
				0.97, 0.8,
				0.99,1
			};
		};
		class RHS_GestureUnFoldAK74M_prone: RHS_GestureUnFoldAK74M
		{
			file				= "\rhsafrf\addons\rhs_c_weapons\anims\gestures\unfold_ak74m.rtm";
		};
		class RHS_GestureUnFoldAK74M_Context: RHS_GestureUnFoldAK74M
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureFoldAKMS: Default
		 {
			file				= "\rhsafrf\addons\rhs_c_weapons\anims\gestures\fold_akms.rtm";
			looped				= 0;
			mask				= "handsWeapon";
			canPullTrigger = 0;
			disableWeapons = 1;
			speed				= ANIMATION_DURATION_S(2.5);
			leftHandIKCurve[] =
			{
				0, 1,
				0.03, 0.0,
				0.93, 0.0,
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
		class RHS_GestureFoldAKMS_prone: RHS_GestureFoldAKMS
		{
			file				= "\rhsafrf\addons\rhs_c_weapons\anims\gestures\fold_akms.rtm";
		};
		class RHS_GestureFoldAKMS_Context: RHS_GestureFoldAKMS
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureUnFoldAKMS: Default
		 {
			file				= "\rhsafrf\addons\rhs_c_weapons\anims\gestures\unfold_akms.rtm";
			looped				= 0;
			mask				= "handsWeapon";
			canPullTrigger = 0;
			disableWeapons = 1;
			speed				= ANIMATION_DURATION_S(1.5);
			leftHandIKCurve[] =
			{
				0, 1,
				0.03, 0.0,
				0.93, 0.0,
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
		class RHS_GestureUnFoldAKMS_prone: RHS_GestureUnFoldAKMS
		{
			file				= "\rhsafrf\addons\rhs_c_weapons\anims\gestures\unfold_akms.rtm";
		};
		class RHS_GestureUnFoldAKMS_Context: RHS_GestureUnFoldAKMS
		{
			mask = "handsWeapon_context";
		};
	};
};