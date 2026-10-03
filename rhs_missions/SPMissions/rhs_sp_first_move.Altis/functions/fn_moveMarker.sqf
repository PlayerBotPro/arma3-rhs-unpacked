_marker = _this select 0;
_vehicle = _this select 1;

while {alive _vehicle} do
  {
  _marker setmarkerpos getpos _vehicle;
  sleep 3;
  };

deletemarker _marker;

/* nul = ["MrkRaven", this] execVM "movemarker.sqf"; */