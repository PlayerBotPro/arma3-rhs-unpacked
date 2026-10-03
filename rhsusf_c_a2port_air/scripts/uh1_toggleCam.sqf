/*
toggle flir cam in UH1

a: reyhard
*/
_p = call rhsusf_fnc_findPlayer;
_v = vehicle _p;

if(_p == driver _v)then{
	if(_v animationPhase "pip2_on" >0)then{
		_v animate ["pip2_on",0];
	}else{
		_v animate ["pip2_on",1];
		/*
			camera restart
		*/
		rhs_uh1_cam cameraeffect ["terminate","back"];
		rhs_uh1_cam cameraEffect ["internal", "Back", "rendertarget0"];
		//mode reset
		_mode=_v getVariable ["rhs_uh1_mode",0];
		if(_mode isEqualTo 2)then
		{
			"rendertarget0" setPiPEffect [2];
		}else{
			"rendertarget0" setPiPEffect [3, 1,1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1]];
		};
		//zoom reset
		_n=(_v getVariable ["rhs_uh1_zoom",42])/40;
		rhs_uh1_cam camSetFov (0.7/_n);
	};
}else{
	if(_p == _v turretUnit [0])then{
		if(_v animationPhase "pip1_on" >0)then{
			_v animate ["pip1_on",0];
		}else{
			_v animate ["pip1_on",1];
			rhs_uh1_cam cameraeffect ["terminate","back"];
			rhs_uh1_cam cameraEffect ["internal", "Back", "rendertarget0"];
			/*
				camera restart
			*/
			rhs_uh1_cam cameraeffect ["terminate","back"];
			rhs_uh1_cam cameraEffect ["internal", "Back", "rendertarget0"];
			//mode reset
			_mode=_v getVariable ["rhs_uh1_mode",0];
			if(_mode isEqualTo 2)then
			{
				"rendertarget0" setPiPEffect [2];
			}else{
				"rendertarget0" setPiPEffect [3, 1,1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1]];
			};
			//zoom reset
			_n=(_v getVariable ["rhs_uh1_zoom",42])/40;
			rhs_uh1_cam camSetFov (0.7/_n);
		};
	};
};