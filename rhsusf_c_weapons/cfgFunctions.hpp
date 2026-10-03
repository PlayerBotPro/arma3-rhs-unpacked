#define FNC_PATH_MACRO(nameOfScript) file = rhsusf\addons\rhsusf_c_weapons\scripts\##nameOfScript##.sqf;
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class virtualAmmoBoxUSA
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\virtualAmmoBox.sqf";
				description = "[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxUSA, make a object virtual ammo box with american gear inside";
			};
			class combo_optics
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_abrakadabra.sqf";
				description = "Changing optic modes for combination optics";
			};
			class accCombo
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\acc_combo.sqf";
				description = "Handling of surefire/ir laser combo";
			};
			class anpeq15_rail
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_anpeq15_rail.sqf";
				description = "Handling of ANPEQ15 height";
			};
			class aimpointt1_rail
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_aimpointt1_rail.sqf";
				description = "Handling of Aimpoint T1 position";
			};
			class accGripod
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_gripod.sqf";
				description = "Handling of gripods";
			};
			class accGripod_change
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_gripod_change.sqf";
				description = "Handling of gripods - replacement part";
			};
			class disposable
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_disposable.sqf";
				description = "Disposable weapons";
			};
			class m136_load
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_disposable_load.sqf";
				description = "Handling of surefire/ir laser combo";
			};
			class at4_peep
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_at4_peep.sqf";
				description = "Handling of AT4 Peephole";
			};
			class pip_handler
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_pip_handler.sqf";
			};
			class preferedOptic
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_preferedOptic.sqf";
				description = "Handling of prefered optic changing";
			};
			class m2010_handler
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_m2010_handler.sqf";
				description = "Handling of AT4 Peephole";
			};
			class m590_handler
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_m590_handler.sqf";
				description = "Handling of AT4 Peephole";
			};
			class leica_rf
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_leica_rf.sqf";
				description = "Leica Rangemaster 1200 LRF handler";
			};
			class usf_flashbang
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_flashbang.sqf";
				description = "flashbang handler";
			};
			class usf_flashbang_effect
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_flashbang_effect.sqf";
				description = "flashbang effect";
			};
			class arsenal
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\arsenal\rhs_arsenal.sqf";
				description = "RHS custom arsenal script";
			};
			class addVirtualItemCargo
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\arsenal\rhs_addVirtualItemCargo.sqf";
				description = "RHS custom arsenal script";
			};
			class handle_MG
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_handle_mg.sqf";
				description = "MG hand anim changer on deploy";
			};
			class safemode
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_safemode.sqf";
				description = "Handling of safe mode switch";
			};
			class boltAction
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_boltAction.sqf";
				description = "Handling of bolt action rifles";
			};
			class reloadShotgun
			{
				FNC_PATH_MACRO(rhs_reloadShotgun)
			};
			class tripwireFlare_m49a1
			{
				FNC_PATH_MACRO(rhs_tripwireFlare_m49a1)
				description = "Tripwire flare effect for M49A1";
			};
			class fold_weapon
			{
				FNC_PATH_MACRO(rhs_fold)
			};
			class fold_PP
			{
				FNC_PATH_MACRO(rhs_fold_pp)
			};
			class addEmptyTube
			{
				FNC_PATH_MACRO(rhs_addEmptyTube)
			};
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
			"\rhsusf\addons\rhsusf_c_weapons\sounds\flashbang.ogg",
			1,
			1
		};
		titles[]={};
	};
	class RHSUSF_M590_Pump
	{
		name="M590 Pump";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_c_weapons\sounds\m590_pump.ogg",
			1,
			1
		};
		titles[]={};
	};
};