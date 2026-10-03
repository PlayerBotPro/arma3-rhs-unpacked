/*
*********************************************************************
RAVEN STROBE ON/OFF SCRIPT - THIS SCRIPT TURNS THE RAVEN STROBE ON OR OFF
*********************************************************************
*/

private ["_source","_color","_brightness","_light1","_onOffStatus","_ravenWithStrobe","_randomNumberTarget","_markerNameMavTarget","_ravenCode","_markerText"];
_ravenWithStrobe = _this select 0;
_onOffStatus = _this select 3;

_ravenWithStrobe say ["button_large",1];

if (_onOffStatus == 1) then
{
         _ravenWithStrobe setVariable ["mavStrobeOn",1,true];
}
else
{
         _ravenWithStrobe setVariable ["mavStrobeOn",nil,true];
};

if (isNil{_ravenWithStrobe getVariable "strobeScriptRunning"}) then
{
         _ravenWithStrobe setVariable ["strobeScriptRunning",1,true];

         // CREATE LOCAL MARKER TO FIND STROBE
         _randomNumberTarget = round (random 999999);
         _markerNameMavTarget = format ["%1_mavMarkerTarget",_randomNumberTarget];
         createMarkerLocal [_markerNameMavTarget, position _ravenWithStrobe];
         _markerNameMavTarget setMarkerTypeLocal 'selector_selectable';
         _markerNameMavTarget setMarkerColorLocal "ColorBlack";
         _ravenCode = _ravenWithStrobe getVariable "assignedCode";
         _markerText = format ["RQ-11 (%1)",_ravenCode];
         _markerNameMavTarget setMarkerTextLocal _markerText;


         while {((alive _ravenWithStrobe) and (!isNil{_ravenWithStrobe getVariable "mavStrobeOn"}))} do
         {


                  // [[player], "Alarm01"] call CBA_fnc_globalSay;
                  [[_ravenWithStrobe, "beep_strobe"],"rhs_fnc_sayGlobal"] call BIS_fnc_MP;

                  _source = _ravenWithStrobe;

                  // UPDATE MARKER POSITION IF RAVEN FALLS DOWN A HILL OR SOMETHING
                  _markerNameMavTarget setMarkerPosLocal position _ravenWithStrobe;


                  _color = [255,255,255];
                  _brightness = 0.04;

                  _light1 = createVehicle ["#lightpoint", position _source,[],0,"CAN_COLLIDE"];
                  _light1 lightAttachObject [_source, [0, 0, 0.1]];
                  _light1 setlightcolor _color;
                  _light1 setlightambient [1,1,1];
                  _light1 setlightbrightness _brightness;

                  sleep 0.5;





                  deletevehicle _light1;
                  // deletevehicle _source;

                  sleep 2;

         };

         // DELETE LOCAL MARKER
         deleteMarkerLocal _markerNameMavTarget;

         _ravenWithStrobe setVariable ["mavStrobeOn",nil,true];
         _ravenWithStrobe setVariable ["strobeScriptRunning",nil,true];
};
