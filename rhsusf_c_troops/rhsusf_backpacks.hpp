#define INVENTORY_CATEGORY backpacks

// - Eagle UCP / OCP

class B_AssaultPack_Base;

class rhsusf_assault_eagleaiii_ucp: B_AssaultPack_Base
{
	INVENTORY_PICTURE(rhsusf_assault_eagleaiii_ucp)
	dlc = "RHS_USAF";

	scope = 2;
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_infantry\gear\backpacks\rhsusf_eagleaIII";
	displayName = "Eagle A-III UCP";
	hiddenSelectionsTextures[] = {rhsusf\addons\rhsusf_infantry\gear\backpacks\data\eagleaiii_ucp_co.paa};
	maximumLoad = 240;
	mass = 35;
};

class rhsusf_assault_eagleaiii_ocp: rhsusf_assault_eagleaiii_ucp
{
	INVENTORY_PICTURE(rhsusf_assault_eagleaiii_ocp)
	AUTHOR_MACRO
	displayName = "Eagle A-III OEF-CP";
	hiddenSelectionsTextures[] = {rhsusf\addons\rhsusf_infantry\gear\backpacks\data\eagleaii_ocp_co.paa};
};

// - Eagle UCP / OCP variants

class rhsusf_assault_eagleaiii_ocp_engineer: rhsusf_assault_eagleaiii_ocp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III OEF-CP (Engineer)";
	maximumLoad = 160;
	mass = 20;
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};

class rhsusf_assault_eagleaiii_ucp_engineer: rhsusf_assault_eagleaiii_ucp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III UCP (Engineer)";
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};

class rhsusf_assault_eagleaiii_ocp_medic: rhsusf_assault_eagleaiii_ocp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III OEF-CP (Medic)";
	class TransportItems
	{
		item_xx(MediKit,1);
		item_xx(FirstAidKit,10);
	};
};

class rhsusf_assault_eagleaiii_ucp_medic: rhsusf_assault_eagleaiii_ucp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III UCP (Medic)";
	class TransportItems
	{
		item_xx(MediKit,1);
		item_xx(FirstAidKit,10);
	};
};

class rhsusf_assault_eagleaiii_ocp_demo : rhsusf_assault_eagleaiii_ocp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III OEF-CP (Demolitions)";
	class TransportItems
	{
		item_xx(rhsusf_m112x4_mag,1);
		item_xx(rhsusf_m112_mag,3);
	};
};

class rhsusf_assault_eagleaiii_ucp_demo : rhsusf_assault_eagleaiii_ucp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III UCP (Demolitions)";
	class TransportItems
	{
		item_xx(rhsusf_m112x4_mag,1);
		item_xx(rhsusf_m112_mag,3);
	};
};

class rhsusf_assault_eagleaiii_ocp_ar: rhsusf_assault_eagleaiii_ocp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III OEF-CP (AR)";

	class TransportItems
	{
		item_xx(rhsusf_100Rnd_556x45_soft_pouch,4);
		item_xx(rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote,1);
	};
};

class rhsusf_assault_eagleaiii_ucp_ar: rhsusf_assault_eagleaiii_ucp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III UCP (AR)";

	class TransportItems
	{
		item_xx(rhsusf_100Rnd_556x45_soft_pouch,4);
		item_xx(rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp,1);
	};
};

class rhsusf_assault_eagleaiii_ocp_mg: rhsusf_assault_eagleaiii_ocp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III OEF-CP (MG)";
	class TransportItems
	{
		item_xx(rhsusf_50Rnd_762x51,8);
	};
};

class rhsusf_assault_eagleaiii_ucp_mg: rhsusf_assault_eagleaiii_ucp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III UCP (MG)";
	class TransportItems
	{
		item_xx(rhsusf_50Rnd_762x51,8);
	};
};

class rhsusf_assault_eagleaiii_ocp_at: rhsusf_assault_eagleaiii_ocp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III OEF-CP (AT)";
	class TransportItems
	{
		item_xx(rhs_fgm148_magazine_AT,1);
	};
};

class rhsusf_assault_eagleaiii_ucp_at: rhsusf_assault_eagleaiii_ucp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III UCP (AT)";
		class TransportItems
	{
		item_xx(rhs_fgm148_magazine_AT,1);
	};
};

class rhsusf_assault_eagleaiii_ucp_maaws: rhsusf_assault_eagleaiii_ucp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III UCP (MAAWS)";
	class TransportItems
	{
		item_xx(rhs_mag_maaws_HEDP,2);
	};
};

