/*
	rhs_fnc_pontoon_update_end

	find snappoints and connect, if possible
	Derived from arma 3 function:
	bin_fnc_cargoPlatform_01_update
*/
params["_object","_type"];
//#define DEBUG
// Disable snaping when pontoon is folded
if(_object animationSourcePhase "fold_source" isEqualTo 1)exitWith{};

if(current3DENOperation isEqualTo "")then
{
	#ifdef DEBUG
	{deleteVehicle _x}foreach (missionNamespace getVariable ["spheres_list",[]]);
	spheres_list = [];
	#endif
	{
		private _pos_base = _object selectionPosition format["%1_point",_x];
		private _pos_init = _object modelToWorldVisual _pos_base;
		for "_i" from -30 to 30 step 3 do
		{
			_rotation = [[0,1.85,0],-_i,0] call BIS_fnc_rotateVector3D;
			_pos_rot = _object modelToWorldVisual (_pos_base vectorAdd _rotation); 
			_intersect = lineIntersectsSurfaces [AGLtoASL (_pos_init),AGLToASL(_pos_rot),_object];
			// debug
			#ifdef DEBUG
			_sphere = "Sign_Sphere10cm_F" createVehicle [0,0,0];
			_sphere setposASL (AGLtoASL _pos_rot);
			spheres_list pushBack _sphere;
			#endif
			if((_intersect isEqualTo []))exitWith
			{
				//systemChat format["no collision found %1",_x];					
				_object set3DENAttribute [format["rhs_pontoon_%1_rot",_x], _i+2];

			};
		};
	}foreach ["centerLeft","centerRight","left","right"];
};

