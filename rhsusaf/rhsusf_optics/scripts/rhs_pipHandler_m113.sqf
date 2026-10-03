/*
manual handling of PiP windows
all PiPs defined in RenderTargets are rendered at once even if you are not looking at them
2 gunner pips lags as hell since (and normally, they wouldn't) because driver & commanders pips are rendered too

funny fact is, that below method cause ~7% fps drop comparing to engine solution which is very interesting since max 2 r2t windows are used at once.
while main window fps is lower, pips tend to be much more fluent.
further investigation indicated that attachTo cause most of fps drop

a: reyhard
*/

[] spawn
{

	_p=call rhs_fnc_findPlayer;
	_v = vehicle _p;

	while{_p in _v}do{

		if(driver _v == _p)then
		{

			_reload=true;
			_side=true;
			_cams=[];

			while{driver _v == _p}do
			{
				_p=call rhs_fnc_findPlayer;
				//PIP handling
				if(not(isTurnedOut _p))then
				{
					if(cameraView isEqualTo "INTERNAL")then{

						if (_reload)then
						{
							//tworzenie kamer - srodek
						    {
							    _x cameraeffect ["terminate","back"];
							    camDestroy _x;
							}foreach _cams;
							_cams=[];
							{
								_temp = "camera" camCreate [0,0,0];
								_temp cameraEffect ["internal", "Back", (_x select 1)];
								_temp camSetFov 0.5;
						    	_temp attachTo [_v, [0,0,0.04], (_x select 2)];

						        _temp setdir (_X select 0);
						       	_cams pushBack _temp;
							}foreach [
								[0,"rendertarget2","dVis3P","dVis3D"]
							];
							_reload=false;
						};

						if(vectorMagnitude( (eyeDirection _p) vectorDiff (vectorDir _p)) >0.15 )then{
							if(_side)then
							{
								//player globalChat "tworze 4";
								{
									_temp = "camera" camCreate [0,0,0];
									_temp cameraEffect ["internal", "Back", (_x select 1)];
									_temp camSetFov 0.5;
							    	_temp attachTo [_v, [0,0,0.04], (_x select 2)];

							        _temp setdir (_X select 0);
							       	_cams pushBack _temp;
								}foreach [
									[-90,"rendertarget0","dVis1P","dVis1D"],
									[-45,"rendertarget1","dVis2P","dVis2D"],
								[25,"rendertarget3","dVis4P","dVis4D"]
								];

							    _side=false;
							}
						}else{
							if(!_side)then{
								_side=true;
							    //player globalChat "niszczenie kamer";
							    _reload=true;
								_side=true;
							};
						};
					};

					sleep 0.1;
				};
			};

		    //player globalChat "niszczenie kamer kierowca";
		    {
			    _x cameraeffect ["terminate","back"];
			    camDestroy _x;
			}foreach _cams;
		};

		sleep 1;
	};
	//player globalChat "papa"
};