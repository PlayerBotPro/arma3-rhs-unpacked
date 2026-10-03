["Paste",["Altis",[14323.1,15611.4,190.455],2.72808,0.7,[-26.3636,-3.29934e-005],0,0,455.113,0.3,0]] call bis_fnc_camera;

Sleep 5;

["Altis",[14323.5,15613.9,190.24],5.90982,0.7,[-26.3636,-5.0979e-005],0,0,455.113,0.3,0];

_introText=
[
	["SILVER DAWN","<t size='0.9' font='PuristaBold'>%1</t><br/>",2],
	["by MistyRonin","<t size='0.9' font='puristaLight'>%1</t>",30]
	
];
[ _introText, 0, 0.45, "<t color='#FFFFFFFF' shadow = '1' size = '0.9' align = 'center'>%1</t>"] spawn BIS_fnc_typeText;

Sleep 15;

_introText=
[
	["Special thanks to:","<t size='0.9' font='PuristaMedium'>%1</t><br/>",2],
	["Bohemia Interactive","<t size='0.9' font='puristaLight'>%1</t><br/>",2],
	["Red Hammer Studios","<t size='0.9' font='puristaLight'>%1</t><br/>",2],
	["Corporal Lib","<t size='0.9' font='puristaLight'>%1</t>",30]
	
];
[ _introText, 0, 0.40, "<t color='#FFFFFFFF' shadow = '1' size = '0.9' align = 'center'>%1</t>"] spawn BIS_fnc_typeText;

Sleep 20;
