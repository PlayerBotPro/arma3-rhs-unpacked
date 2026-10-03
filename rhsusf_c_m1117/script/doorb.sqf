private ["_vehicle"];

_vehicle = _this select 0;


If (_vehicle animationPhase "door_top_b" < 0.5) then
{
_vehicle animate["door_top_b",1];
_vehicle animate["door_lower_b",1];
}
else
{
_vehicle animate["door_top_b",0];
_vehicle animate["door_lower_b",0];
};



