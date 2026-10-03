
//old, unused weapons left for compatibility sake

class rhs_weap_m4_bipod : rhs_weap_m4
{
	scope = 2;
	AUTHOR_MACRO
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_BIPOD;
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_m4a1_bipod : rhs_weap_m4a1
{
	scope = 2;
	AUTHOR_MACRO
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_bipod;
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_m4a1_carryhandle_bipod : rhs_weap_m4a1_carryhandle
{
	scope = 2;
	AUTHOR_MACRO
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_BIPOD_CARRYHANDLE;
	picture = "\rhsusf\addons\rhsusf_weapons\icons\w_m4carryhandlegrip_ca.paa";
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_m16a4_bipod : rhs_weap_m16a4
{
	scope = 2;
	AUTHOR_MACRO
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_bipod;
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};

class rhs_weap_m16a4_carryhandle_bipod : rhs_weap_m16a4_carryhandle
{
	scope = 2;
	AUTHOR_MACRO
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_carry_bipod;
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_m4a1_m320 : rhs_weap_m4a1_m320
{
	scope = 1;
	AUTHOR_MACRO
};
class rhs_m4_m320 : rhs_weap_m4_m320
{
	AUTHOR_MACRO
	scope=1;
};