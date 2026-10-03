/*
	a: reyhard
	fold/unfold m119 arty
*/

params ["_v","_p"];

if(_p isEqualTo 0)then{
	_v animateDoor ["fold_arty",0];
	_v animate ["Fold_MainGun_counter_rotate",0];
	_v animate ["Fold_plate_rotate2",0];
	[_v,false] remoteExecCall ["lock", _v];
}else{
	_v animateDoor ["fold_arty",1];
	_v animate ["Fold_MainGun_counter_rotate",(_v animationPhase "MainGun")];
	_v animate ["Fold_plate_rotate2",(_v animationPhase "MainTurret")];
	[_v,true] remoteExecCall ["lock", _v];
};