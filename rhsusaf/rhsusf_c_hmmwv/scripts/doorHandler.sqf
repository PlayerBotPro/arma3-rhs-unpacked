/*
	M1025 door handler, keeps door opened after geting out if specified so
	input : geout EH

	a: reyhard
*/
params["_v","","_u","_t"];

if(_u getVariable ["rhs_hmmwv_door",true])exitWith{};

if(_t isEqualTo [])then{
//driver
	_v animateDoor ['Door_LF',1,true];
}else{
//cargo
	private _a = ['Door_RB','Door_RF','Door_RB','Door_LB'];
	//gunner door is removed for unarmed version
	if(not(_v isKindOf 'rhsusf_m1025_w_m2'))then{_a deleteAt 0};
	_a =_a select (_t select 0 );

	_v animateDoor [_a,1,true];
};