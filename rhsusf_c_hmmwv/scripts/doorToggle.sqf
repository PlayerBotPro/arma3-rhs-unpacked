/*
	M1025 door toggle
	input:
	_v - vehicle

	a: reyhard
*/
private _u = (call rhsusf_fnc_findPlayer);

if(_u getVariable ["rhs_hmmwv_door",true])then{
	hint "Door will be kept opened after dismount";
	_u setVariable ["rhs_hmmwv_door",false];
}else{
	hint "Door will be automaticly closed after dismount";
	_u setVariable ["rhs_hmmwv_door",true];
};