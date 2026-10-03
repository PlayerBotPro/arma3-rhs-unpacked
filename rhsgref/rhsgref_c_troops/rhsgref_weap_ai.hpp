// ChDKZ
class rhs_weap_ak103;
class rhs_weap_svds;

class rhsgref_weap_ak103_pso1m21 : rhs_weap_ak103
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhs_acc_pso1m21";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk";
		};
	};
};

class rhsgref_weap_ak103_pso1m2 : rhs_weap_ak103
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhs_acc_pso1m2";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk";
		};
	};
};


class rhsgref_weap_svds : rhs_weap_svds
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhs_acc_pso1m2";
		};
	};
};

// Nat. Paramilitary
class rhs_weap_savz58v_rail_black;
class rhs_weap_savz58v_ris_grip3;
class rhs_weap_akm_zenitco01_b33_grip1;

class rhsgref_weap_savz58v_black_rxo1 : rhs_weap_savz58v_rail_black
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_RX01_NoFilter";
		};
	};
};

class rhsgref_weap_savz58v_saboteur : rhs_weap_savz58v_ris_grip3
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_T1_low_fwd";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsgref_acc_zendl";
		};
		class LinkedItemsUnder
		{
			slot = "GripodSlot";
			item = "rhsusf_acc_tdstubby_blk";
		};
	};
};

class rhsgref_weap_akm_zenitco : rhs_weap_akm_zenitco01_b33_grip1
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtkakm";
		};
		class LinkedItemsUnder
		{
			slot = "GripodSlot";
			item = "rhs_acc_grip_rk6";
		};
	};
};
class rhsgref_weap_akm_zenitco_sd : rhs_weap_akm_zenitco01_b33_grip1
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_pbs1";
		};
		class LinkedItemsUnder
		{
			slot = "GripodSlot";
			item = "rhs_acc_grip_rk6";
		};
	};
};