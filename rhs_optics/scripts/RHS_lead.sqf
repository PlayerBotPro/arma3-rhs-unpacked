/*
lead calculation for 1G42 FCS

in:
_v - vehicle
_p - param for different shells

a: reyhard
*/

if (profileNamespace getVariable['rhs_fcsTargetLead', 1] == 1) then {

	private["_c","_s","_t","_keepLead","_lead","_time","_a1","_a2"];

	disableSerialization;
	params["_v","_p"];


	_c = uiNamespace getVariable (_this select 2);
	_s = (_c displayCtrl 4);
	_t=parseNumber ctrlText _s;
	_animation=(getText (configFile >> "CfgVehicles" >> typeOf _v >> "Turrets" >> "MainTurret" >> "body"));
	_keepLead=true;
	_travSpeed=0;
	_lead=0;
	_oldLead=0;
	_time=0;

	if (profileNamespace getVariable['rhs_fcsTargetLead', 1] == 0) then {
		_keepLead=false;
	};

	while{((parseNumber ctrlText _s) == _t) AND _keepLead}do
	{
		_a1=deg(_v animationPhase _animation);

		_time=time;
		waitUntil{
			if (inputAction rhs_key_dmp_lead_GLB > 0) then {
				_keepLead=false;
				playSound ["RHS_ButtonPress", true];
			};
			!_keepLead || (time - _time >= .1);
		};

		_a2=deg(_v animationPhase _animation);



		//i don't like that code
		//seems like there is plenty of space for optimisation
		//8 przypadków
		if(_a1<_a2)then
		{
			//ruch w prawo - lewa półówka
			if(_a1 > 0 AND _a2 > 0)then
			{
				_travSpeed = _a1-_a2;
			}else{
				//ruch w lewo - srodek
				//a1 wciąz jest mniejsze od a2
				if(_a1< 0 AND _a2>0)then
				{
					if(_a1>-90)then
					{
						_travSpeed = (abs(_a1)+_a2);
					}else{

						_travSpeed = ((_a1+180)+(_a2-180));
					};
				}else{
					//ruch w lewo - prawa polowa
					_travSpeed = _a1-_a2;
				};
			};
		}else{
			//a1>a2
			//ruch w lewo - lewa połówka
			if(_a1 > 0 AND _a2 > 0)then
			{
				_travSpeed = _a1-_a2;
			}else{
				//ruch w prawo - srodek
				//a1 wciąz jest mniejsze od a2
				if(_a1> 0 AND _a2<0)then
				{
					if(_a1>90)then
					{
						_travSpeed = -1*(abs(_a1)+_a2);
					}else{

						_travSpeed = -1*((_a1+180)+(_a2-180));
					};
				}else{
					//ruch w prawo - prawa polowa
					_travSpeed = _a1-_a2;
				};
			};

		};



		if(abs(_travSpeed) > 0.01 and (speed _v < 3))then{

			_lead= ((_t/100)*(_travSpeed/110))*_p;
			_lead=(_lead+_oldLead)/2;
			if(
				(abs(_lead)<0.1) &&
				(abs(abs _lead - abs _oldLead)>(1/(_t/1.2)))
			)then{_v animate ["lead",-_lead*10000];_oldLead=_lead;};
		}else{_v animate["lead",0]};
		//hint format["turret traverse speed: %1\nlead: %2 \n\nangle1 %3, angle 2:%4",_travSpeed,_lead,_a1,_a2];
	};

	_v animate ["lead",0];

};