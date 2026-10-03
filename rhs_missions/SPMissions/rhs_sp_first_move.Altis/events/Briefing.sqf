Sleep 15;

_introText=
[
	["Red Hammer Studios","<t size='0.9' font='PuristaMedium'>%1</t><br/>",2],
	["presents","<t size='0.9' font='puristaLight'>%1</t><br/>",20]
	
];
[ _introText, -0.05, 0.40, "<t color='#FFFFFFFF' shadow = '1' size = '0.9' align = 'center'>%1</t>"] spawn BIS_fnc_typeText;

Sleep 8;

_introText=
[
	["FIRST MOVE","<t size='0.9' font='PuristaBold'>%1</t><br/>",2],
	["by MistyRonin","<t size='0.9' font='puristaLight'>%1</t>",30]
	
];
[ _introText, -0.05, 0.45, "<t color='#FFFFFFFF' shadow = '1' size = '0.9' align = 'center'>%1</t>"] spawn BIS_fnc_typeText;

Sleep 10;

_introText=
[
	["Special thanks to:","<t size='0.9' font='PuristaMedium'>%1</t><br/>",2],
	["Bohemia Interactive","<t size='0.9' font='puristaLight'>%1</t><br/>",2],
	["Corporal Lib","<t size='0.9' font='puristaLight'>%1</t>",30]
	
];
[ _introText, -0.05, 0.40, "<t color='#FFFFFFFF' shadow = '1' size = '0.9' align = 'center'>%1</t>"] spawn BIS_fnc_typeText;

Sleep 20;

Helo1 vehicleChat "Get ready, we are approaching the LZ.";

Sleep 10;

A1 vehicleChat "Disembark in order and follow me.";

["move", ""] call BIS_fnc_missionTasks;