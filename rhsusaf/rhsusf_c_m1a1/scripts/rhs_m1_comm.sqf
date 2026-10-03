
[] spawn {
	private["_v","_i","_g1","_g2"];
	_p=(call rhsusf_fnc_findPlayer);
	_v=vehicle _p;

	while{_p==commander _v OR _p==driver _v}do{

		sleep 0.001;
		_p=(call rhsusf_fnc_findPlayer);
		if((_v animationPhase "HatchCommander" >0) && {(_p==commander _v)})then
		{
			_g1=_v animationPhase "ObsGun";
			_g2=_v animationPhase "ObsTurret";
			if(inputaction "AimUp" >0 AND (_g1)<(0.49))then
			{
				_v animate["ObsGun",_g1+((inputaction "AimUp") /100)];
			};
			if(inputaction "AimDown" >0 AND (_g1)>(-0.15))then
			{
				_v animate["ObsGun",_g1-((inputaction "AimDown") /100)];
			};

			if(inputaction "AimLeft" >0  AND (_g2)<(1.1))then
			{
				_v animate["ObsTurret",_g2+((inputaction "AimLeft") /100)];
			};
			if(inputaction "AimRight" >0  AND (_g2)>(-1.1))then
			{
				_v animate["ObsTurret",_g2-((inputaction "AimRight") /100)];
			};
		};
	};
};