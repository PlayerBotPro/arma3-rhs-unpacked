/*
	rhs_fnc_stryker_m1134_mast
*/
params ["_vehicle", "_fold"];
private _player = call rhs_fnc_findPlayer;

if(_fold)then{
	private _state = isDamageAllowed _vehicle;
	_vehicle allowDamage true;
	[_vehicle,["hitTurret",1]] remoteExecCall ["setHitPointDamage",_vehicle];
	[_vehicle,["hitGun",1]] remoteExecCall ["setHitPointDamage",_vehicle];
	_vehicle allowDamage _state;
	_vehicle animateSource ["Mast_Folded",1];
	_vehicle animateSource ["mainTurret_override",-(_vehicle animationSourcePhase "MainTurret")];
	_vehicle spawn
	{
		sleep 2;
		_this animateSource ["mainGun_override",-(_this animationSourcePhase "MainGun"),0.3];
	};
}else{

	_vehicle animateSource ["Mast_Folded",0];
	_vehicle spawn
	{
		sleep 2;
		private _state = isDamageAllowed _this;
		_this allowDamage true;
		[_this,["hitTurret",0]] remoteExecCall ["setHitPointDamage",_this];
		[_this,["hitGun",0]] remoteExecCall ["setHitPointDamage",_this];	
		_this animateSource ["mainTurret_override",0];
		_this animateSource ["mainGun_override",0];
		_this allowDamage _state;
	};
};