/*
rhs_fnc_ka52_handler
Samshin-1 simulation for Ka-52 helicopter
sync handler

a: reyhard
*/


[] spawn
{
	sleep 0.1;

	//disableSerialization;
	//_c = uiNamespace getVariable "RHS_ka52_Ctrl";

	private _p			= call rhs_fnc_findPlayer;
	private _v			= vehicle _p;
	private _old		= -2;
	private _oldZoom	= 3;

	/*
		core r2t handling
	*/
	rhs_ka52Flir =_v;
	rhs_ka52_cam = "camera" camCreate [0,0,0];
	rhs_ka52_cam cameraEffect ["Internal", "Back", "rendertarget0"];

	rhs_ka52_cam attachTo [rhs_ka52Flir, [0,0,0], "pilotview"];
	rhs_ka52_cam camSetFov (0.7/_oldZoom);

	"rendertarget0" setPiPEffect [3, 1,1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1]];

	private _ehID = addMissionEventHandler ["Draw3D", {
		_dir =
			(rhs_ka52Flir selectionPosition "pilotview")
				vectorFromTo
			(rhs_ka52Flir selectionPosition "pilotview_dir");
		rhs_ka52_cam setVectorDirAndUp [
			_dir,
			_dir vectorCrossProduct [-(_dir # 1), _dir # 0, 0]
		];
	}];



	while{_p in _v}do{
		sleep 0.1;
		if(cameraView isEqualTo "INTERNAL")then{
			//refreshing variables
			private _p				= call rhs_fnc_findPlayer;
			private _mode			= _v getVariable ["rhs_ka52_mode",0];
			private _n				= _v getVariable ["rhs_ka52_zoom",3];
			private _gunner			= gunner _v;
			private _gunHorizontal	= -deg( _v animationPhase "MainTurret");
			private _gunVertical	= deg( _v animationPhase "MainGun");

			_v setUserMFDText [2,str(round _gunHorizontal)];
			_v setUserMFDText [3,(_gunVertical toFixed 1)];

			// AI camera operations
			if(! isPlayer _gunner)then{
				if(currentWeapon _v isEqualTo "rhs_weap_2a42")then
				{
					switch( currentWeaponMode _gunner )do{
						case "farBMD2" : 	{if(_n != 30)then{_v setVariable ["rhs_ka52_zoom",30]} };
						case "mediumBMD2" : {if(_n != 7)then{_v setVariable ["rhs_ka52_zoom",7]} };
						case default 		{if(_n != 3)then{_v setVariable ["rhs_ka52_zoom",3]} };
					};
				}else{
					if(behaviour _gunner == "COMBAT")then{
						if(_n != 30)then{_v setVariable ["rhs_ka52_zoom",30]};
					}else{
						if(_n != 7)then{_v setVariable ["rhs_ka52_zoom",7]};
					};
				};
			};

			if(_oldZoom != _n)then
			{
				//diag_log format ["%1",_oldZoom ];
				rhs_ka52_cam camSetFov (0.7/_n);
				_oldZoom = _n;
			};
			if(_mode != _old)then
			{
				rhs_ka52_cam cameraeffect ["terminate","back"];
				rhs_ka52_cam cameraEffect ["internal", "Back", "rendertarget0"];
				if(_mode isEqualTo 2)then
				{
					"rendertarget0" setPiPEffect [2];
				}else{
					"rendertarget0" setPiPEffect [3, 1,1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1]];
				};
				_old = _mode;
			};
		};
	};

	//deinitialization
    //uiNameSpace setVariable ["RHS_ka52_Ctrl",displayNull];
    removeMissionEventHandler ["draw3d",_ehID];
    rhs_ka52_cam cameraeffect ["terminate","back"];
    camDestroy rhs_ka52_cam;
    rhs_ka52_cam = nil;
    rhs_ka52_flir = nil;
};