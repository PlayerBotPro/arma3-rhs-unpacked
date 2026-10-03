private ["_vehicle"];

_vehicle = _this select 0;


If (_vehicle animationPhase "hatch_driver" < 0.5) then
{
_vehicle animate["hatch_driver",1];
}
else
{
_vehicle animate["hatch_driver",0];
};



