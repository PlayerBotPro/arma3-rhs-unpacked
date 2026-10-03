// - - - US ARMY AI weapons - - -


// US Army M4
class rhs_m4_compm4 : rhs_weap_m4
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_compm4";
		};
	};
};


class rhs_m4_acog : rhs_weap_m4
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG";
		};
	};
};

class rhs_m4_grip_compm4 : rhs_weap_m4_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_compm4";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

class rhs_m4_m203_compm4 : rhs_weap_m4_m203
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_compm4";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side";
		};
	};
};

// US Army M4A1
class rhs_m4a1_compm4 : rhs_weap_m4a1
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_compm4";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_top";
		};
	};
};

class rhs_m4a1_grip_compm4 : rhs_weap_m4a1_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_compm4";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_top";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};


class rhs_m4a1_acog : rhs_weap_m4a1
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_top";
		};
	};
};


class rhs_m4a1_acog2 : rhs_weap_m4a1
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_top";
		};
	};
};

class rhs_m4a1_acog3 : rhs_weap_m4a1
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG3";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_top";
		};
	};
};

class rhs_m4a1_grip_acog : rhs_weap_m4a1_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_top";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

class rhs_m4a1_grip_acog2 : rhs_weap_m4a1_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

// US Army M4A1 (M203)
class rhs_m4a1_m203s_ACOG : rhs_weap_m4a1_m203
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side";
		};
	};
};

// US Army M4A1 (M320)
class rhs_m4a1_m320_acog : rhs_m4a1_m320
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side";
		};
	};
};

//US Army M16A4
class rhs_weap_m16a4_grip_acog : rhs_weap_m16a4_grip2
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG3";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_top";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

// US Army M240
class rhs_weap_m240b_elcan : rhs_weap_m240B_CAP
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ELCAN";
		};
	};
};

// US Army M249
class rhs_weap_m249_pip_elcan : rhs_weap_m249_pip_S
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ELCAN_ard";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_saw_bipod";
		};
	};
};

class rhs_weap_m249_light_S_elcan : rhs_weap_m249_light_S
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ELCAN_ard";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_grip4_bipod";
		};
	};
};

class rhs_weap_m249_light_L_elcan : rhs_weap_m249_light_L
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ELCAN_ard";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_grip4_bipod";
		};
	};
};

// US Army M2010
class rhs_weap_XM2010_d_leu : rhs_weap_XM2010_d
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4_2";
		};

		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};

class rhs_weap_XM2010_wd_leu : rhs_weap_XM2010_wd
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4_2";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};


// US Army M14 EBR

class rhs_weap_m14ebrri_leu : rhs_weap_m14ebrri
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};

// US Army M14

class rhs_weap_m14_bipod_M8541: rhs_weap_m14_rail
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_M8541_low";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_m14_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};

// US Army M107

class rhs_weap_M107_leu : rhs_weap_M107
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4_2";
		};
	};
};

class rhs_weap_M107_d_leu : rhs_weap_M107_d
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4_2";
		};
	};
};

class rhs_weap_M107_w_leu : rhs_weap_M107_w
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4_2";
		};
	};
};

// US Army M24

class rhs_weap_m24sws_leu : rhs_weap_m24sws
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_swivel";
			slot = "UnderBarrelSlot";
		};
	};
};

class rhs_weap_m24sws_d_leu : rhs_weap_m24sws_d
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4_d";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_swivel";
			slot = "UnderBarrelSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "rhsusf_acc_m24_muzzlehider_d";
			slot = "MuzzleSlot";
		};
	};
};

class rhs_weap_m24sws_wd_leu : rhs_weap_m24sws_wd
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4_wd";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_swivel";
			slot = "UnderBarrelSlot";
		};
	};
};

class rhs_weap_m24sws_blk_leu : rhs_weap_m24sws_blk
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_swivel";
			slot = "UnderBarrelSlot";
		};
	};
};

// - - - USMC AI weapons - - -

// USMC M16A4

class rhs_weap_m16a4_acog_usmc : rhs_weap_m16a4_carryhandle
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
	};
};

