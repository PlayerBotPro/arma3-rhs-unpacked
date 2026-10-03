params["_v"];

private _center = _v modelToWorldVisual (_v selectionPosition "CargoAttach");
private _polygon = [];
{
	_polygon pushback (_v modelToWorldVisual (_v selectionPosition _x))
}foreach ["cargo_mem_1","cargo_mem_2","cargo_mem_3","cargo_mem_4"];
{
	if(not(_x in attachedObjects _v) && ((getpos _x) inPolygon _polygon))then{
		_p = _v worldToModelVisual [getPosATL _x select 0, getPosATL _x select 1,(getPosATL _x select 2)-((_x worldToModelVisual (getposatl _x)) select 2)];
		_x attachTo [_v,_p];
	};
}foreach (nearestObjects [_center, ["LandVehicle","Air","Thing","Ship"], 24]);
