// wait till 2nd truck is away
waitUntil {rhs_kraz_01 distance rhs_trainingZone_ai > 30};
{
	_x disableAI "AUTOCOMBAT";
	_x setCombatMode "BLUE";
	_x setBehaviour "CARELESS";
}foreach units group rhs_soldier1;
rhs_soldier1 doMove (rhs_zu23_01 getpos [0.5,getdir rhs_zu23_01 -180]);
waitUntil {rhs_soldier1 distance rhs_zu23_01 < 5};

_fakeAI = [rhs_soldier1,rhs_zu23_01] call rhs_fnc_towing_dragAI;
_fakeAI doMove (getpos rhs_trainingZone_ai);

waitUntil {rhs_soldier1 distance rhs_trainingZone_ai < 4};
deleteVehicle _fakeAI;
sleep 1;
[rhs_zu23_01,0] call rhs_fnc_zu23_pack;
sleep 2;
{
	_x disableAI "AUTOCOMBAT";
	_x setCombatMode "BLUE";
	_x setBehaviour "CARELESS";
}foreach units group rhs_soldier1;
rhs_soldier1 assignAsGunner rhs_zu23_01;
rhs_leader1 assignAsCommander rhs_zu23_01;
[rhs_leader1,rhs_soldier1] orderGetIn true;
sleep 4;


waitUntil {count (crew rhs_zu23_01) > 1};
systemChat "switch combat mode";
{
	_x doTarget rhs_drone_02;
	_x doWatch rhs_drone_02;
	_x doFire rhs_drone_02;
	_x setCombatMode "RED";
	_x setBehaviour "COMBAT";
}foreach [rhs_leader1,rhs_soldier1];