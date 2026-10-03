/*
	rhs_fnc_stryker_m1127_fireSmoke
	a: reyhard
*/
params ["_vehicle", "_launcher","","","_ammo","_mag","","_gunner"];

for "_i" from 0 to 3 do
{
	{
		if((_vehicle animationSourcePhase format["%1_active",_x]) isEqualTo 1)then{[_vehicle,_x,[0]] call bis_fnc_fire;sleep 0.1;};
		
		// Update ammo indicator
		private _ammoCount = 0;
		{
			_ammoCount = _ammoCount + (_vehicle ammo _x);
		}foreach ["rhsusf_weap_M6_L1","rhsusf_weap_M6_L2","rhsusf_weap_M6_L3","rhsusf_weap_M6_R1","rhsusf_weap_M6_R2","rhsusf_weap_M6_R3"];
		_gunner setAmmo [_launcher, _ammoCount];
	}foreach ["rhsusf_weap_M6_L1","rhsusf_weap_M6_L2","rhsusf_weap_M6_L3","rhsusf_weap_M6_R1","rhsusf_weap_M6_R2","rhsusf_weap_M6_R3"];
};