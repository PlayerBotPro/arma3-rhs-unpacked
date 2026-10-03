/*
rhs_fnc_pip_handler

a: reyhard
*/
_this spawn
{
	waitUntil {isnil "rhs_acog_cam"};

	private["_k"];
	_k=format["RHS_%1_ctrl",_this # 2];

	if(isNull (uiNamespace getVariable [_k,displayNull]))then
	{
		uiNameSpace setVariable [_k,_this # 0];

		private["_c","_z","_h"];
		disableSerialization;
		_c = uiNamespace getVariable _k;
		_z = (_c displayCtrl 168);
		_h=true;

		rhs_acog_cam = "camera" camCreate [0,0,0];
		rhs_acog_cam cameraEffect ["internal", "Back", "rhs_scope0"];
		rhs_acog_cam camSetFov 0.35/(_this # 1);
		rhs_acog_pos=[-0.03,0.14,0.1];

		_id = addMissionEventHandler ["Draw3D",
		{
			if(cameraView == "EXTERNAL")exitWith{};

			//attach to cause to double camera rotation
			_p=(call rhsusf_fnc_findPlayer);
			//should be right hand as it glued to weapon most of the time
		 	rhs_acog_cam setPosATL (_p modelToWorldVisual ((_p selectionPosition "leftHand") vectorAdd rhs_acog_pos));

		 	_w = _p weaponDirection (primaryWeapon _p);
		 	_r = vectorNormalized(_w vectorCrossProduct [0,0,1]);
		 	_u = _r vectorCrossProduct _w;

		 	rhs_acog_cam setVectorDirAndUp [_w ,_u];
		}];

		_a2=rhs_acog_pos vectorDiff [0,0.24,0];
		if((primaryWeapon (call rhsusf_fnc_findPlayer)) in ["rhs_weap_m240b_elcan","rhs_weap_m240b","rhs_weap_m240b_usmc"])then{rhs_acog_pos=rhs_acog_pos vectorAdd [0,0.26,0]};
		_a1=rhs_acog_pos;
		while{not(isnull _z)}do
		{
			_p=(call rhsusf_fnc_findPlayer);
			sleep 0.1;
			if(cameraView == "internal")then{
				if(_h)then{
					rhs_acog_cam cameraeffect ["terminate","back"];
					rhs_acog_cam cameraEffect ["internal", "Back", "rhs_scope0"];
					_h=false;
				};
			}else{
				_h=true;
			};
			_e=eyepos _p;
			if(lineIntersects [_e,(vectorDir _p) vectorAdd _e] )then{rhs_acog_pos=_a2}else{rhs_acog_pos=_a1};
		};

		uiNameSpace setVariable [_k,displayNull];
		removeMissionEventHandler ["draw3d",_id];
		rhs_acog_cam cameraeffect ["terminate","back"];
		camDestroy rhs_acog_cam;
		rhs_acog_cam = nil;
		rhs_acog_pos = nil;
	};
};

