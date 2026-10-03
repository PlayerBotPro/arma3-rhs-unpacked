/*
**************************************************************************************************
FUNCTION - BATTERY DISPLAY - THIS IS CALLED FROM mavCameraOn2.sqf
THIS FUNCTION CREATES THE BATTERY DISPLAY
**************************************************************************************************
*/

private ["_batteryDisplay","_staticGCS","_batteryLevel","_batteryBoxText"];
_staticGCS = _this select 0;
_batteryLevel = _staticGCS getVariable "ravenBatteryLevel";
if (isNil{_staticGCS getVariable "ravenBatteryLevel"}) then {_batteryLevel = 4};
switch (true) do
{
         case (_batteryLevel <= 5) : {_batteryDisplay = "[<t size='1'>BATTERY</t>]"};
         case (_batteryLevel <= 10) : {_batteryDisplay = "[|<t color='#666666'>|||||||||</t>]"};
         case (_batteryLevel <= 20) : {_batteryDisplay = "[||<t color='#666666'>||||||||</t>]"};
         case (_batteryLevel <= 30) : {_batteryDisplay = "[|||<t color='#666666'>|||||||</t>]"};
         case (_batteryLevel <= 40) : {_batteryDisplay = "[||||<t color='#666666'>||||||</t>]"};
         case (_batteryLevel <= 50) : {_batteryDisplay = "[|||||<t color='#666666'>|||||</t>]"};
         case (_batteryLevel <= 60) : {_batteryDisplay = "[||||||<t color='#666666'>||||</t>]"};
         case (_batteryLevel <= 70) : {_batteryDisplay = "[|||||||<t color='#666666'>|||</t>]"};
         case (_batteryLevel <= 80) : {_batteryDisplay = "[||||||||<t color='#666666'>||</t>]"};
         case (_batteryLevel <= 90) : {_batteryDisplay = "[|||||||||<t color='#666666'>|</t>]"};
         case (_batteryLevel <= 100) : {_batteryDisplay = "[||||||||||<t color='#666666'></t>]"};
};

//_batteryBoxText = "";
//_batteryBoxText = _batteryBoxText + "<br />";
_batteryBoxText = format ["<t size='2' shadow='2' >%1 %2 MIN</t>",_batteryDisplay,((_batteryLevel * 36)/60)];
_batteryBoxText

