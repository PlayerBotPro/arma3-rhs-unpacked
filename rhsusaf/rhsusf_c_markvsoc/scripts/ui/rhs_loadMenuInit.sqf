/*
	Mark V options menu init

	a: reyhard
*/
params["_v"];

// init variables
rhs_markv_load = _v;
rhs_markv_load_mode = 0;
rhs_selected_pos = -1;
rhs_markv_loading = false;
rhs_markv_load_boat = objnull;
// local
private _loadPos = (_v selectionPosition "attach_load_pos");
private _unloadPos = (_v selectionPosition "attach_unload_pos");
private _oldBoat = objNull;
private _oldBoat2 = objNull;
// loading zone
private _loadPos1 = _v selectionPosition "loading_area_1";
private _loadPos2 = _v selectionPosition "loading_area_2";
private _loadPos3 = _v selectionPosition "loading_area_3";
private _loadPos4 = _v selectionPosition "loading_area_4";
private _polygon = [];

// create helpers
rhs_sign_boat = "Sign_Arrow_F" createVehicleLocal [0,0,0];
rhs_sign_pos1 = "Sign_Arrow_Yellow_F" createVehicleLocal [0,0,0];
rhs_sign_pos2 = "Sign_Arrow_Yellow_F" createVehicleLocal [0,0,0];
rhs_sign_boat setObjectTexture [0,"#(argb,8,8,3)color(0,0.12,0.69,1)"];

// create ui
private _d = createDialog "RHS_MarkV_LoadBoat_UI";

// create camera
_camera = "camera" camCreate [0,0,0];
_camera cameraEffect ["internal","top"];
_camera attachto [_v,[8,-4,10]];
_camera camcommit 0;
ctrlEnable [1600,false];

private _dir = ([8,-4,10]) vectorFromTo ([0,-4,0]);
_dir = 	[_dir,	_dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0] ];

["rhs_markv_pfhLoad", "onEachFrame", {
	params["_camera","_dir"];
	_camera setVectorDirAndUp _dir;
}, [_camera,_dir]] call BIS_fnc_addStackedEventHandler;


_time = time;

