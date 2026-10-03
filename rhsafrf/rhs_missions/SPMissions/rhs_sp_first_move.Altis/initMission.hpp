//Screen starts black and no sound/music
0 fadeSound 0;
0 fadeMusic 0;
enableEnvironment false;
enableRadio false;
clearRadio;

// MistyRonin modifiers

//Player equipment & identities

PY setIdentity "PY"; // CPL

A1 setIdentity "A1"; // SGT
removeHeadgear A1;
A1 addHeadgear "rhsusf_ach_bare_tan_headset";
A1 allowDamage false;

A2 setIdentity "A2"; // CPL
A2 allowDamage false;

A3 setIdentity "A3"; // PVT
A3 allowDamage false;


//fade in screen and sound

titleText ["", "BLACK FADED", 1];

Sleep 1;

titleText ["", "BLACK IN", 3];

5 fadeSound 1;
5 fadeMusic 1;
enableEnvironment true;
enableRadio true; 

Sleep 5;

/*
player disableAI "move";
_nul = [] spawn {player switchMove "Acts_PercMwlkSlowWrflDf2";
player disableAI "ANIM";
waitUntil{(player distance Car1) < 13};
player switchMove "";};

// force cinema border 1 = true, integer is duration, true/false enable audio effect, true/false locks first person view ).
[1, 20,true,true] call BIS_fnc_cinemaBorder;

titleText ["", "BLACK IN", 3];

/* [text, format, blinks] */
_introText=
[
	//["Cpl. Berntson","<t size='0.9' font='PuristaMedium'>%1</t><br/>",2], 
	["2 Sep 2015","<t size='0.9' font='puristaLight'>%1</t>",2],
	["05:30","<t size='0.9' font='PuristaMedium'>%1</t><br/>",2],
	["Panagia","<t size='0.9' font='puristaLight'>%1</t><br/>",2], 
	["South-East Altis","<t size='0.9' font='puristaLight'>%1</t>",40]
	
];

[ _introText, (-safezoneX - 0.05), 0.95, "<t color='#FFFFFFFF' shadow = '1' size = '0.9' align = 'right'>%1</t>"] spawn BIS_fnc_typeText;

_void = execVM "events\Briefing.sqf";