class rhsusf_assault_eagleaiii_ocp_maaws: rhsusf_assault_eagleaiii_ocp
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III OCP (MAAWS)";
	class TransportItems
	{
		item_xx(rhs_mag_maaws_HEDP,2);
	};
};

// - Eagle Coyote

class rhsusf_assault_eagleaiii_coy: rhsusf_assault_eagleaiii_ucp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_assault_eagleaiii_coy)
	displayName = "Eagle A-III Coyote";
	hiddenSelectionsTextures[] = {rhsusf\addons\rhsusf_infantry\gear\backpacks\data\eagleaii_coy_co.paa};
};

// - Eagle Coyote AI variants

class rhsusf_assault_eagleaiii_coy_engineer: rhsusf_assault_eagleaiii_coy
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III Coyote (Engineer)";
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};

class rhsusf_assault_eagleaiii_coy_demo : rhsusf_assault_eagleaiii_coy
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III Coyote (Demolitions)";
	class TransportItems
	{
		item_xx(rhsusf_m112x4_mag,1);
		item_xx(rhsusf_m112_mag,2);
		item_xx(ClaymoreDirectionalMine_Remote_Mag,1);
	};
};

class rhsusf_assault_eagleaiii_coy_eod : rhsusf_assault_eagleaiii_coy
{
	scope = 1;
	AUTHOR_MACRO
	class TransportItems
	{
		item_xx(rhsusf_m112x4_mag,1);
		item_xx(rhsusf_m112_mag,2);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};

class rhsusf_assault_eagleaiii_coy_m27: rhsusf_assault_eagleaiii_coy
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III Coyote (AR M27)";
	class TransportItems
	{
		item_xx(rhs_mag_30Rnd_556x45_M855_Stanag,10);
	};
};

class rhsusf_assault_eagleaiii_coy_ar: rhsusf_assault_eagleaiii_coy
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III Coyote (AR M249)";
	class TransportItems
	{
		item_xx(rhsusf_100Rnd_556x45_M855_soft_pouch,4);
	};
};

class rhsusf_assault_eagleaiii_coy_mg: rhsusf_assault_eagleaiii_coy
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III Coyote (MG)";
	class TransportItems
	{
		item_xx(rhsusf_50Rnd_762x51,8);
	};
};

class rhsusf_assault_eagleaiii_coy_assaultman: rhsusf_assault_eagleaiii_coy
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III Coyote (Assaultman)";
	class TransportItems
	{
		item_xx(rhs_mag_smaw_HEDP,1);
		item_xx(rhsusf_m112_mag,1);
	};
};

class rhsusf_assault_eagleaiii_coy_at: rhsusf_assault_eagleaiii_coy
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III Coyote (AT)";
	class TransportItems
	{
		item_xx(rhs_fgm148_magazine_AT,1);
	};
};

class rhsusf_assault_eagleaiii_coy_aa: rhsusf_assault_eagleaiii_coy
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III Coyote (AA)";
	class TransportItems
	{
		item_xx(rhs_fim92_mag,1);
	};
};

// - - Assault pack

class B_AssaultPack_rgr;

class rhsusf_falconii : B_AssaultPack_rgr
{
	INVENTORY_PICTURE(rhsusf_falconii)
	dlc = "RHS_USAF";

	author="$STR_A3_Bohemia_Interactive";
	scope = 2;
	displayName = "Falcon-II RGR";
	hiddenSelectionsTextures[] = {rhsusf\addons\rhsusf_infantry\gear\backpacks\data\falconii_rgr_co.paa};
};

class rhsusf_falconii_coy : B_AssaultPack_rgr
{
	INVENTORY_PICTURE(rhsusf_falconii_coy)
	dlc = "RHS_USAF";

	author="$STR_A3_Bohemia_Interactive";
	scope = 2;
	displayName = "Falcon-II Coyote";
	hiddenSelectionsTextures[] = {rhsusf\addons\rhsusf_infantry\gear\backpacks\data\falconii_coy_co.paa};
};

class rhsusf_falconii_mc : B_AssaultPack_rgr
{
	INVENTORY_PICTURE(rhsusf_falconii_mc)
	dlc = "RHS_USAF";

	author="$STR_A3_Bohemia_Interactive";
	scope = 2;
	displayName = "Falcon-II MC";
	hiddenSelectionsTextures[] = {rhsusf\addons\rhsusf_infantry\gear\backpacks\data\falconii_mc_co.paa};
};

