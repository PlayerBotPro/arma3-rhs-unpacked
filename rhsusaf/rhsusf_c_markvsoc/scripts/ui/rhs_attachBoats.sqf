/*
	preattaching boats to Mark V
	a: reyhard
*/
params["_v"];

//exit in eden
if(is3DEN)exitWith{};

// define area from we search for boats
private _center = _v modelToWorldVisual (_v selectionPosition "attach_load_pos");
private _polygon = [];
{
	_polygon pushback (_v modelToWorldVisual (_v selectionPosition _x))
}foreach ["loading_area_1","loading_area_2","loading_area_3","loading_area_4"];

private _pos1 = AGLtoASL (_v modelToWorldVisual (_v selectionPosition "slot_1"));
private _pos2 = AGLtoASL (_v modelToWorldVisual (_v selectionPosition "slot_2"));

{
	if(not(_x in attachedObjects _v) && ((getpos _x) inPolygon _polygon))then{
		if((typeOf _x) isKindOf "SDV_01_base_F")then{
			if(isNull(_v getVariable ["rhs_boat_slot5",objNull]))then{
				_x attachto [_v,[0.0,0,1.45],"attach_load_4_point"];
				_v animateSource ["attach_load_4",1,true];
				_v setVariable ["rhs_boat_slot5",_x,true];
			};
		}else{
			if(!(isNull(_v getVariable ["rhs_boat_slot5",objNull])))exitWith{};
			if((_x distance _pos1) < (_x distance _pos2))then{
				if(isNull(_v getVariable ["rhs_boat_slot1",objNull]))then{
					_x setdir 0;
					_x attachto [_v,[0,0,1.15],"attach_load_1_point"];
					_v animateSource ["attach_load_1",1,true];
					_v setVariable ["rhs_boat_slot1",_x,true];
				}else{
					if(isNull(_v getVariable ["rhs_boat_slot2",objNull]))then{
						_x setdir 0;
						_x attachto [_v,[0.25,0,1.15],"attach_load_2_point"];
						_v animateSource ["attach_load_2",1,true];
						_v setVariable ["rhs_boat_slot2",_x,true];
					};
				};
			}else{
				if(isNull(_v getVariable ["rhs_boat_slot3",objNull]))then{
					_x setdir 0;
					_x attachto [_v,[0,0,1.05],"attach_load_3_point"];
					_x setVectorUp  [0.004215,-0.366606,1.41];
					_v animateSource ["attach_load_3",1,true];
					_v setVariable ["rhs_boat_slot3",_x,true];
				}else{
					if(isNull(_v getVariable ["rhs_boat_slot4",objNull]))then{
						_x setdir 0;
						_x attachto [_v,[0.25,-0.5,1.05],"attach_load_4_point"];
						_x setVectorUp  [0.004215,-0.366606,1.21];
						_v animateSource ["attach_load_4",1,true];
						_v setVariable ["rhs_boat_slot4",_x,true];
					};
				};
			};
		};
	};
}foreach (nearestObjects [_center, ["Boat_F"], 15]);
