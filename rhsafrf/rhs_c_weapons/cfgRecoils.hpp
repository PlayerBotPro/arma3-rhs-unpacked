/*
Basic description:

    Parameter muzzleOuter defines the possible area where the recoil would like to move the weapon's muzzle randomly at each shot. It is defined as ellipse with variables defining the {horizontal axis position, vertical axis position, horizontal magnitude, vertical magnitude }; or, translated to the weapon's recoil movement behavior {how far to the right, how high up, how much horizontal deviation, how much vertical deviation}.
    Parameter muzzleInner defines the restricted area inside the outer ellipse where the recoil cannot end. As you could see, it is currently defined outside the outer ellipse in all cases and thus effectively unused. We have some plans for it though.
    Parameter kickBack defines the minimum and maximum interval for backward force applied over the arms and torso each shot.

Remaining parameters define how much of the random muzzle displacement within defined ellipse space is permanent (causing muzzle rise you should compensate for) and how much is temporary (causing temporal weapon rise up and down, thus causing the weapon to shake in your hands).

Camera shakes are derived from the overall magnitude of each recoil impulse forces.

Basic suggestions:

    would you like your weapon to kick more to the right ? Increase Horizontal Axis Position value of muzzleOuter.
    would you like your weapon to kick more upwards ? Increase Vertical Axis Position value of muzzleOuter.
    would you like your weapon to jump left and right more randomly ? Increase Horizontal Magnitude value of muzzleOuter.
    would you like your weapon to jump up and down more randomly ? Increase Vertical Magnitude value of muzzleOuter.
    would you like your weapon to climb up more ? Increase permanent.
    would you like your weapon to shake more in your hands ? Increase temporary.
    would you like your weapon to kick back more ? Increase kickBack.
    and vice versa.

*/
class CfgRecoils {
	class recoil_default;
	class recoil_nlaw;

	// example, values are copy pasted from katiba
	class rhs_recoil_ak74m : recoil_default {
		muzzleOuter[]	= {0.3, 1, 0.3, 0.3};
		kickBack[]		= {0.02, 0.04};
		temporary		= 0.01;
	};
	class rhs_recoil_ak74m_folded : recoil_default {
		muzzleOuter[]	= {0.6, 1.5, 0.8, 0.3};
		kickBack[]		= {0.02, 0.08};
		permanent		= 0.1;
		temporary		= 0.05;
	};
	class rhs_recoil_an94 : recoil_default {
		muzzleOuter[]	= {0.3, 0.9, 0.33, 0.3};
		kickBack[]		= {0.02, 0.04};
		temporary		= 0.01;
	};
	class rhs_recoil_akm : recoil_default {
		muzzleOuter[]	= {0.3, 1.2, 0.3, 0.3};
		kickBack[]		= {0.03, 0.06};
		temporary		= 0.015;
	};
	class rhs_recoil_akms : recoil_default {
		muzzleOuter[]	= {0.3, 1.2, 0.4, 0.3};
		kickBack[]		= {0.03, 0.06};
		temporary		= 0.015;
	};
	class rhs_recoil_akms_folded : recoil_default {
		muzzleOuter[]	= {0.6, 1.5, 0.8, 0.3};
		kickBack[]		= {0.02, 0.08};
		permanent		= 0.1;
		temporary		= 0.05;
	};
	class rhs_recoil_gp25 : recoil_default 
	{
		muzzleOuter[]	= {0.4, 1.5, 0.6, 0.4};
		kickBack[]		= {0.04, 0.07};
		temporary		= 0.01;
	};
	class rhs_recoil_asval: recoil_default
	{
		muzzleOuter[]	= {0.2, 0.8, 0.4, 0.3};
		kickBack[]		= {0.03, 0.05};
		temporary		= 0.015;
	};
	class rhs_recoil_asval_folded: recoil_default
	{
		muzzleOuter[]	= {0.3, 1.2, 0.5, 0.4};
		kickBack[]		= {0.03, 0.05};
		permanent		= 0.1;
		temporary		= 0.05;
	};
	class rhs_recoil_rpk74 : recoil_default {
		muzzleOuter[]	= {0.3, 1, 0.2, 0.2};
		kickBack[]		= {0.02, 0.04};
		temporary		= 0.01;
	};
	class rhs_recoil_rpk74_folded : recoil_default {
		muzzleOuter[]	= {0.7, 1.6, 0.8, 0.3};
		kickBack[]		= {0.02, 0.08};
		permanent		= 0.1;
		temporary		= 0.05;
	};
	class rhs_recoil_svd: recoil_default
	{
		muzzleOuter[]	= {0.5, 2, 0.5, 0.5};
		kickBack[]		= {0.03, 0.08};
		temporary		= 0.015;
	};
	class rhs_recoil_orsis : recoil_default 
	{
		muzzleOuter[]	= {1.4, 3.5, 0.7, 0.8};
		kickBack[]		= {0.1, 0.12};
		temporary		= 0.025;
	};
	class rhs_recoil_pp2000 : recoil_default 
	{
		muzzleOuter[]	= {0.1, 0.4, 0.2, 0.2};
		kickBack[]		= {0.01, 0.02};
		temporary		= 0.01;
	};
	class rhs_recoil_pp2000_folded : recoil_default 
	{
		muzzleOuter[]	= {0.4, 1.5, 0.6, 0.4};
		kickBack[]		= {0.04, 0.07};
		temporary		= 0.01;
	};
	class rhs_recoil_pkm : recoil_default {
		muzzleOuter[]	= {0.55, 1, 0.7, 0.35};
		kickBack[]		= {0.02, 0.09};
		temporary		= 0.005;
	};

