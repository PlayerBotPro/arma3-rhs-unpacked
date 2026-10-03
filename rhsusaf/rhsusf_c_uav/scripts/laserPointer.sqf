// TURNS TACTICAL (VISIBLE LASER) ON AND OFF


private ["_microAirVehicle","_accessedGCS","_mavCurrentTargetSphere"];
_accessedGCS = _this select 0;
_mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
_microAirVehicle = _this select 1;
mavCurrentTargetSphere = _mavCurrentTargetSphere;
microAirVehicle = _microAirVehicle;

if !(isNil{_accessedGCS getVariable "TacticalLaserVisible"}) then
{
         // TURN LASER ON
         ["rhsusf_fnc_laserOn", "onEachFrame", "rhsusf_fnc_laserPointer"] call BIS_fnc_addStackedEventHandler;

}  else
{
         // TURN LASER OFF
         ["rhsusf_fnc_laserOn", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};
