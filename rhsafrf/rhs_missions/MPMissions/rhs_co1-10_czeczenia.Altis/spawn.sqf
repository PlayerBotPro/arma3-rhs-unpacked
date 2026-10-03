_a = [
			"rhs_g_Soldier_F",
			"rhs_g_Soldier_lite_F",
			"rhs_g_Soldier_LAT_F",
			"rhs_g_Soldier_SL_F",
			"rhs_g_Soldier_TL_F",
			"rhs_g_Soldier_LAT_F",
			"rhs_g_Soldier_LAT_F",
			"rhs_g_Soldier_AR_F",
			"rhs_g_medic_F",
			"rhs_g_Soldier_LAT_F",
			"rhs_g_engineer_F",
			"rhs_g_Soldier_exp_F",
			"rhs_g_Soldier_GL_F",
			"rhs_g_Soldier_M_F",
			"rhs_g_Soldier_LAT_F",
			"rhs_g_Soldier_GL_F",
			"rhs_g_Soldier_GL_F",
			"rhs_g_Soldier_AA_F",
			"rhs_g_Soldier_LAT_F",
			"rhs_g_Soldier_AT_F"
];

_m=_this select 0;
_i=_this select 1;

while{_i>0}do{
	_i2=2+(floor(random(HARDKOR)));
	_g = creategroup resistance;
	_p=[_m] call Rnd_pos;
	while{_i2>0}do{
		_t=_a select (floor(random(count(_a))));
		_u = _g createUnit [_t,_p, [], 0, "FORM"];
		_i2=_i2-1;
	};
	[leader _g,_m,"spawned","SAFE","COLUMN"] execVM "scripts\upsmon.sqf";
	_i=_i-1;
};
