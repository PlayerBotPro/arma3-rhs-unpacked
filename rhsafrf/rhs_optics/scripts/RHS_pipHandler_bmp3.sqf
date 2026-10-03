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
	private _texOffset = (getArray (configFile >> "cfgVehicles" >> typeOf _v >> "hiddenSelections")) find "f1";

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
			_side=true;
			rhs_pip_vehicle=_v;
			rhs_cams=[];

			_ehID = addMissionEventHandler ["Draw3D", {
				_p = call rhs_fnc_findPlayer;
				{
					(_x select 0) setdir ((getDir _p) - (getDir rhs_pip_vehicle)+ (_x select 1) );
				}foreach rhs_cams;
			}];

			while{gunner _v == _p  && not(isNull _tc)}do
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
							[-40,"rendertarget7","gVis1P","gVis1D"]
						];
						_reload=false;
					};

					if(vectorMagnitude( (eyeDirection _p) vectorDiff (vectorDir _p)) >0.45 )then{
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
				sleep 0.1;
			};

			//player globalchat "niszczenie kamer strzelec";
			removeMissionEventHandler ["draw3d",_ehID];
			{
				(_x select 0) cameraeffect ["terminate","back"];
				camDestroy (_x select 0) ;
			}foreach rhs_cams;
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

			while{commander _v == _p  && not(isNull _tc)}do
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