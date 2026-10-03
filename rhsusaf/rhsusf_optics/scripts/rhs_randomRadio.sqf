/*
random radio chatter script

hooked to gui

created by reyhard
*/

// Exit if profile setting is disabled
if ((profilenamespace getvariable ['rhs_vehicleRadioChatter',1]) == 0) exitWith {};

// Exit if mission has disabled the module
if ((missionNameSpace getvariable ['rhs_vehicleRadioChatter',1]) == 0) exitWith {};

private _u = (call rhs_fnc_findPlayer);
private _v = vehicle _u;

// Exit if module is disabled for this vehicle
if ((_v getvariable ['rhs_vehicleRadioChatter',1]) == 0) exitWith {};

private _t = _this select 0;
private _g = _this select 1;

while{_u in _v}
do{
	private _n = floor(random(_g))+1;
	//if(_n<=9)then{_n=format["0%1",_n]};

	private _u = (call rhsusf_fnc_findPlayer);
	if(isEngineOn _v)then{
		if(_u==player)then{
		//	_v vehicleRadio format["rhs_usa_land_rc_%1",_n];
			playSound [format["rhs_usa_%2_rc_%1",_n,_t],true];
		}else{
			//vehicleRadio doesn't work with remote controled units
			playSound [format["rhs_usa_%2_rc_%1",_n,_t],true];
		};
	};
	sleep (10+random(25));
};