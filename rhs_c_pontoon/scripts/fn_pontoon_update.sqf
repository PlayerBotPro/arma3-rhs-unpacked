/*
	Modified by TeTeT for RHS
	pontoon_update

	find snappoints and connect, if possible
	Derived from arma 3 function:
	bin_fnc_cargoPlatform_01_update
*/
params["_object","_type"];

// Disable snaping when pontoon is folded
if(_object animationSourcePhase "fold_source" isEqualTo 1)exitWith{};

// If there is another cargo platform nearby then try to snap to it
// First we have to wait till dragging is completed
if(current3DENOperation isEqualTo "")then
{
	private _nearbyObjects = nearestObjects [_object, [_type], 10];
	_nearbyObjects = _nearbyObjects - [_object];

	if(!(_nearbyObjects isEqualTo []))then
	{
		//systemChat "Found a pontoon";
		private _nearestObject	= _nearbyObjects # 0;
		private _pos			= getposASL _object;

		// Search for available snap points
		private _snapPoint			= [];
		private _snapPointsParent	= [];
		// Search for valid snap points
		for "_i" from 1 to 2 do
		{
			private _snapCords = _object selectionPosition format["panel%1_snap",_i];
			if(_snapCords isEqualTo [0,0,0])exitWith{};
			_snapPointsParent pushBack (_object modelToWorldVisual _snapCords);
		// 	};
		};
		if(!(_snapPointsParent isEqualTo []))then
		{
			for "_i" from 1 to 2 do
			{
				// TeTeT: removed, no panel sides to hide
				// if(_nearestObject animationSourcePhase format["Panel_%1_Hide_Source",_i] isEqualTo 1)then
				// {
					_snapPoint = _nearestObject modelToWorldVisual (_nearestObject selectionPosition format["panel%1_snap",_i]);
					{
						// Continue if snap points are found
						if(_snapPoint distance2d _x <= 2)exitWith
						{
							// Reconvert to model space due to dir change
							_posModel = _object worldToModel _x;

							// Adjust direction
							_dirTo		= getDir _nearestObject - 360;
							_dirObject	= getDir _object;
							_dir		= _dirTo;

							for "_i" from 0 to 7 do
							{
								_dir = _dirTo + _i * 90;
								if(abs(_dir - _dirObject) < 45)then
								{
									_i = 10;
								};
							};
							_object set3DENAttribute ["rotation",[0,0, _dir]];

							// Recalc position in case direction was changed
							_x = _object modelToWorldVisual _posModel;

							// Transform position
							_pos = _pos vectorDiff (_x vectorDiff _snapPoint);
							_pos = [_pos # 0, _pos # 1, (getposASL (_nearbyObjects # 0)) # 2];
							//systemChat format["pos found %1",_pos];

							// Snap to position
							_object set3DENAttribute ["position",ASLToATL _pos];

							// Exit "for" loop
							_i = 10;
						};
					}forEach _snapPointsParent;
				// };
			};
		};
		//systemChat format["nearby objects %1 %2 snap point %3",_nearestObject,_object distance _nearestObject,_snapPointsParent];
	};
};

