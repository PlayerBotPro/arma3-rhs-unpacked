/*
M1A1 CWSS FCS handler

Commander’s Weapon Station Sight (CWSS) FCS for M1A1 Abrams tanks with the 
add-on thermal sight (M1A1SA, M1A1FEP, and M1A1 TUSK equipped vehicles).

Currently wont go on M1A1SA as the current model in RHS is actually an
M1A1AIM, and lacks the SCWS commander turret with this sight.

CWSS display features include the reticle, PLGR self-position information
(GPS coordinates and date), and current sight mode (day or thermal optic indicator).

a: Ballistic09
*/
disableSerialization;

uiNameSpace setVariable ["RHS_CWSS_Ctrl",_this select 0];

[] spawn
{
	disableSerialization;
	
	private["_p","_v","_c","_ret","_mode","_pos","_grid","_date","_sight","_clr","_view","_grdPos","_dateAr"];
	
    _p = call rhsusf_fnc_findPlayer;
    _v = vehicle _p;

	_c = uiNamespace getVariable "RHS_CWSS_Ctrl";

	//Reticle
	_ret = (_c displayCtrl 1);
	//Optic mode
	_mode = (_c displayCtrl 2);
	//POS text
	_pos = (_c displayCtrl 3);
	//Grid coordinates
	_grid = (_c displayCtrl 4);
	//Date
	_date = (_c displayCtrl 5);

	//sight mode text control
	_sight = (_c displayCtrl 154);
	
	//FCS color selection
	_inv = [0, 0, 0, 0]; //Invisible
	_blk = [0, 0, 0, 0.65]; //Black
	_grn = [0, 1, 0, 0.65]; //Green
	_red = [1, 0, 0, 0.65]; //Red
	_wht = [1, 1, 1, 0.65]; //White
	
	_clr = _inv; //Current color
	

	while{not(isNull _ret)}do
	{	
		if(cameraView == "gunner")then{
			
			_view = ctrlText _sight;
			
			if(_view == "CWSS")then{
				/// Vision mode ///
				if(currentVisionMode _p isEqualTo 2)then{
					_mode ctrlSetText "THERM";
					_ret ctrlSetTextColor _grn;
					_clr = _grn;
				}else{
					_mode ctrlSetText "DAY";
					_ret ctrlSetTextColor _blk;
					_clr = _red;
				};
				
				/// Position and Date ///
				//Position would normaly be in GPS coords, but have to use grid square for Arma...
				_grdPos = mapGridPosition _p;
				_grid ctrlSetText (format ["%1	%2	%3	-	%4	%5	%6",
											_grdPos select [0,1],
											_grdPos select [1,1],
											_grdPos select [2,1],
											_grdPos select [3,1],
											_grdPos select [4,1],
											_grdPos select [5,1]]);
				//Date format is DD-MM-YY
				_dateAr = date;
				_date ctrlSetText (format ["%3-%2-%1", 
											str(_dateAr select 0) select [2,2],
											(if(_dateAr select 1 < 10)then{"0"}else{""}) + str(_dateAr select 1), 
											(if(_dateAr select 2 < 10)then{"0"}else{""}) + str(_dateAr select 2)]
									);
				
			}else{ //Not in CWSS, so hide data displays
				if(_view == "CWS")then{
					//Disabled until reticle illumination can be confirmed
					/* if(sunOrMoon < 0.5)then{
						_ret ctrlSetTextColor _red;
					}else{
						_ret ctrlSetTextColor _blk;
					}; */
					_ret ctrlSetTextColor _blk;
				}else{//In persicope, hide reticle
					_ret ctrlSetTextColor _inv;
				};
				_clr = _inv;
			};
			//Commit color changes
			{
				_x ctrlSetTextColor _clr;
			}forEach [_mode, _pos, _grid, _date];
		};
		

		sleep 0.01;
	};

	uiNameSpace setVariable ["RHS_CWSS_Ctrl",displayNull];
};