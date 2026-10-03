params["_pos","_yield","_radius"];

_posx = _pos select 0;
_posy = _pos select 1;
_timefactor = 0.03*_yield^0.5;
_effectSize = 0.1*_yield^0.3;
_lifetime = 3*_timefactor;
for [{_agl=0},{_agl<360},{_agl=_agl+1}] do {
	_velx = sin(_agl)*400.0;
	_vely = cos(_agl)*400.0;
	_velz = 50;
	drop ["\A3\data_f\cl_basic","","Billboard",1,_lifetime,[_posx,_posy, -10],[_velx,_vely,_velz],1,1.25,1.0,0.0,[50*_effectSize,300*_effectSize,750*_effectSize,1500*_effectSize],[[1.0,1.0,1.0,0.0],[1.0,1.0,1.0,0.2],[1.0,1.0,1.0,0.1],[1.0,1.0,1.0,0.05],[1.0,1.0,1.0,0.025],[1.0,1.0,1.0,0.012],[1.0,1.0,1.0,0.0]],[0],0.0,2.0,"","",""];
};

[2] call BIS_fnc_earthquake;