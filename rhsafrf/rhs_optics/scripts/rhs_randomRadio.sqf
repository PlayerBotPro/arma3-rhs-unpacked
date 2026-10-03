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
//_k = radioChannelCreate [[0.96, 0.34, 0.13, 0.8], "Radio chatter", "B:", [_u]];

// Exit if module is disabled for this vehicle
if ((_v getvariable ['rhs_vehicleRadioChatter',1]) == 0) exitWith {};

while{_u in _v}
do{

	private _u = (call rhs_fnc_findPlayer);

	private _n = floor(random(35))+1;
	if(_n<=9)then{_n=format["0%1",_n]};

	if(isEngineOn _v)then{
		if(_u==player)then{
			//_v vehicleRadio format["rhs_rus_land_rc_%1",_n];
			//_u customRadio [_k,format["rhs_rus_land_rc_%1",_n]];
			playSound [format["rhs_rus_land_rc_%1",_n],true];
		}else{
			//vehicleRadio doesn't work with remote controled units
			playSound [format["rhs_rus_land_rc_%1",_n],true];
		};
	};
	sleep (10+random(25));
};
//_k radioChannelRemove [_u];