class rhs_weap_m16a4_m203_acog_usmc : rhs_weap_m16a4_carryhandle_M203
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
	};
};

class rhs_weap_m16a4_grip_acog_usmc : rhs_weap_m16a4_carryhandle_grip2
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

class rhs_weap_m16a4_grip_acog2_usmc : rhs_weap_m16a4_carryhandle_grip2
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

// USMC M4
class rhs_m4_acog_usmc : rhs_weap_m4_carryhandle
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a_top";
		};
	};
};

class rhs_m4_acog2_usmc : rhs_weap_m4_carryhandle
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a_top";
		};
	};
};

class rhs_m4_grip_acog_usmc : rhs_weap_m4_carryhandle_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

class rhs_m4_grip_acog3_usmc : rhs_weap_m4_carryhandle_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG3_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

class rhs_m4_m203_acog_usmc : rhs_weap_m4_carryhandle_m203 //needs carryhandle variant without Matech BUIS
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
	};
};

class rhs_m4_m203s_acog_usmc : rhs_weap_m4_carryhandle_m203S //needs carryhandle variant without Matech BUIS
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
	};
};

// USMC M4A1

class rhs_m4a1_eotech : rhs_weap_m4a1
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_eotech_552";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_top";
		};
	};
};

class rhs_m4a1_acog_usmc : rhs_weap_m4a1
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a_top";
		};
	};
};


class rhs_m4a1_acog2_usmc : rhs_weap_m4a1
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a_top";
		};
	};
};


class rhs_m4a1_acog3_usmc : rhs_weap_m4a1
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG3_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a_top";
		};
	};
};

class rhs_m4a1_acog2_usmc_sup : rhs_weap_m4a1
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a_top";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_nt4_black";
		};
	};
};

class rhs_m4a1_grip_eotech : rhs_weap_m4a1_carryhandle_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_eotech_552";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a_top";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

class rhs_m4a1_grip_acog_usmc : rhs_weap_m4a1_carryhandle_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

class rhs_m4a1_grip_acog2_usmc_sup : rhs_weap_m4a1_carryhandle_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_nt4_black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

class rhs_m4a1_grip_acog2_usmc_sup_tan : rhs_weap_m4a1_carryhandle_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG_d";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_nt4_tan";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

class rhs_m4a1_grip_acog3_usmc_sup : rhs_weap_m4a1_carryhandle_grip3
{
	class LinkedItems: LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG3_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a_light";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_nt4_black";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip";
		};
	};
};

class rhs_m4a1_m203_acog3_usmc_sup : rhs_weap_m4a1_m203
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG3_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_nt4_black";
		};
	};
};

// USMC M27

class rhs_weap_m27iar_bipod_acog_usmc : rhs_weap_m27iar_grip
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};

class rhs_weap_m27iar_bipod_acog_usmc_sup : rhs_weap_m27iar_grip
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG3_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_nt4_black";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};

class rhs_weap_m27iar_bipod_acog_usmc_sup_tan : rhs_weap_m27iar
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG3_USMC";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq16a";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_nt4_tan";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};

// USMC M14/M39

class rhs_weap_m39 : rhs_weap_m14ebrri // placeholder until we get the M39 model
{
	displayName = "M39 EMR";

	dexterity = 1.50;

	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_LEUPOLDMK4";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};

// USMC M240B

class rhs_weap_m240b_usmc : rhs_weap_m240B_CAP
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_MDO";
		};
	};
};

// USMC M249

class rhs_weap_m249_pip_usmc : rhs_weap_m249_pip_L
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2_USMC";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip_saw_bipod";
		};
	};
};

// US Army M249
class rhs_weap_m249_para_usmc : rhs_weap_m249_pip_S_para
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG2_USMC";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_kac_grip_saw_bipod";
		};
	};
};

// SR-25 / M110

class rhs_weap_sr25_usmc : rhs_weap_sr25 //
	{

		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_premier";
			};

			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};
		};
	};