// Backpack Grenadier
class rhsusf_falconii_gr: rhsusf_falconii
{
	scope = 1;
	class TransportItems
	{
		item_xx(rhs_mag_M433_HEDP,10);
		item_xx(rhs_mag_M583A1_white,5);
	};
};

class rhsusf_falconii_coy_gr: rhsusf_falconii_coy
{
	scope = 1;
	class TransportItems
	{
		item_xx(rhs_mag_M433_HEDP,10);
		item_xx(rhs_mag_M583A1_white,5);
	};
};

class rhsusf_falconii_gr_m32 : rhsusf_falconii_coy
{
	scope = 1;

	class TransportItems
	{
		item_xx(rhsusf_mag_6Rnd_M433_HEDP,6);
		item_xx(rhsusf_mag_6Rnd_M714_white,2);
	};
};

// breacher backpack
class rhsusf_falconii_breach: rhsusf_falconii
{
	scope = 1;
	class TransportItems
	{
		item_xx(SatchelCharge_Remote_Mag,1);
	};
};

class rhsusf_falconii_recon: rhsusf_falconii_coy
{
	scope = 1;

	class TransportItems
	{
		item_xx(rhs_mag_M433_HEDP,6);
		item_xx(rhs_mag_M583A1_white,5);
		item_xx(rhs_mag_mk84,2);
		item_xx(rhs_mag_m18_red,2);
		item_xx(rhs_mag_m18_green,2);
		item_xx(rhs_mag_m18_purple,2);
		item_xx(rhs_mag_m18_yellow,2);
		item_xx(FirstAidKit,2);
	};
};

//

class B_Carryall_cbr;

class rhsusf_pack_slackman_m240: B_Carryall_cbr
{
	scope = 1;

	class TransportItems
	{
		item_xx(rhsusf_50Rnd_762x51,6);
		// sorry, to heavy
		/*
		item_xx(rhs_mag_30Rnd_556x45_M855_Stanag,4);
		item_xx(ClaymoreDirectionalMine_Remote_Mag,2);
		item_xx(rhs_mag_mk84,4);
		item_xx(Chemlight_red,2);
		item_xx(Chemlight_green,2);
		item_xx(rhs_mag_m18_red,2);
		item_xx(rhs_mag_m18_green,2);
		item_xx(rhs_mag_m18_purple,2);
		item_xx(rhs_mag_m18_yellow,2);
		item_xx(FirstAidKit,2);
		*/
	};
};

class rhsusf_pack_slackman_m249: B_Carryall_cbr
{
	scope = 1;

	class TransportItems
	{
		item_xx(rhsusf_100Rnd_556x45_M855_soft_pouch,4);
		item_xx(rhs_mag_30Rnd_556x45_M855_Stanag,4);
		item_xx(ClaymoreDirectionalMine_Remote_Mag,2);
		item_xx(rhs_mag_mk84,4);
		item_xx(Chemlight_red,2);
		item_xx(Chemlight_green,2);
		item_xx(rhs_mag_m18_red,2);
		item_xx(rhs_mag_m18_green,2);
		item_xx(rhs_mag_m18_purple,2);
		item_xx(rhs_mag_m18_yellow,2);
		item_xx(FirstAidKit,2);
	};
};
class B_Parachute;
class Steerable_Parachute_F;
class rhsusf_eject_Parachute: Steerable_Parachute_F
{
	scope = 1;
	scopeArsenal = 0;
	side = 0;
	vehicleClass = "Air";

	maxgravity=-10;
	maxliftduration=4;
	maxliftthrust=-40;
	maxrotationx=0.1;
	maxrotationz=0.4;
	maxsensitivityhorizontal=0.05;
	maxsensitivityvertical=0.01;
	mingravity=-2;
	minliftduration=4;
	minliftthrust=-40;
	minrotationx=-0.1;
	minrotationz=-0.4;
	normalgravity=-5;
	thrustaccel=0.001;
	thrustdeccel=0.001;
	thrustnormal=0.001;
	turnforcescale=0.0001;

	displayName="Static Parachute";
	driverAction="RHS_StaticPara_Pilot";
	model="\rhsusf\addons\rhsusf_a2port_air\parachute\para.p3d";
};
class rhsusf_eject_Parachute_backpack: B_Parachute
{
	scope=2;
	scopeArsenal = 2;
	displayName="Static Parachute Bag";
	ParachuteClass="rhsusf_eject_Parachute";
	maximumLoad=0;
	mass=130;
};