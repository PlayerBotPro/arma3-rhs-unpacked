/*
***************************************************************************************************
RAVEN RECALL SCRIPT - THIS IS CALLED FROM A KEYSTROKE AND RECALLS THE RAVEN IF IT ISN'T ALREADY AUTOLANDING
***************************************************************************************************
*/

private ["_staticGCS"];
_staticGCS = _this select 0;

_staticGCS say ["button_small",1];

if (!isNil{_staticGCS getVariable "birdRecall"}) then
{
         hint parseText "<t color='#FF0000' size='1.8' shadow='0'>-ERROR-</t><br/>RAVEN IS AUTOLANDING";
         _staticGCS say ["zoom_fail",1];
} else
{
         _staticGCS say ["zoom_in",1];
         _staticGCS setVariable ["birdRecall",1,true];
         hint "RQ-11 RETURNING TO CONTROL STATION";
         
         // _mavCurrentTarget = _staticGCS getVariable "mavCurrentTarget";
         // _mavCurrentTarget setMarkerPosLocal position _staticGCS;
         cutText ['AUTOLANDING', 'PLAIN DOWN',0];
};