/*
	duke handling

	i: fired EH input

	a: reyhard
*/

params ["_u","","","","_a","","","_g"];

private _path = [0,0];
if(_g isEqualTo driver _u)then{_path = [-1]};

if(_a == "rhsusf_ammo_duke")then{
	if(_u getVariable ["RHS_DUKE_OP",false])then{
		//turn off
		if(local _g)then
		{
			hint "DUKE is now deactivated";
			[_u,0] spawn rhs_fnc_duke_jammer;
		};
		_u addMagazineTurret ["rhsusf_mag_duke",_path];
		_u removeWeaponTurret ["rhsusf_weap_duke_on",_path];
		_u addWeaponTurret ["rhsusf_weap_duke",_path];
		_u selectWeaponTurret ["rhsusf_weap_duke",_path];
	}else{
		//turn on
		if(local _g)then
		{
			hint "DUKE is now activated";
			[_u,1] spawn rhs_fnc_duke_jammer;
		};
		_u addMagazineTurret ["rhsusf_mag_duke",_path];
		_u removeWeaponTurret ["rhsusf_weap_duke",_path];
		_u addWeaponTurret ["rhsusf_weap_duke_on",_path];
		_u selectWeaponTurret ["rhsusf_weap_duke_on",_path];
	};
};