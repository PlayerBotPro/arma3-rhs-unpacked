/*
**************************************************************************************************
FUNCTION - CAMERA TIME - THIS IS CALLED FROM mavCameraOn2.sqf
THIS FUNCTION CREATES THE TIME DISPLAY
**************************************************************************************************
*/

private ["_dateMonth","_currentTimeMinute","_currentTimeYear","_currentTimeDay","_currentTimeHour","_displayTime","_clockBoxText"];
_currentTimeYear = date select 0; // [year, month, day, hour, minute]
_dateMonth = date select 1;
switch (_dateMonth) do
{
         case 1 : {_dateMonth = "JAN"};
         case 2 : {_dateMonth = "FEB"};
         case 3 : {_dateMonth = "MAR"};
         case 4 : {_dateMonth = "APR"};
         case 5 : {_dateMonth = "MAY"};
         case 6 : {_dateMonth = "JUN"};
         case 7 : {_dateMonth = "JUL"};
         case 8 : {_dateMonth = "AUG"};
         case 9 : {_dateMonth = "SEP"};
         case 10 : {_dateMonth = "OCT"};
         case 11 : {_dateMonth = "NOV"};
         case 12 : {_dateMonth = "DEC"};
};

_currentTimeDay = date select 2;
_currentTimeHour = date select 3;
_currentTimeMinute = date select 4;

switch (_currentTimeMinute) do
{
         case 1 : {_currentTimeMinute = "01"};
         case 2 : {_currentTimeMinute = "02"};
         case 3 : {_currentTimeMinute = "03"};
         case 4 : {_currentTimeMinute = "04"};
         case 5 : {_currentTimeMinute = "05"};
         case 6 : {_currentTimeMinute = "06"};
         case 7 : {_currentTimeMinute = "07"};
         case 8 : {_currentTimeMinute = "08"};
         case 9 : {_currentTimeMinute = "09"};
         case 0 : {_currentTimeMinute = "00"};
};

_displayTime = format ["%3 %2 %1 · %4:%5", _currentTimeYear,_dateMonth,_currentTimeDay,_currentTimeHour,_currentTimeMinute];

//_clockBoxText = "";
//_clockBoxText = _clockBoxText + "<br />";
_clockBoxText = format ["<t  align='right' size='2' shadow='2' >%1</t>",_displayTime];

_clockBoxText

