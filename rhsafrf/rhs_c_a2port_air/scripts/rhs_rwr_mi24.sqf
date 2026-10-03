params["_u","","_f"];

if(driver _u != (call rhs_fnc_findPlayer))exitWith{};

private _o=[];
//modifier of signal strenght
private _s=1;
_u animate ["rwr_lights_lock",1];
private _h=[];

if(_f isKindOf "man")then{_o pushback "rwr_lights_lock_aa";_s=1;};
if(_f isKindOf "air")then{_o pushback "rwr_lights_lock_air";_s=1.8;};
if(_f isKindOf "vehicle")then{_o pushback "rwr_lights_lock_sam";_s=1.5;};

_d = _u getRelDir _f;
if( (_d>0 AND _d < 5) or (_d>355 AND _d <360) )then{_o pushback "rwr_lights_front";_h pushback "12";};
if( (_d>5 AND _d < 20)  )then{_o pushback "rwr_lights_10R";_h pushback "12";};
if( (_d>20 AND _d < 40)  )then{_o pushback "rwr_lights_30R";_h pushback "3";};
if( (_d>40 AND _d < 75)  )then{_o pushback "rwr_lights_50R";_h pushback "3";};
if( (_d>75 AND _d < 110)  )then{_o pushback "rwr_lights_90R";_h pushback "3";};
if( (_d>110 AND _d < 180)  )then{_o pushback "rwr_lights_R";_h pushback "6";};
if( (_d>180 AND _d < 260)  )then{_o pushback "rwr_lights_L";_h pushback "6";};
if( (_d>260 AND _d < 290)  )then{_o pushback "rwr_lights_90L";_h pushback "9";};
if( (_d>290 AND _d < 310)  )then{_o pushback "rwr_lights_50L";_h pushback "9";};
if( (_d>310 AND _d < 340)  )then{_o pushback "rwr_lights_30L";_h pushback "12";};
if( (_d>340 AND _d < 355)  )then{_o pushback "rwr_lights_10L";_h pushback "12";};

if((getPosATL _u select 2) > (getPosATL _f select 2))then{_o pushback "rwr_lights_lock_down";_h pushback "L";}else{_o pushback "rwr_lights_lock_up";_h pushback "H";};

_k = 100000/((_u distance _f)/_s);
if(_k > 10)then{_o pushback "rwr_lights_signal_1"};
if(_k > 100)then{_o pushback "rwr_lights_signal_2"};
if(_k > 200)then{_o pushback "rwr_lights_signal_3"};
if(_k > 300)then{_o pushback "rwr_lights_signal_4"};
if(_k > 400)then{_o pushback "rwr_lights_signal_5"};
if(_k > 500)then{_o pushback "rwr_lights_signal_6"};
if(_k > 600)then{_o pushback "rwr_lights_signal_7"};
if(_k > 700)then{_o pushback "rwr_lights_signal_8"};
if(_k > 800)then{_o pushback "rwr_lights_signal_9"};


//player globalChat format["nana %1",_k];

{_u animate [_x,1]}foreach _o;
playsound [format["rhs_Missile%1OClock%2",_h select 0, _h select 1],true];

//_u setVariable ["rwr_timeout",time];
//_t=time+6;
sleep 8;
{_u animate [_x,0]}foreach _o;
_u animate ["rwr_lights_lock",0];