/*
	rhs_fnc_towing_attach

	returns: fake vehicle
	a: reyhard
*/
params[
"_towedVehicle",
"_towingVehicle",
["_helperFunction","rhs_fnc_towing_pushHelper",[""]]
];

private _cargoConfig	= (configOf _towedVehicle >> "RHS_TowingSystem" >> "Cargo");
private _carrierConfig	= (configOf _towingVehicle >> "RHS_TowingSystem" >> "Carrier");

private _cargoMass		= [_cargoConfig,"rhs_towedMass",500] call BIS_fnc_returnConfigEntry;
private _maxCargoMass	= [_carrierConfig,"rhs_maxCargoMass",1000] call BIS_fnc_returnConfigEntry;

// Parameters verification
if(_cargoMass > _maxCargoMass)exitWith{hint "Mass of towed vehicle is too high for selected carrier"};

private _fakeVehicleClass		= [_cargoConfig,"rhs_fakeVehicle",""] call BIS_fnc_returnConfigEntry;
if(_fakeVehicleClass isEqualTo "")exitWith{hint "Invalid cargo configuration! \nMissing property: rhs_fakeVehicle"};

private _towingPoint		= [_cargoConfig,"rhs_towingPoint",""] call BIS_fnc_returnConfigEntry;
if(_towingPoint isEqualTo "")exitWith{hint "Invalid cargo configuration! \nMissing property: rhs_towingPoint"};

private _attachPoint		= [_carrierConfig,"rhs_attachPoint",""] call BIS_fnc_returnConfigEntry;
if(_attachPoint isEqualTo "")then{
	_attachPoint = [_carrierConfig,"rhs_attachPointPos",[]] call BIS_fnc_returnConfigEntry;
}else{
	_attachPoint = _towingVehicle selectionPosition _attachPoint;
};
if(count _attachPoint isEqualTo 0)exitWith{hint "Invalid carrier configuration! \nMissing property: rhs_attachPoint or rhs_attachPointPos"};

// Attaching towed vehicle to fake entity
private _fakeVehicle = _fakeVehicleClass createVehicle [0,0,1000];
private _posVehicle = getPosASLVisual _towedVehicle;
private _vectorVehicle = [vectorDir _towedVehicle,vectorUp _towedVehicle];

_fakeVehicle setMass _cargoMass;
private _dir = getDir _towedVehicle;
_towedVehicle attachTo [_fakeVehicle,[0,0,0]];
[_towedVehicle,true] remoteExecCall ["hideObjectGlobal",2];
_towedVehicle allowDamage false;
_fakeVehicle setPosASL _posVehicle;
_fakeVehicle setVectorDirAndUp _vectorVehicle;

// Synchronize textures
{_fakeVehicle setObjectTextureGlobal [_foreachIndex,_x]}foreach (getObjectTextures _towedVehicle);

// Handling of vehicle which are rotated by 180 degrees
private _isReversed = [configFile >> "CfgVehicles" >>  _fakeVehicleClass,"reversed",1] call BIS_fnc_returnConfigEntry;
if(_isReversed isEqualTo 0)then{
	_fakeVehicle setDir (_dir - 180);
	[_towedVehicle,180] remoteExecCall ["setDir",_towedVehicle];
}else{
	_fakeVehicle setDir _dir;	
};


// Handling of on attach animations
private _animationList = [_cargoConfig,"rhs_animationsOnAttach",[]] call BIS_fnc_returnConfigEntry;
for "_i" from 0 to ((count _animationList)-1)  step 2 do
{
	_fakeVehicle animateSource [_animationList # _i, _animationList # (_i + 1)];
};

// Rope creation
private _rope1 = ropeCreate [_towingVehicle, _attachPoint vectorAdd [-0.5,0,0],_fakeVehicle, _towingPoint, 5]; 
private _rope2 = ropeCreate [_towingVehicle, _attachPoint vectorAdd [+0.5,0,0],_fakeVehicle, _towingPoint, 5]; 
ropeUnwind [_rope1, 3, 0.1];
ropeUnwind [_rope2, 3, 0.1];

_fakeVehicle setVariable ["rhs_towing_rope1",_rope1,true];
_fakeVehicle setVariable ["rhs_towing_rope2",_rope2,true];
_fakeVehicle setVariable ["rhs_towing_towedVehicle",_towedVehicle,true];
_towedVehicle setVariable ["rhs_towing_towingVehicle",_towingVehicle,true];
_towedVehicle setVariable ["rhs_towing_fakeVehicle",_fakeVehicle,true];


// Attach helper, 3rd rope - it might not be necessary in some cases
private _HelperRope		= [_cargoConfig,"rhs_additionalRopeOffset",[]] call BIS_fnc_returnConfigEntry;
if(!(_HelperRope isEqualTo []))then
{
	private _rope3 = ropeCreate [_towingVehicle, _attachPoint vectorAdd _HelperRope ,_fakeVehicle, _towingPoint , 5]; 
	ropeUnwind [_rope3, 1, 0.1];
	//_attachPoint2 = _attachPoint;
	//if(typename _attachPoint == "STRING")then{_attachPoint2 = _towingVehicle selectionPosition _attachPoint};
	//private _rope3 = ropeCreate [_fakeVehicle, (_fakeVehicle selectionPosition _towingPoint) ,_towingVehicle, _attachPoint2 , 5]; 
	//ropeUnwind [_rope3, 1, 2];
	_fakeVehicle setVariable ["rhs_towing_rope3",_rope3,true];
};

if(missionNameSpace getVariable ["rhs_towing_showHint",true])then{hint "Vehicle attached succesfully. Towed weapon might not behave properly if vehicle speed exceeds 60km/h!\n\n Current system is heavily work in progress. \n\nFor more information refer to http://www.rhsmods.org/w/towing "};;

// TODO: Should be probably executed onl on server?
private _boostCoef		= [_cargoConfig,"rhs_boostCoef",0.6] call BIS_fnc_returnConfigEntry;
private _id = "rhs_towing_handler_" + str _towedVehicle;
[_id, "onEachFrame", _helperFunction, [_id,time,1,_fakeVehicle,_towingVehicle,_fakeVehicle selectionPosition "tow_point",_attachPoint,true,_boostCoef] ] call BIS_fnc_addStackedEventHandler;

_fakeVehicle