params["_pos","_yield","_radius"];

_timefactor = 0.03*_yield^0.5;
_effectSize = 0.03*_yield^0.5;

_xpos = _pos select 0;
_ypos = _pos select 1;
_alpha = 0.2;
for "_size" from 3 to 4 do
{
	for "_dist" from 1 to (5*_effectSize) do {
		_step = atan(5/_dist);
		for [{_ang=0},{_ang < 360},{_ang=_ang+_step}] do {
			_velx = sin(_ang+random(15)) * (100 + random(150));
			_vely = cos(_ang+random(15)) * (100 + random(150));
			_upposx = _xpos + (sin(_ang+random(15))*_dist*50);
			_upposy = _ypos + (cos(_ang+random(15))*_dist*50);
			_col = 0.2 - random 0.4;

			drop ["\A3\data_f\cl_basic", "", "Billboard", 1, 20*_timefactor + random 10,
				[_upposx, _upposy, -20], [ _velx, _vely, 0 ], 1, 1.25, 1,
			0.08 + random 0.02, [_size * 70], [[0.55, 0.5, 0.45, 0],
			[_col + 0.55, _col + 0.5,  _col + 0.45, _alpha * 0.8],
			[_col + 0.55, _col + 0.5,  _col + 0.45, _alpha * 0.6],
			[_col + 0.5,  _col + 0.45, _col + 0.4,  _alpha * 0.4],
			[_col + 0.45, _col + 0.4,  _col + 0.35, _alpha * 0.2],
			[_col + 0.4,  _col + 0.35, _col + 0.3,  0.01]],
			[0], 0, 0.1, "", "", ""];
		};
	};
	_alpha = _alpha*0.5;
	sleep 1;
};