class rhs_weap_sr25_sup_usmc : rhs_weap_sr25 //
	{

		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_premier";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_SR25S";
			};

			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};
		};
	};

// M40A5

class rhs_weap_m40_wd_usmc : rhs_weap_m40a5_wd //
	{

		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_M8541_low_wd";
			};

			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_swivel";
				slot = "UnderBarrelSlot";
			};
		};
	};

class rhs_weap_m40_d_usmc : rhs_weap_m40a5_d //
	{

		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_M8541_low_d";
			};

			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_swivel";
				slot = "UnderBarrelSlot";
			};
		};
	};


// M32
class rhs_weap_m32_usmc : rhs_weap_m32
{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_M2A1";
			};
		};
	};

// SMAW
class rhs_weap_smaw_optic: rhs_weap_smaw
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_weap_optic_smaw";
			};
		};
	};

class rhs_weap_smaw_gr_optic: rhs_weap_smaw_green
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhs_weap_optic_smaw";
		};
	};
};

class rhs_weap_maaws_optic: rhs_weap_maaws
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_optic_maaws";
			};
		};
	};

// USMC M107

class rhs_weap_M107_premier : rhs_weap_M107
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_premier";
		};
	};
};

class rhs_weap_M107_d_premier : rhs_weap_M107_d
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_premier";
		};
	};
};

class rhs_weap_M107_w_premier : rhs_weap_M107_w
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_premier";
		};
	};
};

// - - - US SOCOM AI weapons - - -

//- SOCOM M4A1
class rhs_m4a1_grip_eotech_soc : rhs_weap_m4a1_mstock_grip3
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_eotech_xps3";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_top";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_rvg_blk";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_SF3P556";
		};
	};
};

//- SOCOM Mk18
class rhs_weap_mk18_eotech : rhs_weap_mk18_KAC
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_eotech_xps3";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15";
		};
	};
};

class rhs_weap_mk18_eotech_sup : rhs_weap_mk18_KAC
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_eotech_xps3";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_nt4_black";
		};
	};
};

class rhs_weap_mk18_SU230 : rhs_weap_mk18_KAC
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_su230_mrds_c";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15";
		};
	};
};

//- SOCOM M4A1 SOPMOD Block II

class rhs_weap_m4a1_blockII_KAC_SU230 : rhs_weap_m4a1_blockII_KAC
	{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_su230";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15";
		};
	};
};

class rhs_weap_m4a1_blockII_M203_SU230 : rhs_weap_m4a1_blockII_M203
	{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_su230_mrds_c";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side";
		};
	};
};

class rhs_weap_m4a1_blockII_KAC_SU230_sup : rhs_weap_m4a1_blockII_KAC
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_su230_mrds_c";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_nt4_black";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};

//- SOCOM Mk17
class rhs_weap_mk17_CQC_SU230A_marsoc : rhs_weap_mk17_CQC
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_su230a_c";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side";
		};
		class LinkedItemsUnder
		{
			slot = "GripodSlot";
			item = "rhsusf_acc_tdstubby_tan";
		};
	};
};

class rhs_weap_mk17_CQC_SU230A_sup_marsoc : rhs_weap_mk17_CQC
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_su230a_mrds_c";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_wmx_sc";
		};
		class LinkedItemsUnder
		{
			slot = "GripodSlot";
			item = "rhsusf_acc_tdstubby_tan";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_aac_scarh_silencer";
		};
	};
};

class rhs_weap_mk17_CQC_G33_sup_marsoc : rhs_weap_mk17_CQC
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_g33_xps3_tan";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15_wmx_sc";
		};
		class LinkedItemsUnder
		{
			slot = "GripodSlot";
			item = "rhsusf_acc_kac_grip";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_aac_scarh_silencer";
		};
	};
};

class rhs_weap_mk17_LB_DMR_marsoc : rhs_weap_mk17_LB
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_M8541_mrds";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_harris_bipod";
		};
	};
};

// SOCOM SR25

class rhs_weap_sr25_sup_marsoc : rhs_weap_sr25_ec //
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsusf_acc_premier";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_aac_762sdn6_silencer";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};