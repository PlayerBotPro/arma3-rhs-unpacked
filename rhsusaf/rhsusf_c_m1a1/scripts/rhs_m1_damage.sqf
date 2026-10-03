/*
        Sets dammage to 0.6 if engine is destroyed due to bug with hidden selection materials & hitpoints

        i: EH Hit

        a: reyhard
*/
/*
params["_v"];

if( ((_v getHitPointDamage "HitEngine") > 0.85) AND {getDammage _v < 0.6})then{
	private _dam = [["HitEngine",_v getHitPointDamage "HitEngine"],["HitHull",_v getHitPointDamage "HitHull"],["HitTurret",_v getHitPointDamage "HitTurret"],["HitGun",_v getHitPointDamage "HitGun"]];
	_v setDamage 0.6;
	{_v setHitPointDamage _x}foreach _dam;
};
*/
