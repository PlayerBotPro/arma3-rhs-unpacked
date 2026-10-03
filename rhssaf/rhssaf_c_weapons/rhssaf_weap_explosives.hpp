///! mines & grenades

	class Default;
	class Put: Default
	{
		muzzles[] += {"Rhssaf_Mine_Muzzle", "rhssaf_tm100_muzzle", "rhssaf_tm200_muzzle", "rhssaf_tm500_muzzle"};
		class PutMuzzle: Default {};
		class Rhssaf_Mine_Muzzle: PutMuzzle
		{
			magazines[] = {"rhssaf_mine_pma3_mag", "rhssaf_mine_tma4_mag", "rhssaf_mine_mrud_a_mag", "rhssaf_mine_mrud_b_mag", "rhssaf_mine_mrud_c_mag", "rhssaf_mine_mrud_d_mag"};
		};
		class rhssaf_tm100_muzzle: PutMuzzle
		{
			autoreload = 0;
			displayName = "TM-100 charge";
			magazines[] = {"rhssaf_tm100_mag"};
			enableAttack = 1;
			showToPlayer = 0;
		};
		class rhssaf_tm200_muzzle: PutMuzzle
		{
			autoreload = 0;
			displayName = "TM-200 charge";
			magazines[] = {"rhssaf_tm200_mag"};
			enableAttack = 1;
			showToPlayer = 0;
		};
		class rhssaf_tm500_muzzle: PutMuzzle
		{
			autoreload = 0;
			displayName = "TM-500 charge";
			magazines[] = {"rhssaf_tm500_mag"};
			enableAttack = 1;
			showToPlayer = 0;
		};
	};

	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {
			rhssaff_throw_flashbang,
			rhssaf_throw_grenade,
			rhssaf_throw_at_grenade, 
			rhssaf_throw_incendiary,
			rhssaf_throw_smoke_white,
			rhssaf_throw_smoke_yellow,
			rhssaf_throw_smoke_green,
			rhssaf_throw_smoke_red,
			rhssaf_throw_smoke_blue,
			rhssaf_throw_smoke_orange
		};
		class ThrowMuzzle: GrenadeLauncher {};
		class rhssaff_throw_flashbang: ThrowMuzzle
		{
			magazines[] = 
			{
				"rhssaf_mag_rshb_p98"
			};
		};
		class rhssaf_throw_incendiary: ThrowMuzzle
		{
			magazines[] = 
			{
				"rhssaf_mag_brz_m88"
			};
		};
		class rhssaf_throw_smoke_white: ThrowMuzzle
		{
			magazines[] = 
			{
				"rhssaf_mag_brd_m83_white"
			};
		};
		class rhssaf_throw_smoke_yellow: ThrowMuzzle
		{
			magazines[] = 
			{
				"rhssaf_mag_brd_m83_yellow"
			};
		};
		class rhssaf_throw_smoke_green: ThrowMuzzle
		{
			magazines[] = 
			{
				"rhssaf_mag_brd_m83_green"
			};
		};
		class rhssaf_throw_smoke_red: ThrowMuzzle
		{
			magazines[] = 
			{
				"rhssaf_mag_brd_m83_red"
			};
		};
		class rhssaf_throw_smoke_blue: ThrowMuzzle
		{
			magazines[] = 
			{
				"rhssaf_mag_brd_m83_blue"
			};
		};
		class rhssaf_throw_smoke_orange: ThrowMuzzle
		{
			magazines[] = 
			{
				"rhssaf_mag_brd_m83_orange"
			};
		};
		class rhssaf_throw_grenade: ThrowMuzzle
		{
			magazines[] = 
			{
				"rhssaf_mag_br_m75",
				"rhssaf_mag_br_m84"
			};
		};
		class rhssaf_throw_at_grenade: ThrowMuzzle
		{
			magazines[] = 
			{
				"rhssaf_mag_brk_m79"
			};
			class Eventhandlers
			{
				class RHS_ThrowAction {
					fired = "[_this select 0, _this select 6] call RHS_FNC_RKG3_IMPACT;";
				};
			};
		};
	};