params["_t80","_state"];

//engine turned off
if(_state isEqualTo 0)exitWith{};
//script already running
if(_t80 getVariable ["rhs_snorkel_running",false])exitWith{};

_t80 setVariable ["rhs_snorkel_running",true,true];
private _engineOk=true;

private _sel1=(_t80 selectionposition "snorkel1_top");
private _sel2=(_t80 selectionposition "snorkel2_top");

private _dam=(_t80 getHitPointDamage "hitEngine");
//as ponds currently doesn't work in a3 we will solely concentrate on inflicting damge when in water & without snorkel
if(local _t80 AND _engineOk)then
{
	while{isEngineOn _t80}do
	{
		sleep 1;
		//below 20cm it's very probably that vehicle is in water
		if(surfaceIsWater (getpos _t80))then
		{
			//player globalChat "jest w wodzie";
			//check height ASL, if less then check for snorkel
			if(((getposASLW _t80) select 2)  < -1.5)then{

				if(_t80 animationPhase 'snorkel_hide' < 0.5)then
				{
					_snorkel1_top = (_t80 modelToWorld _sel1) select 2;
					_snorkel2_top = (_t80 modelToWorld _sel2) select 2;
					//player globalChat "silnik jest w wodzie";

					//if snorkels are above the surface & hatches are closed then fix engine
					if(
						(_snorkel1_top>0) AND (_snorkel2_top>0) AND
						!(isTurnedOut driver _t80) AND
						!(isTurnedOut gunner _t80) AND
						!(isTurnedOut commander _t80)
					)then
					{
						_t80 setHitPointDamage ["HitEngine",_dam];
						// replenish crew oxygen supply
						{_x setOxygenRemaining 1}forEach (crew _t80);
						//player globalChat "naprawiam z rurą";
						//end loop if engine is damaged underwater - there is no hope to recover it! :P
					};
				};
			};
		//idle delay
		}else{sleep 2; _dam=(_t80 getHitPointDamage "hitEngine")};
		if(_dam ==1)then{_engineOk=false};
	};
	_t80 setVariable ["rhs_snorkel_running",false,true];
};