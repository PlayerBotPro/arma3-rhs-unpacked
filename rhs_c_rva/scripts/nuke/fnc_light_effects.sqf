params["_pos","_yield","_radius"];

_timefactor = 0.03*_yield^0.5;
_effectSize = 0.03*_yield^0.5;
_xpos = _pos select 0;
_ypos = _pos select 1;

drop ["\A3\data_f\kouleSvetlo", "", "Billboard", 1, 5, [_xpos, _ypos, 0], [0, 0, 0],1, 1.3, 1, 0, [800], [[1, 0.7, 0.4, 1], [1, 0.6, 0.3, 0]], [0], 0, 0, "", "", ""];

_size = 500*_effectSize;
_trs = 1.0;
_lights = [];

for "_cnt" from 0 to 50 do {
	_dist = 1 + random 80;
	_agl = random 360;
	_aglz = random 90;
	_upposx = _xpos + _dist * (sin _agl) * cos _aglz;
	_upposy = _ypos + _dist * (cos _agl) * cos _aglz;
	_upposz = abs ((sin _aglz) * _dist);
	drop ["\A3\data_f\kouleSvetlo", "", "Billboard", 1, 5+random(10),[_upposx, _upposy, _upposz], [0, 0, 0], 1, 1.3, 1, 0,[_size], [[1, 0.7, 0.4, 1 * _trs], [1, 0.6, 0.3,0]],[0], 0, 0, "", "", ""];
	_trs = _trs * 0.95;
};

_light = "#lightpoint" createVehicleLocal [_xpos,_ypos,200];
_light setLightAmbient [0.9, 0.3, 0.2];
_light setLightColor [0.9, 0.6, 0.5];
_light setLightBrightness 10000*_effectSize;


[_light,_timefactor,_effectSize,_pos] spawn {
params["_light","_timefactor","_effectSize","_pos"];

_step = 500/_effectSize;
for [{_i=10000*_effectSize+10},{_i >= 2},{_i = _i - _step}] do {
	_light setLightBrightness _i;
	sleep .1;
};

_step = 1/(500*_effectSize);
for [{_i=1},{_i >= 0},{_i = _i - _step}] do {
	_light setLightBrightness 5*_i;
	_light setLightAmbient [0.9, 0.3*_i, 0.2*_i];
	_light setLightColor [0.9, 0.6*_i, 0.5*_i];
	sleep .1;
};

deleteVehicle _light;
};