/*
****************************************************************************************************
FUNCTION - DATA STREAM TITLE - THIS IS CALLED FROM mavCameraOn2.sqf
THIS FUNCTION CREATES THE DISPLAY FOR THE DATA STREAM WITH THE ASSIGNED CODE NAME OF THE RAVEN DISPLAYED
****************************************************************************************************
*/

private ["_upperBoxText","_staticGCS"];
_staticGCS = _this select 0;
// _microAirVehicle = _this select 1;
_upperBoxText = "";
_upperBoxText = _upperBoxText + "<br />";
/*
if (typeOf _microAirVehicle == "rhsusf_RQ11RAVEN") then
{
         _upperBoxText = _upperBoxText + format ["<t  align='right' size='2'>[<t underline='true'>%1 DATA STREAM</t>]</t>",_staticGCS getVariable 'assignedCode'] + "<br />" + "<br />";
} else
{
         _upperBoxText = _upperBoxText + format ["<t  align='right' size='2'>[<t underline='true'>%1 DATA STREAM</t>]</t>",_staticGCS getVariable 'assignedCode'] + "<br />" + "<br />";
};
*/

_upperBoxText = _upperBoxText + format ["<t  align='right' size='2' shadow='2' >CODE<br />[%1]</t>",_staticGCS getVariable 'assignedCode'] + "<br />" + "<br />";
_upperBoxText