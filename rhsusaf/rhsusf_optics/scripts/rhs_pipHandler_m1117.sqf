/*
M1117 Gunner feed script

a: reyhard
*/



private _p = call rhsusf_fnc_findPlayer;
private _v = vehicle _p;

//systemChat  "inicjalizacja";

if(driver _v == _p or commander _v == _p)then{
	//systemChat "tworzenie";

	//PiP setup
	rhs_pip_vehicle = _v;
	rhs_ti_cam = "camera" camCreate [0,0,0];
	rhs_ti_cam cameraEffect ["Internal", "Back", "rendertarget2"];
	rhs_ti_cam camSetFov (0.7/3);

	"rendertarget2" setPiPEffect [2];

	//PIP refreshing
	private _ehID = addMissionEventHandler ["Draw3D", {
		_p = call rhsusf_fnc_findPlayer;

		rhs_ti_cam setPosATL (rhs_pip_vehicle modelToWorldVisual (rhs_pip_vehicle selectionPosition "gunnerview") );

		_dir =
			(rhs_pip_vehicle selectionPosition "konec hlavne")
				vectorFromTo
			(rhs_pip_vehicle selectionPosition "usti hlavne");
		rhs_ti_cam setVectorDirAndUp [
			[_dir,- getDirVisual rhs_pip_vehicle] call BIS_fnc_rotateVector2D,
			_dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0]
		];
	}];

	//local variables init
	private _tMode = _v getVariable ["rhs_tmode",2];
	private _zoom = _v getVariable ["rhs_zoom",3];
	//Main loop
	while{ (driver _v == _p OR commander _v == _p)}do
	{
		//day/thermal mode change
		if(!(_v getVariable ["rhs_tmode",0] isEqualTo _tMode))then{
			if(_tMode isEqualTo 0)then{
				"rendertarget2" setPiPEffect [2];
			}else{
				"rendertarget2" setPiPEffect [0];
			};
			_tMode = _v getVariable ["rhs_tmode",0];
		};
		//zoom change
		if(_v getVariable ["rhs_zoom",3] != _zoom)then{
			_zoom = _v getVariable ["rhs_zoom",3];
			rhs_ti_cam camSetFov (0.7/(_zoom*2.8) );
			if(_zoom > 1.5)then{
				_v animateDoor ["zoom_handler",0,true];
			}else{
				_v animateDoor ["zoom_handler",1,true];
			};
		};

		sleep 0.1;
	};

	//Deinitialization
	removeMissionEventHandler ["draw3d",_ehID];
	rhs_ti_cam cameraeffect ["terminate","back"];
	camDestroy rhs_ti_cam;

	rhs_ti_cam = nil;
	rhs_pip_vehicle = nil;

	//systemChat "papa";
};


//systemChat "main exit";