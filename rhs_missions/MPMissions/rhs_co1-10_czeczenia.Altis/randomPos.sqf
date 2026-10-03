private "_getpos";
_getpos = {
  private ["_origo","_dir","_dist"];
  _origo = _this select 0;
  _dir = _this select 1;
  _dist = _this select 2;
  if (typename _dir == typename []) then {
    if ((_dir select 0) > (_dir select 1)) then { _dir set [1,((_dir select 1) + 360)] };
    _dir = ((_dir select 0) + random((_dir select 1)-(_dir select 0)))
  };
  if (typename _dist == typename []) then {
    _dist = ((_dist select 0) + random((_dist select 1)-(_dist select 0)));
  };
  [((_origo select 0) + (_dist * sin _dir)),((_origo select 1) + (_dist * cos _dir)),0];
};

private "_water";

if (typename (_this select 0) == typename "") then {
  private ["_pos","_area","_cp","_cx","_cy","_as","_rx","_ry","_ad","_cd","_sd","_xo","_yo","_loop"];
  _area = _this select 0;
  if (count _this > 1) then {_water = _this select 1} else {_water = false};
  _cp = getMarkerPos _area;
  _cx = abs(_cp select 0);
  _cy = abs(_cp select 1);
  _as = getMarkerSize _area;
  _rx = _as select 0;
  _ry = _as select 1;
  _ad = (markerDir _area) * -1;
  _cd = cos _ad;
  _sd = sin _ad;
  _loop = true;
  while {_loop} do {
    _tx = (random (_rx*2))-_rx;
    _ty = (random (_ry*2))-_ry;
    _xo = if (_ad!=0) then {_cx+ (_cd*_tx - _sd*_ty)} else {_cx+_tx};
    _yo = if (_ad!=0) then {_cy+ (_sd*_tx + _cd*_ty)} else {_cy+_ty};
    _pos = [_xo,_yo,0];
    if (_water) then {
      _loop = false;
    } else {
      if (!surfaceIsWater [_pos select 0,_pos select 1]) then {_loop = false};
    };
  };
  _pos
};