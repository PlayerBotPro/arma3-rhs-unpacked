private ["_vehicle","_unit","_groupleader"];

_vehicle = _this select 0;

_unit = _this select 2;

_groupleader = leader (group (vehicle _unit));

If ((_groupleader == _unit) && (driver _vehicle in _vehicle) && (canmove _vehicle)) then
{
//commandStop (driver _vehicle);
DoStop (driver _vehicle);
};