	class rhs_recoil_launcher: recoil_nlaw
	{
		// Pociski rakietowe generalnie ciągną za sobą wyrzutnię, co widać na wielu nagraniach
		permanent     = 0.7;
		temporary     = 0.1;
		kickBack[]    = {0, 0}; // nie działa gdy jest ujemne
	};
	class rhs_recoil_rpg7: rhs_recoil_launcher
	{
		muzzleOuter[] = {-0.03, -0.3, 0.01, 0.1};
	};
	class rhs_recoil_rpg26: rhs_recoil_launcher
	{
		muzzleOuter[] = {-0.1, -0.6, 0.2, 0.2};
	};
	class rhs_recoil_igla: rhs_recoil_launcher
	{
		muzzleOuter[] = {-0.1, -0.6, 0.2, 0.2};
	};

//////// for reference
	/*
	class Default {
		muzzleOuter[] = {0, 0.4, 0.5, 0.6};
		kickBack[] = {0.05, 0.1};
		permanent = 0.1;
		temporary = 0.01;
	};
	class recoil_default : Default {
		muzzleOuter[] = {0.3, 1, 0.3, 0.2};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		kickBack[] = {0.03, 0.06};
		permanent = 0.1;
		temporary = 0.01;
	};
	class recoil_mk20 : recoil_default {
		muzzleOuter[] = {0.2, 0.6, 0.2, 0.2};
		kickBack[] = {0.01, 0.03};
		temporary = 0.01;
	};
	class recoil_mk20c : recoil_default {
		muzzleOuter[] = {0.2, 0.8, 0.3, 0.2};
		kickBack[] = {0.02, 0.04};
		temporary = 0.015;
	};
	class recoil_trg20 : recoil_default {
		muzzleOuter[] = {0.2, 1, 0.3, 0.3};
		kickBack[] = {0.02, 0.04};
		temporary = 0.015;
	};
	class recoil_trg21 : recoil_default {
		muzzleOuter[] = {0.2, 0.8, 0.3, 0.2};
		kickBack[] = {0.01, 0.03};
		temporary = 0.01;
	};
	class recoil_mx : recoil_default {
		muzzleOuter[] = {0.3, 1, 0.4, 0.3};
		kickBack[] = {0.02, 0.04};
		temporary = 0.01;
	};
	class recoil_mxc : recoil_default {
		muzzleOuter[] = {0.3, 1.2, 0.4, 0.3};
		kickBack[] = {0.03, 0.06};
		temporary = 0.015;
	};
	class recoil_sw : recoil_default {
		muzzleOuter[] = {0.3, 0.8, 0.5, 0.2};
		kickBack[] = {0.02, 0.04};
		temporary = 0.005;
	};
	class recoil_mxm : recoil_default {
		muzzleOuter[] = {0.3, 0.8, 0.4, 0.3};
		kickBack[] = {0.02, 0.04};
		temporary = 0.01;
	};
	class recoil_ktb : recoil_default {
		muzzleOuter[] = {0.3, 1, 0.3, 0.3};
		kickBack[] = {0.02, 0.04};
		temporary = 0.01;
	};
	class recoil_ktbc : recoil_default {
		muzzleOuter[] = {0.3, 1.2, 0.3, 0.3};
		kickBack[] = {0.03, 0.06};
		temporary = 0.015;
	};
	class recoil_smg_01 : recoil_default {
		muzzleOuter[] = {0.1, 0.4, 0.3, 0.2};
		kickBack[] = {0.01, 0.03};
		temporary = 0.015;
	};
	class recoil_smg_02 : recoil_default {
		muzzleOuter[] = {0.1, 0.4, 0.2, 0.2};
		kickBack[] = {0.01, 0.02};
		temporary = 0.01;
	};
	class recoil_pdw : recoil_default {
		muzzleOuter[] = {0.2, 0.4, 0.2, 0.3};
		kickBack[] = {0.02, 0.04};
		temporary = 0.02;
	};
	class recoil_sdar : recoil_default {
		muzzleOuter[] = {0.2, 1, 0.3, 0.3};
		kickBack[] = {0.02, 0.04};
		temporary = 0.01;
	};
	class recoil_pistol_p07 : recoil_default {
		muzzleOuter[] = {0.2, 1, 0.2, 0.3};
		kickBack[] = {0.03, 0.06};
		temporary = 0.03;
	};
	class recoil_pistol_rook40 : recoil_default {
		muzzleOuter[] = {0.2, 1, 0.2, 0.3};
		kickBack[] = {0.03, 0.06};
		temporary = 0.02;
	};
	class recoil_pistol_acpc2 : recoil_default {
		muzzleOuter[] = {0.2, 1.5, 0.2, 0.3};
		kickBack[] = {0.04, 0.08};
		temporary = 0.04;
	};
	class recoil_pistol_4five : recoil_default {
		muzzleOuter[] = {0.2, 1.5, 0.2, 0.3};
		kickBack[] = {0.04, 0.08};
		temporary = 0.06;
	};
	class recoil_pistol_zubr : recoil_default {
		muzzleOuter[] = {0.2, 1.5, 0.2, 0.3};
		kickBack[] = {0.04, 0.08};
		temporary = 0.08;
	};
	class recoil_pistol_signal : recoil_default {
		muzzleOuter[] = {0.2, 1.5, 0.2, 0.3};
		kickBack[] = {0.02, 0.04};
		temporary = 0.02;
	};
	class recoil_rpg : recoil_default {
		muzzleOuter[] = {0.2, 0.3, 0.25, 0.12};
		kickBack[] = {0.08, 0.1};
		temporary = 0.1;
	};
	class recoil_nlaw : recoil_default {
		muzzleOuter[] = {0.2, 0.3, 0.25, 0.12};
		kickBack[] = {0.06, 0.08};
		temporary = 0.08;
	};
	class recoil_titan_long : recoil_default {
		muzzleOuter[] = {0.2, 0.3, 0.25, 0.12};
		kickBack[] = {0.1, 0.12};
		temporary = 0.15;
	};
	class recoil_titan_short : recoil_default {
		muzzleOuter[] = {0.2, 0.3, 0.25, 0.12};
		kickBack[] = {0.1, 0.12};
		temporary = 0.12;
	};
	class recoil_mk200 : recoil_default {
		muzzleOuter[] = {0.4, 0.6, 0.6, 0.2};
		kickBack[] = {0.03, 0.06};
		temporary = 0.005;
	};
	class recoil_zafir : recoil_default {
		muzzleOuter[] = {0.5, 1, 0.7, 0.3};
		kickBack[] = {0.02, 0.08};
		temporary = 0.005;
	};
	class recoil_m320 : recoil_default {
		muzzleOuter[] = {1, 3, 0.5, 0.6};
		kickBack[] = {0.08, 0.1};
		temporary = 0.02;
	};
	class recoil_gm6 : recoil_default {
		muzzleOuter[] = {1.4, 3.5, 0.7, 0.8};
		kickBack[] = {0.1, 0.12};
		temporary = 0.025;
	};
	class recoil_ebr : recoil_default {
		muzzleOuter[] = {0.4, 1.5, 0.6, 0.4};
		kickBack[] = {0.04, 0.07};
		temporary = 0.01;
	};
	class recoil_dmr_01 : recoil_default {
		muzzleOuter[] = {0.5, 2, 0.5, 0.5};
		kickBack[] = {0.03, 0.08};
		temporary = 0.015;
	};
	class recoil_dmr_02 : recoil_default {
		muzzleOuter[] = {0.5, 2.5, 0.6, 0.5};
		kickBack[] = {0.06, 0.08};
		temporary = 0.01;
	};
	class recoil_dmr_03 : recoil_default {
		muzzleOuter[] = {0.3, 1.5, 0.5, 0.4};
		kickBack[] = {0.03, 0.06};
		temporary = 0.005;
	};
	class recoil_dmr_04 : recoil_default {
		muzzleOuter[] = {0.4, 1.5, 0.5, 0.4};
		kickBack[] = {0.02, 0.04};
		temporary = 0.015;
	};
	class recoil_dmr_05 : recoil_default {
		muzzleOuter[] = {0.5, 2.5, 0.8, 0.6};
		kickBack[] = {0.08, 0.1};
		temporary = 0.01;
	};
	class recoil_dmr_06 : recoil_default {
		muzzleOuter[] = {0.5, 2, 0.7, 0.5};
		kickBack[] = {0.05, 0.1};
		temporary = 0.01;
	};
	class recoil_mmg_01 : recoil_default {
		muzzleOuter[] = {0.6, 1.5, 0.8, 0.3};
		kickBack[] = {0.02, 0.08};
		temporary = 0.005;
	};
	class recoil_mmg_02 : recoil_default {
		muzzleOuter[] = {0.5, 1.5, 0.6, 0.4};
		kickBack[] = {0.04, 0.08};
		temporary = 0.005;
	};*/
};