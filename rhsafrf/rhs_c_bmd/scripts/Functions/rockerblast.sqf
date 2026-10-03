private ["_alex_index", "_u", "_shpos", "_shpos1","_i","_no","_int","_vel","_p3d","_light","_li","_speed","_flashspeed","_flist","_blist","_dlist"];

_u = _this select 0;

_flist = ["r4f","r12f","r7f","r5f","r2f","r11f","r1f","r8f","r3f","r10f","r6f","r9f"];
_blist = ["r4b","r12b","r7b","r5b","r2b","r11b","r1b","r8b","r3b","r10b","r6b","r9b"];
_dlist = ["r4h","r12h","r7h","r5h","r2h","r11h","r1h","r8h","r3h","r10h","r6h","r9h"];


// -- edit by Sekra starts --

_alex_index = _u getVariable "var_alex_index";
if(isNil "_alex_index") then
{
	_alex_index = 0;
};

// vvv -- do the magic code you need to do after this -- vvv

// back
_shpos1 = _u selectionposition (_blist select _alex_index);

_shpos = _u modelToWorld _shpos1;
_i=1;
_no=2;
_speed = velocity _u;
_flashspeed = [_speed select 0, _speed select 1, _speed select 2];

// Night Light
_li = "#lightpoint" createVehicleLocal _shpos;
_li setLightBrightness 0.02;
_li setLightAmbient[0.8, 0.6, 0.2];
_li setLightColor[1, 0.5, 0.2];


//Flash

drop [["\ca\Data\ParticleEffects\Universal\Universal",16,2,32], //objecct
"",																//Animation name
"Billboard",													//Type
1,																//Timer periods
(0.12 + 0.015*_i), 												//Life time
[0,0,0.1], 													//Position
[0,1,0],														//move velocity 
0, 																//rotation velocity
10,																//weight
0.5,															//volume
0.075,															//rubbing
[0.5, _i*1],														//size
[[1, 1, 1, -2],[1, 1, 1, -2], [1, 1, 1, -1], [1, 1, 1, -0]], 	//color
[3 + random 2],													//Animation Phase
0,																//Random dir
0, 																//Random dir intensity
"", 															//On timer
"", 															// before destroy
_li];
	
//Smoke
private ["_weh","_life"];
_u= _this select 0;
if ((_u iskindof "Helicopter") && (isengineOn _u)) then 
	{
	_weh=1;
	_life= 0.8;
	}
	else
	{
	_weh = 0.104;
	_life= 1.3 + random 0.6;
	};
	
drop [["\ca\Data\ParticleEffects\Universal\Universal",16,12,8],
	"", 

	"Billboard",
	1,
	_life,
	[0, 0, 0],
	[0, 5 + random 4, 0],
	0,
	_weh,
	0.08,
	0.2,
	[0.3, 0.4 + random 0.2],
	[[0.7, 0.7, 0.7, 0.2 + random 0.1],
	[0.8, 0.8, 0.8, 0]], 
	[1/_life], 1, 0, "", "", _li,random 360];
	
drop [["\ca\Data\ParticleEffects\Universal\Universal",16,12,8],
	"", 
	"Billboard",
	1,
	0.3,
	[0, 0, 0],
	[1, 0, 0],
	0,
	_weh,
	0.08,
	0.5,
	[0.4, 2.5], 
[[0.3, 0.3, 0.3, 0],[0.5, 0.5, 0.5, 0.25],[0.7, 0.7, 0.7, 0]],
 [2],
 1,
 0,
 "",
 "",
 _li,
 random 360];

_li spawn
{
	sleep 0.05;
	deletevehicle _this;
};

// front
_shpos1 = _u selectionposition (_flist select _alex_index);

_shpos = _u modelToWorld _shpos1;
_i=1;
_no=2;
_speed = velocity _u;
_flashspeed = [_speed select 0, _speed select 1, _speed select 2];

// Night Light
_li = "#lightpoint" createVehicleLocal _shpos;
_li setLightBrightness 0.02;
_li setLightAmbient[0.8, 0.6, 0.2];
_li setLightColor[1, 0.5, 0.2];


//Flash

drop [["\ca\Data\ParticleEffects\Universal\Universal",16,2,32], //objecct
"",																//Animation name
"Billboard",													//Type
1,																//Timer periods
(0.12 + 0.015*_i), 												//Life time
[0,0,0], 													//Position
[0,1,0],														//move velocity 
0, 																//rotation velocity
10,																//weight
0.8,															//volume
0.075,															//rubbing
[0.5, _i*1],														//size
[[1, 1, 1, -2],[1, 1, 1, -2], [1, 1, 1, -1], [1, 1, 1, -0]], 	//color
[3 + random 2],													//Animation Phase
0,																//Random dir
0, 																//Random dir intensity
"", 															//On timer
"", 															// before destroy
_li];
	
//Smoke
private ["_weh","_life"];
_u= _this select 0;
if ((_u iskindof "Helicopter") && (isengineOn _u)) then 
	{
	_weh=1;
	_life= 0.8;
	}
	else
	{
	_weh = 0.104;
	_life= 1.3 + random 0.6;
	};
	
drop [["\ca\Data\ParticleEffects\Universal\Universal",16,12,8],
	"", 

	"Billboard",
	1,
	_life,
	[0, 0, 0],
	[0, 5 + random 4, 0],
	0,
	_weh,
	0.08,
	0.2,
	[1.5, 5 + random 3],
	[[0.7, 0.7, 0.7, 0.2 + random 0.1],
	[0.8, 0.8, 0.8, 0]], 
	[1/_life], 1, 0, "", "", _li,random 360];
	
drop [["\ca\Data\ParticleEffects\Universal\Universal",16,12,8],
	"", 
	"Billboard",
	1,
	0.3,
	[0, 0, 0],
	[0, 0, 0],
	0,
	_weh,
	0.08,
	0.5,
	[0.4, 2.5], 
[[0.3, 0.3, 0.3, 0],[0.5, 0.5, 0.5, 0.25],[0.7, 0.7, 0.7, 0]],
 [2],
 1,
 0,
 "",
 "",
 _li,
 random 360];

_li spawn
{
	sleep 0.05;
	deletevehicle _this;
};

//remove the peice
_u animate [(_dlist select _alex_index),1];

// ^^^ -- do the magic code you need to do BEFORE this -- ^^^

_alex_index = _alex_index + 1;

if (_alex_index < count _flist) then
{
	//we are still not at the last index of the array
	_u setvariable ["var_alex_index", _alex_index, true];
} else
{
	//last index reached, back to start of array
	_u setvariable ["var_alex_index", 0, true];
};

// -- edit by Sekra ends --


//hint str _shpos1;



 
	
