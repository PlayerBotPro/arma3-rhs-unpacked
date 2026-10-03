/* MACROS DEFINITION */

#define Standard_Equipment ItemMap,ItemCompass,ItemWatch,ItemRadio

#define MacroUNInfCDF dlc = "RHS_GREF";\
			scope = 2;\
			side=2;\
			faction="rhsgref_faction_un";\
			vehicleClass = "rhs_vehclass_infantry";\
			editorSubcategory = "rhsgref_EdSubcat_infantry";\
			author=$STR_RHS_AUTHOR_FULL;

/* CDF TROOPS CLASSNAMES */

//- Riflemen

// Rifleman (AK74 wood)
class rhsgref_cdf_un_rifleman: rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_un_rifleman)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_rifleman_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_rifleman_khaki",Standard_Equipment};
};

// Rifleman Light(AK74 wood)
class rhsgref_cdf_un_rifleman_lite: rhsgref_cdf_reg_rifleman_lite
{
	EdPrev(rhsgref_cdf_un_rifleman_lite)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_un_beret","rhs_6b5_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_un_beret","rhs_6b5_khaki",Standard_Equipment};
};

// Grenadier (AK74 wood)
class rhsgref_cdf_un_grenadier: rhsgref_cdf_reg_grenadier
{
	EdPrev(rhsgref_cdf_un_grenadier)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_rifleman_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_rifleman_khaki",Standard_Equipment};
};

// Automatic Rifleman (RPK)
class rhsgref_cdf_un_arifleman_rpk : rhsgref_cdf_reg_arifleman_rpk
{
	EdPrev(rhsgref_cdf_un_arifleman_rpk)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_rifleman_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_rifleman_khaki",Standard_Equipment};
};

// Machine Gunner (PKM)
class rhsgref_cdf_un_machinegunner : rhsgref_cdf_reg_machinegunner
{
	EdPrev(rhsgref_cdf_un_machinegunner)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_khaki",Standard_Equipment};
};

//- Leadership

// General
class rhsgref_cdf_un_general: rhsgref_cdf_reg_general
{
	EdPrev(rhsgref_cdf_un_general)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_un_beret","rhs_vest_pistol_holster",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_un_beret","rhs_vest_pistol_holster",Standard_Equipment};
};

// Officer
class rhsgref_cdf_un_officer: rhsgref_cdf_reg_officer
{
	EdPrev(rhsgref_cdf_un_officer)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_officer_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_officer_khaki",Standard_Equipment};
};

// Sergeant (AKS)
class rhsgref_cdf_un_squadleader: rhsgref_cdf_reg_squadleader
{
	EdPrev(rhsgref_cdf_un_squadleader)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_officer_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_officer_khaki",Standard_Equipment};
};

//- Specialists

// Grenadier AT (RPG7)
class rhsgref_cdf_un_grenadier_rpg: rhsgref_cdf_reg_grenadier_rpg
{
	EdPrev(rhsgref_cdf_un_grenadier_rpg)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_khaki",Standard_Equipment};
};


// Medic (AKSU)
class rhsgref_cdf_un_medic: rhsgref_cdf_reg_medic
{
	EdPrev(rhsgref_cdf_un_medic)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_medic_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_medic_khaki",Standard_Equipment};
};

// Engineer
class rhsgref_cdf_un_engineer: rhsgref_cdf_reg_engineer
{
	EdPrev(rhsgref_cdf_un_engineer)
	MacroUNInfCDF

	linkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_rifleman_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_un","rhs_6b5_rifleman_khaki",Standard_Equipment};
};

class rhsgref_cdf_un_crew: rhsgref_cdf_reg_crew
{
	EdPrev(rhsgref_cdf_un_crew)
	MacroUNInfCDF

	linkedItems[] = {"rhs_tsh4_ess","rhs_vest_pistol_holster",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_vest_pistol_holster",Standard_Equipment};
};

class rhsgref_cdf_un_pilot: rhsgref_cdf_air_pilot
{
	EdPrev(rhsgref_cdf_un_pilot)
	MacroUNInfCDF

	linkedItems[] = {"rhs_zsh7a_mike","rhs_vest_commander",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_zsh7a_mike","rhs_vest_commander",Standard_Equipment};
};