while {dialog}do{

	//loading operations
	if(time > _time)then{
		// loading options are available if valid boat is found within attache range (8m)
		if(rhs_markv_load_mode isEqualTo 0)then{
			private _loadPos = _v modelToWorldVisual _loadPos;
			private _boat =  (((nearestObjects [_loadPos,["Boat_F"],4]) - [_v]) );
			_boat = _boat - (attachedObjects _v);


			if(!(_boat isEqualTo []))then{
				_boat = _boat select 0;
				_polygon = [];
				{_polygon pushback (_v modelToWorldVisual _x)}foreach [_loadPos1,_loadPos2,_loadPos3,_loadPos4];
				if(! ((getpos _boat) inPolygon _polygon) or (getMass _boat > 3500) )exitWith{};

				_type = (typeOf _boat);
				if(_boat != _oldBoat)then{
					rhs_markv_load_boat = _boat;
					rhs_sign_boat attachto [_boat,[0,0,0]];
					rhs_sign_boat setObjectTexture [0,"#(argb,8,8,3)color(0,0.12,0.69,1)"];
					_oldBoat = _boat;
					_oldBoat2 = objNull;

					// do we want load submarine or zodiac?
					if(_type isKindOf "SDV_01_base_F")then{

						if(
							isNull(_v getVariable ["rhs_boat_slot5",objNull]) &&
							isNull(_v getVariable ["rhs_boat_slot4",objNull]) &&
							isNull(_v getVariable ["rhs_boat_slot3",objNull]) &&
							isNull(_v getVariable ["rhs_boat_slot2",objNull]) &&
							isNull(_v getVariable ["rhs_boat_slot1",objNull])
						)then{
							rhs_sign_pos2 attachto [_v,[-0.2,-11,0]];
							ctrlShow [2401,true];
						};
					}else{
						//zodiac loading options
						// no SDV loaded
						if(isNull(_v getVariable ["rhs_boat_slot5",objNull]))then{
							if( isNull(_v getVariable ["rhs_boat_slot3",objNull]) && isNull(_v getVariable ["rhs_boat_slot2",objNull]) )then{
								rhs_sign_pos1 attachto [_v,[-0.2,-6,0.7]];
								ctrlShow [2400,true];
							}else{
								ctrlShow [2400,false];
								detach rhs_sign_pos1;
								rhs_sign_pos1 setpos [0,0,100];
							};
							if(isNull(_v getVariable ["rhs_boat_slot4",objNull]))then{
								rhs_sign_pos2 attachto [_v,[-0.2,-9.5,0]];
								ctrlShow [2401,true];
							}else{
								ctrlShow [2401,false];
								detach rhs_sign_pos2;
								rhs_sign_pos2 setpos [0,0,100];
							};
						};
					};
				};
			}else{
				if(!isNull rhs_markv_load_boat)then{
					{detach _x;_x setpos [0,0,100]}foreach [rhs_sign_boat,rhs_sign_pos1,rhs_sign_pos2];
					ctrlShow [2401,false];
					rhs_markv_load_boat = objNull;
				};
			};
		}else{
		//unloading operations
			private _loadPos = _v modelToWorldVisual _unloadPos;
			private _boat =  (((nearestObjects [_loadPos,["Boat_F"],4]) - [_v]) );
			_boat = _boat - (attachedObjects _v);

			// action is disabled if unloading point is obstructed by i.e. other boat
			if(!(_boat isEqualTo []))then{
				_boat = _boat select 0;
				{_polygon pushback (_v modelToWorldVisual _x)}foreach [_loadPos1,_loadPos2,_loadPos3,_loadPos4];
				if(! ((getpos _boat) inPolygon _polygon) )exitWith{};
				_type = (typeOf _boat);
				if(_boat != _oldBoat2)then{
					rhs_markv_load_boat = _boat;
					rhs_sign_boat attachto [_boat,[0,0,0]];
					rhs_sign_boat setObjectTexture [0,"#(argb,8,8,3)color(0.45,0.02,0,1)"];
					ctrlEnable [1600,false];
					ctrlSetText [1600,"Unload point is blocked"];
					_oldBoat2 = _boat;
					_oldBoat = objNull;
				};
			}else{
				if(!isNull rhs_markv_load_boat)then{
					detach rhs_sign_boat;
					rhs_sign_boat setpos [0,0,110];
					rhs_markv_load_boat = objNull;
					if(!rhs_markv_loading)then{ctrlSetText [1600,"Unload boat"]};
				};
			};

			// check if unloading is possible from 1st slot
			if(
				(not(isNull(_v getVariable ["rhs_boat_slot1",objNull])) OR
				not(isNull(_v getVariable ["rhs_boat_slot2",objNull]))) AND
				(isNull(_v getVariable ["rhs_boat_slot3",objNull]))
			)then{
				rhs_sign_pos1 attachto [_v,[-0.2,-6,0.7]];
				ctrlShow [2400,true];
			}else{
				ctrlShow [2400,false];
				detach rhs_sign_pos1;
				rhs_sign_pos1 setpos [0,0,100];
			};

			// check if unloading is possible from 2nd slot
			if(
				not(isNull(_v getVariable ["rhs_boat_slot3",objNull])) OR
				not(isNull(_v getVariable ["rhs_boat_slot4",objNull]))
			)then{
				rhs_sign_pos2 attachto [_v,[-0.2,-9.5,0]];
				ctrlShow [2401,true];
			}else{
				if(not(isNull(_v getVariable ["rhs_boat_slot5",objNull])))then{
					rhs_sign_pos2 attachto [_v,[-0.2,-11,1]];
					ctrlShow [2401,true];
				}else{
					ctrlShow [2401,false];
					detach rhs_sign_pos2;
					rhs_sign_pos2 setpos [0,0,100];
				};
			};
		};
		_time = time +0.2;
	};

	// arrow rotation
	{
		_x setDir ((getdir _x) + 0.1);
	}foreach [rhs_sign_boat,rhs_sign_pos1,rhs_sign_pos2];
	sleep 0.07;
};


// deinitialization

// deleting helpers
{detach _x;deleteVehicle _x;_x = nil}foreach [rhs_sign_boat,rhs_sign_pos1,rhs_sign_pos2];

// camera destruction
_camera cameraEffect ["terminate","back"];
detach _camera;
camDestroy _camera;
["rhs_markv_pfhLoad", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;


// variables destruction
rhs_markv_load = nil;
rhs_markv_load_mode = nil;
rhs_markv_load_boat = nil;
rhs_markv_loading = nil;
rhs_selected_pos = nil;