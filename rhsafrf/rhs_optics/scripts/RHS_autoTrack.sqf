/*
rhs_fnc_autoTrack
auto target track handling

in:
_v - vehicle
_c - ui handler

a: reyhard
*/
params["_v","_ui",["_mode","AllVehicles"]];
//LandVehicle
//autotrack engages after holding lase button for over 0.5 sec
sleep 0.5;
//player globalChat "auto track init";
if( (inputAction "lockTarget" isEqualTo 0) OR {_v getVariable "rhs_tracking"} OR {!rhs_trackActive} )exitWith{};


private _t = cursorObject;
if(isNull _t)then{_t = cursorTarget};
private _p = call rhs_fnc_findPlayer;
//player globalChat "auto track on";

//target tracking is available only in thermal mode for vehicles with turned on engine
if(  (_t isKindOf _mode)   && {((getVehicleTIPars _t) # 0) > 0.1} && {currentVisionMode _p == 2})then
{
	disableSerialization;
	_c = uiNamespace getVariable _ui;
	_m = (_c displayCtrl 22);
	_m ctrlSetText "ВКЛ";

	//player globalChat "target acquired";
	_h = "Logic" createVehicleLocal [0,0,0];
	_h enableSimulation false;
	//_h setObjectTexture [0,""]; //make our helper transparent

	 //attaching to aiming point since vehicle central seems to be off with i.e. m1 tanks or m113 apc
	 //if aiming point is missing, model center is used instead
	_aimpoint=(getText (configFile >> "CfgVehicles" >> typeOf _v >> "memoryPointCameraTarget"));
	if(_aimpoint isEqualTo "")then{_aimpoint="zamerny"};

	private _attachmentPoint = [0,0,-0.5];
	private _attachmentPointOld=_attachmentPoint;
	private _center = 0;
	_h attachTo [_t,_attachmentPoint,_aimpoint];
	_v lockCameraTo [_h,[0]];
	_v setVariable ["rhs_tracking",true];
	private _o = (_v selectionPosition (getText (configFile >> "CfgVehicles" >> typeOf _v >> "Turrets" >> "MainTurret" >> "memoryPointGunnerOptics")) );
	private _targetCenter = _t selectionPosition _aimpoint;

	private _track = true;
	private _i=0;
	_sphere1 = "Sign_Sphere100cm_F" createVehicle [0,0,0];
	_sphere2 = "Sign_Sphere100cm_F" createVehicle [0,0,0];

	/*["rhs_autoTrack_debug", "onEachFrame", {
		params["_o","_v","_t","_targetCenter","_sphere1","_sphere2"];
		_pos1 = AGLToASL (_v modelToWorldVisual _o);
		_pos2 = AGLToASL (_t modelToWorldVisual _targetCenter);
		_sphere1 setPosASL _pos1;
		_sphere2 setPosASL _pos2;
		drawLine3D [ASLToAGL _pos1,ASLToAGL _pos2, [1,1,1,1]];
	},[_o,_v,_t,_targetCenter,_sphere1,_sphere2]] call BIS_fnc_addStackedEventHandler;*/

	while{_track}do{

		//target lost

		if([_t, "VIEW",_v] checkVisibility [AGLToASL (_v modelToWorldVisual _o) ,AGLToASL (_t modelToWorldVisual _targetCenter)] < 0.05 )then{
			//hint format["loosing target: %1/100, %2",_i*5,_o];
			_i=_i+1.75;
		};
		if(_i>20)then{
			_track = false;
			//player globalChat "auto track lost target";
		};
		if(!rhs_trackActive)then{
			_track = false;
		};
		if (inputAction rhs_key_dmp_lead_GLB > 0) then {
			_track = false;
			playSound ["RHS_ButtonPress", true];
			//player globalChat "dump target";
		};
		if(cameraView isEqualTo "GUNNER")then{
			_dir = ( getdir _t) - (_t getdir _v);

			if(inputAction "aimRight" > 0)then{
				_center =_center - (inputAction "aimRight");
				if(_center < -12)exitWith{_center=-12};
				_adj = [[_center,0],_dir] call BIS_fnc_rotateVector2D;
				_attachmentPoint = [_adj select 0, _adj select 1, _attachmentPoint select 2];
			};
			if(inputAction "aimLeft" > 0)then{
				_center =_center + (inputAction "aimLeft");
				if(_center > 12)exitWith{_center=12};
				_adj = [[_center,0],_dir] call BIS_fnc_rotateVector2D;
				_attachmentPoint = [_adj select 0, _adj select 1, _attachmentPoint select 2];
			};
			if(inputAction "aimUp" > 0)then{
				_attachmentPoint = [_attachmentPoint select 0,_attachmentPoint select 1, 12 min ((_attachmentPoint select 2) + (inputAction "aimUp"))];
			};
			if(inputAction "aimDown" > 0)then{
				_attachmentPoint = [_attachmentPoint select 0,_attachmentPoint select 1, -12 max ((_attachmentPoint select 2) - (inputAction "aimDown"))];
			};
			if( not(_attachmentPoint isEqualTo _attachmentPointOld))then{_h attachTo [_t,_attachmentPoint];_attachmentPointOld=_attachmentPoint};
		};
		sleep 0.1;
		if(_i>0)then{_i=_i-1};
	};

	//["rhs_autoTrack_debug", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	_v lockCameraTo [objNull,[0]];
	detach _h;
	deleteVehicle _h;
	_v setVariable ["rhs_tracking",false];
	_m ctrlSetText "ГОТ";
};