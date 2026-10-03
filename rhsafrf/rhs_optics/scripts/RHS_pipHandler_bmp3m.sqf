/*
manual handling of PiP windows
all PiPs defined in RenderTargets are rendered at once even if you are not looking at them
2 gunner pips lags as hell since (and normally, they wouldn't) because driver & commanders pips are rendered too

funny fact is, that below method cause ~7% fps drop comparing to engine solution which is very interesting since max 2 r2t windows are used at once.
while main window fps is lower, pips tend to be much more fluent.
further investigation indicated that attachTo cause most of fps drop

a: reyhard
*/

[] spawn {

	sleep 0.01;
	//player globalchat "inicjalizacja";

	private["_v","_t","_c","_p","_tc","_side","_true","_cams","_temp","_reloadIn","_reloadOut","_cams"];
	disableSerialization;
	_c = uiNamespace getVariable "RHS_compass_Ctrl";
	_tc = (_c displayCtrl 412);

	_p = call rhs_fnc_findPlayer;
	_v = vehicle _p;

	while{not(isNull _tc)}do
	{
		if(driver _v == _p)then{
			_reloadIn=true;
			_reloadOut=true;
			_side=true;
			_cams=[];
			while{driver _v == _p && not(isNull _tc)}do
			{
				//PIP handling
				//TURNED OUT
				if(isTurnedOut _p)then
				{
					if (_reloadOut)then
					{
						//tworzenie kamer - wychylenie
						{
							_x cameraeffect ["terminate","back"];
							camDestroy _x;
						}foreach _cams;
						_cams=[];
						{
							_temp = "camera" camCreate [0,0,0];
							_temp cameraEffect ["internal", "Back", (_x select 1)];
							_temp camSetFov 0.35;
							_temp attachTo [_v, [0,0,0.04], (_x select 2)];

							_temp setdir (_X select 0);
						   	_cams pushBack _temp;
						}foreach [
							[-180,"rendertarget4","m1p","m1D"],
							[-180,"rendertarget5","m2p","m2D"]
						];
						_reloadIn=true;
						_reloadOut=false;
					};
				}else{
					if (_reloadIn)then
					{
						{
							_x cameraeffect ["terminate","back"];
							camDestroy _x;
						}foreach _cams;
						_reloadIn=false;
						_reloadOut=true;
					};
				};
				sleep 0.1;
			};
			//player globalchat "niszczenie kamer kierowca";
			{
				_x cameraeffect ["terminate","back"];
				camDestroy _x;
			}foreach _cams;
		};

		if(gunner _v == _p)then{

			_reload=true;
			_load=false;
			_mode=0;
			_side=true;
			_refresh=false;

			rhs_pip_vehicle=_v;
			rhs_cams=[];
			//UI stuff

			_c = uiNamespace getVariable "RHS_essa_Ctrl";

			_a = (_c displayCtrl 3);	//current ammo
			_r = (_c displayCtrl 4);	//rangefinder text
			_z = (_c displayCtrl 180);	//current zoom

			//PIP stuff
			rhs_ti_cam = "camera" camCreate [0,0,0];
			rhs_ti_cam cameraEffect ["Internal", "Back", "rendertarget6"];
			rhs_ti_cam camSetFov (0.7/12);

			"rendertarget6" setPiPEffect [2];

			_ehID = addMissionEventHandler ["Draw3D", {
				_p = call rhs_fnc_findPlayer;
				rhs_ti_cam setPosASL (AGLToASL (rhs_pip_vehicle modelToWorldVisual (rhs_pip_vehicle selectionPosition "gunnerview") ));

				_dir =
					(rhs_pip_vehicle selectionPosition "gunnerview")
						vectorFromTo
					(rhs_pip_vehicle selectionPosition "gunnerview_dir");
				rhs_ti_cam setVectorDirAndUp [
					[_dir,- getDirVisual rhs_pip_vehicle] call BIS_fnc_rotateVector2D,
					_dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0]
				];
				{
					(_x select 0) setdir ((getDir _p) - (getDir rhs_pip_vehicle)+ (_x select 1) );
				}foreach rhs_cams;
			}];

			_v setObjectTexture [13,"\rhsafrf\addons\rhs_bmp3\data\interior\rhs_essa_w_wide.paa"];

			while{gunner _v == _p && not(isNull _tc)}do
			{
				if(cameraView isEqualTo "INTERNAL")then{
					if (_reload)then
					{
						//tworzenie kamer - srodek
						{
							(_x select 0)  cameraeffect ["terminate","back"];
							camDestroy (_x select 0) ;
						}foreach rhs_cams;
						rhs_ti_cam cameraeffect ["terminate","back"];
						rhs_ti_cam cameraEffect ["Internal", "Back", "rendertarget6"];
						"rendertarget6" setPiPEffect [2];

						_reload=false;
					};

					if(vectorMagnitude( (eyeDirection _p) vectorDiff (vectorDir _p)) >0.85 )then{
						if(_side)then
						{
							//player globalchat "tworze 4";
							_temp = "camera" camCreate [0,0,0];
							_temp cameraEffect ["internal", "Back", "rendertarget8"];
							_temp camSetFov 0.35;
							_temp attachTo [_v, [0,0,0.04],"gVis1P"];
							_temp setDir -110;
							rhs_cams pushBack [_temp,-110,"gVis1P"];

							_side=false;
						}
					}else{
						if(!_side)then{
							//player globalchat "niszczenie kamer";
							_reload=true;
							_side=true;
						};
					};
				};
				//interior flir camera stuff
				if(cameraView isEqualTo "GUNNER")then{
					_refresh=true;
				}else{
					if(cameraView isEqualTo "INTERNAL")then{
						if(_refresh)then{
							_refresh =false;
							_currentZoom=parseNumber (ctrlText _z);
							rhs_ti_cam camSetFov (0.35/(_currentZoom));
							if(_currentZoom != 3)then
							{
								//player globalchat format["%1",ctrlText _a];
								switch (ctrlText _a) do
								{
									case "Б": {_v setObjectTexture [14,"\rhsafrf\addons\rhs_bmp3\data\interior\pur_b.paa"]};
									case "УО": {_v setObjectTexture [14,"\rhsafrf\addons\rhs_bmp3\data\interior\pur_uo.paa"]};
									case "О": {_v setObjectTexture [14,"\rhsafrf\addons\rhs_bmp3\data\interior\pur_o.paa"]};
									case "У": {_v setObjectTexture [14,"\rhsafrf\addons\rhs_bmp3\data\interior\pur_u.paa"]};
									case "П": {_v setObjectTexture [14,"\rhsafrf\addons\rhs_bmp3\data\interior\pur_p.paa"]};
								};

								_arr= ((ctrlText _r) splitString "");

								{
									_v setObjectTexture [_forEachIndex+15,format ["rhsafrf\addons\rhs_bmp3\data\interior\pur_%1.paa", _x]];
								}foreach _arr;

							}else{
								for "_i" from 14 to 18 do {
									_v setObjectTexture [_i,""];
								};
							};

							switch (_currentZoom) do
							{
								case 3:
								{
									_v setObjectTexture [13,"\rhsafrf\addons\rhs_bmp3\data\interior\rhs_essa_w_wide.paa"];
									_mode=0;
								};
								case 12:
								{
									_v setObjectTexture [13,"\rhsafrf\addons\rhs_bmp3\data\interior\rhs_essa_w_narrow_ready_1.paa"];
									_mode=1;
								};

								default
								{
									_v setObjectTexture [13,"\rhsafrf\addons\rhs_bmp3\data\interior\rhs_essa_w_narrow_ready_2.paa"];
									_mode=2;
								};
							};
						};
					};
				};

				//ready light & autoloader
				if(((_v animationPhase "Recoil" != 0) OR (_v animationPhase "Recoil2" != 0)) AND {_load})then{
					switch(_mode)do
					{
						case 0: {};
						case 1: { _v setObjectTexture [13,"\rhsafrf\addons\rhs_bmp3\data\interior\rhs_essa_w_narrow_1.paa"]; _load=false};
						case 2: { _v setObjectTexture [13,"\rhsafrf\addons\rhs_bmp3\data\interior\rhs_essa_w_narrow_2.paa"]; _load=false };
						case default {};
					};
				}else{
					if(not(_load) AND {_v animationPhase "Recoil" == 0} AND {_v animationPhase "Recoil2" == 0})then
					{
						_load=true;
						sleep 1;
						switch(_mode)do
						{
							case 0: {};
							case 1: { _v setObjectTexture [13,"\rhsafrf\addons\rhs_bmp3\data\interior\rhs_essa_w_narrow_ready_1.paa"]};
							case 2: { _v setObjectTexture [13,"\rhsafrf\addons\rhs_bmp3\data\interior\rhs_essa_w_narrow_ready_2.paa"]};
							case default {};
						};
					};
				};
				sleep 0.1;
			};

			//player globalchat "niszczenie kamer strzelec";
			removeMissionEventHandler ["draw3d",_ehID];
			{
				(_x select 0) cameraeffect ["terminate","back"];
				camDestroy (_x select 0) ;
			}foreach rhs_cams;
			camDestroy rhs_ti_cam;
			rhs_ti_cam = nil;
			rhs_pip_vehicle = nil;
		};

		if(commander _v == _p)then{

			_reload=true;
			_side=true;
			rhs_cams=[];
			rhs_pip_vehicle=_v;

			_ehID = addMissionEventHandler ["Draw3D", {
				_p = call rhs_fnc_findPlayer;
				{
					(_x select 0) setdir ((getDir _p) - (getDir rhs_pip_vehicle)+ (_x select 1) );
				}foreach rhs_cams;
			}];

			while{commander _v == _p && not(isNull _tc)}do
			{
				if(cameraView isEqualTo "INTERNAL")then{
					if (_reload)then
					{
						//tworzenie kamer - srodek
						{
							(_x select 0)  cameraeffect ["terminate","back"];
							camDestroy (_x select 0) ;
						}foreach rhs_cams;

						rhs_cams=[];
						{
							_temp = "camera" camCreate [0,0,0];
							_temp cameraEffect ["internal", "Back", (_x select 1)];
							_temp camSetFov 0.35;
							_temp attachTo [_v, [0,0,0.04], (_x select 2)];

							_temp setdir (_X select 0);
						   	rhs_cams pushBack [_temp,_x select 0,(_x select 2)];
						}foreach [
							[-40,"rendertarget9","cVis1P","cVis1D"],
							[40,"rendertarget10","cVis2P","cVis2D"]
						];
						_reload=false;
					};

					if(vectorMagnitude( (eyeDirection _p) vectorDiff (vectorDir _p)) >0.95 )then
					{
						if(_side)then
						{
							//player globalchat "tworze 3 i 4";
							{
								_temp = "camera" camCreate [0,0,0];
								_temp cameraEffect ["internal", "Back", (_x select 1)];
								_temp camSetFov 0.35;
								_temp attachTo [_v, [0,0,0.04], (_x select 2)];

								_temp setdir (_X select 0);
							   	rhs_cams pushBack [_temp,_x select 0,(_x select 2)];
							}foreach [
								[100,"rendertarget11","cVis3P","cVis3D"],
								[-100,"rendertarget12","cVis4P","cVis4D"]
							];
							_side=false;
						}
					}else{
						if(!_side)then{
							_side=true;
							//player globalchat "niszczenie kamer";
							_reload=true;
							_side=true;
						};
					};
				};
				sleep 0.1;
			};

			//player globalchat "niszczenie kamer dowódca";
			removeMissionEventHandler ["draw3d",_ehID];
			{
				(_x select 0) cameraeffect ["terminate","back"];
				camDestroy (_x select 0) ;
			}foreach rhs_cams;
			rhs_pip_vehicle = nil;
		};

		sleep 1;
	};
	//player globalchat "dobranoc!";
};