private ["_vehicle"];

_vehicle = _this select 0;


If (_vehicle animationPhase "hatch_gunner" < 0.5) then
{
_vehicle animate["hatch_gunner",1];
}
else
{
_vehicle animate["hatch_gunner",0];
};



