private _g=(_this nearestObject "rhs_g_vog25p");
//systemChat format["time %1, grenade %2",time,_g];
if(local _g)then{

	_g setVelocity [velocity _g select 0, velocity _g select 1, 10.5];

	sleep 0.2;

	triggerAmmo _g;
};