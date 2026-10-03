params["_u","","_f"];

if ((profilenamespace getvariable ['rhs_voiceAnnouncer',1])==0) exitWith {};

if(driver _u != (call rhs_fnc_findPlayer))exitWith{};

_u animateSource ["w_launch",1];
private _h=[];

_d = _u getRelDir _f;
if( (_d>0 AND _d < 5) or (_d>355 AND _d <360) )then{_h pushback "12";};
if( (_d>5 AND _d < 20)  )then{_h pushback "12";};
if( (_d>20 AND _d < 40)  )then{_h pushback "3";};
if( (_d>40 AND _d < 75)  )then{_h pushback "3";};
if( (_d>75 AND _d < 110)  )then{_h pushback "3";};
if( (_d>110 AND _d < 180)  )then{_h pushback "6";};
if( (_d>180 AND _d < 260)  )then{_h pushback "6";};
if( (_d>260 AND _d < 290)  )then{_h pushback "9";};
if( (_d>290 AND _d < 310)  )then{_h pushback "9";};
if( (_d>310 AND _d < 340)  )then{_h pushback "12";};
if( (_d>340 AND _d < 355)  )then{_h pushback "12";};

if((getPosATL _u select 2) > (getPosATL _f select 2))then{_h pushback "L";}else{_h pushback "H";};

playsound [format["rhs_Missile%1OClock%2",_h select 0, _h select 1],true];

sleep 8;
_u animateSource ["w_launch",0];