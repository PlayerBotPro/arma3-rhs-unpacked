/*
Mi-28 helicopter monitors simulation
sync handler

a: reyhard
*/


[] spawn
{
	sleep 0.1;

	//disableSerialization;
	//_c = uiNamespace getVariable "RHS_mi28_Ctrl";

	private _p			= call rhs_fnc_findPlayer;
	private _v			= vehicle _p;
	private _old		= -2;
	private _oldZoom	= 3;

	/*
		core r2t handling
	*/
	rhs_mi28Flir=_v;
	rhs_mi28_cam = "camera" camCreate [0,0,0];
	rhs_mi28_cam cameraEffect ["Internal", "Back", "rendertarget0"];

	rhs_mi28_cam attachTo [rhs_mi28Flir, [0,0,0], "gunnerview"];
	rhs_mi28_cam camSetFov (0.7/_oldZoom);

	"rendertarget0" setPiPEffect [3, 1,1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1]];

	_ehID = addMissionEventHandler ["Draw3D", {

		if(cameraView isEqualTo "INTERNAL")then
		{
			private _dir =
				(rhs_mi28Flir selectionPosition "gunnerview")
					vectorFromTo
				(rhs_mi28Flir selectionPosition "gunnerview_dir");
			rhs_mi28_cam setVectorDirAndUp [
				_dir,
				_dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0]
			];
		};
	}];


	while{_p in _v}do
	{
		sleep 0.1;
		if(cameraView isEqualTo "INTERNAL")then
		{
			//refreshing variables
			private _p				=  call rhs_fnc_findPlayer;
			private _gunHorizontal	= -deg( _v animationPhase "MainTurret");
			private _gunVertical	=  deg( _v animationPhase "MainGun");
			private _mode			= _v getVariable ["rhs_mi28_mode",0];
			private _n				= _v getVariable ["rhs_mi28_zoom",3];
			private _gunner			= gunner _v;

			// AI camera operations
			if(! isPlayer _gunner)then
			{
				if(currentWeapon _v isEqualTo "rhs_weap_2a42")then
				{
					switch( currentWeaponMode _gunner )do
					{
						case "farBMD2" : 	{if(_n != 30)then{_v setVariable ["rhs_mi28_zoom",30]} };
						case "mediumBMD2" : {if(_n != 7)then{_v setVariable ["rhs_mi28_zoom",7]} };
						case default 		{if(_n != 3)then{_v setVariable ["rhs_mi28_zoom",3]} };
					};
				}else{
					if(behaviour _gunner == "COMBAT")then{
						if(_n != 30)then{_v setVariable ["rhs_mi28_zoom",30]};
					}else{
						if(_n != 7)then{_v setVariable ["rhs_mi28_zoom",7]};
					};
				};
			};
			// synced camera operations
			if(_oldZoom != _n)then
			{
				//diag_log format ["%1",_oldZoom ];
				rhs_mi28_cam camSetFov (0.7/_n);
				_oldZoom=_n;
			};
			if(_mode != _old)then
			{
				rhs_mi28_cam cameraeffect ["terminate","back"];
				rhs_mi28_cam cameraEffect ["internal", "Back", "rendertarget0"];
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
    //uiNameSpace setVariable ["RHS_mi28_Ctrl",displayNull];
    removeMissionEventHandler ["draw3d",_ehID];
    rhs_mi28_cam cameraeffect ["terminate","back"];
    camDestroy rhs_mi28_cam;
    rhs_mi28_cam = nil;
    rhs_mi28_flir = nil;
};