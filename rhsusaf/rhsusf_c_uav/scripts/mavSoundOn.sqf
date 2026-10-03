/*
*************************************************************************
RAVEN SOUND SCRIPT - THIS PLAYS THE ENGINE SOUND AT THE POSITION OF THE RAVEN
*************************************************************************
*/

private ["_microAirVehicle","_nameOfGCS"];
_nameOfGCS = _this select 0;
_microAirVehicle = _this select 1;

sleep 6;

while {alive player} do
{
         [[_microAirVehicle, "prop_running02"],"rhs_fnc_sayGlobal"] call BIS_fnc_MP;
         // _microAirVehicle say3D "prop_running02";
        sleep 1.26; // sleep 1.275;
         if (isNil{_nameOfGCS getVariable "mavSoundOn"}) exitWith {};
};
