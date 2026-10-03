private ["_mavAltAGL","_mavAltASL","_arrow","_break","_breaks","_numberOfRepeats","_arrowWithBreaks"];
_mavAltAGL = _this select 0;
_mavAltASL = _this select 1;

if (_mavAltASL <= _mavAltAGL) then {_mavAltAGL = _mavAltASL};

// _spaces =  ".";


_arrow = format ["<t size='2' shadow='2' >&lt; [%1]</t>",_mavAltAGL];
_break = "<t size='2' color='#00000000'>.</t><br />";
_breaks = "";

// set _mavAltAGL between 0 and 300 only
if (_mavAltAGL >= 300) then {_mavAltAGL = 300};

// BREAK DOWN THE ALTITUDE TO FIT ON THE GRAPH
_mavAltAGL = _mavAltAGL / 10; // REDUCE THE ALTITUDE TO A NUMBER BETWEEN 0 AND 30
_numberOfRepeats = 30 - _mavAltAGL; // INVERT THE NUMBER

// BUILD UP THE BREAK TAGS FOR EACH TEN METERS OF ALTITUDE
while {_numberOfRepeats > 0} do
{
	_breaks = _breaks + _break;
	_numberOfRepeats = _numberOfRepeats - 1;
};

// COMBINE THE BREAK TAGS WITH THE ARROW
_arrowWithBreaks = _breaks + _arrow;
_arrowWithBreaks


// END TEST AREA
/*
 // 300
if (_mavAltAGL >= 300) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 290
if ((_mavAltAGL >= 290) and (_mavAltAGL <= 299)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 280
if ((_mavAltAGL >= 280) and (_mavAltAGL <= 289)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 270
if ((_mavAltAGL >= 270) and (_mavAltAGL <= 279)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 260
if ((_mavAltAGL >= 260) and (_mavAltAGL <= 269)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 250
if ((_mavAltAGL >= 250) and (_mavAltAGL <= 259)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 240
if ((_mavAltAGL >= 240) and (_mavAltAGL <= 249)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 230
if ((_mavAltAGL >= 230) and (_mavAltAGL <= 239)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 220
if ((_mavAltAGL >= 220) and (_mavAltAGL <= 229)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 210
if ((_mavAltAGL >= 210) and (_mavAltAGL <= 219)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 200
if ((_mavAltAGL >= 200) and (_mavAltAGL <= 209)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 190
if ((_mavAltAGL >= 190) and (_mavAltAGL <= 199)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 180
if ((_mavAltAGL >= 180) and (_mavAltAGL <= 189)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 170
if ((_mavAltAGL >= 170) and (_mavAltAGL <= 179)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 160
if ((_mavAltAGL >= 160) and (_mavAltAGL <= 169)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 150
if ((_mavAltAGL >= 150) and (_mavAltAGL <= 159)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 140
if ((_mavAltAGL >= 140) and (_mavAltAGL <= 149)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 130
if ((_mavAltAGL >= 130) and (_mavAltAGL <= 139)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 120
if ((_mavAltAGL >= 120) and (_mavAltAGL <= 129)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 110
if ((_mavAltAGL >= 110) and (_mavAltAGL <= 119)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 100
if ((_mavAltAGL >= 100) and (_mavAltAGL <= 109)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 90
if ((_mavAltAGL >= 90) and (_mavAltAGL <= 99)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 80
if ((_mavAltAGL >= 80) and (_mavAltAGL <= 89)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 70
if ((_mavAltAGL >= 70) and (_mavAltAGL <= 79)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 60
if ((_mavAltAGL >= 60) and (_mavAltAGL <= 69)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 50
if ((_mavAltAGL >= 50) and (_mavAltAGL <= 59)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 40
if ((_mavAltAGL >= 40) and (_mavAltAGL <= 49)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 30
if ((_mavAltAGL >= 30) and (_mavAltAGL <= 39)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 20
if ((_mavAltAGL >= 20) and (_mavAltAGL <= 29)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 10
if ((_mavAltAGL >= 10) and (_mavAltAGL <= 19)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};
// 0
if ((_mavAltAGL >= 0) and (_mavAltAGL <= 9)) then {_spaces = _spaces + _arrow + "<br />";} else {_spaces = _spaces +  " " + "<br />";};

*/


// _leftSideAltBarGraphResults = format ["<t size='2'>%1</t>",_output];
// _leftSideAltBarGraphResults