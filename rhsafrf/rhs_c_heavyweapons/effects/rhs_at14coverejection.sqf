params ["_vehicle", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner",["_useMissilePos",false,[false]]];

private _p3d = "\rhsafrf\addons\rhs_bmd\rhs_berezhok_cover.p3d";

private _shposmem1 = [];
private _shposmem2 = [];
private _turretDir = [];

if(_useMissilePos)then
{
	_weaponDir = _vehicle vectorWorldToModelVisual (_vehicle weaponDirection _weapon);
	_shposmem1 = _vehicle worldToModelVisual (getPosVisual _projectile);
	_shposmem2 = _shposmem1 vectorDiff (_weaponDir vectorMultiply 1.3);
	_turretDir = _weaponDir vectorMultiply 5;
}else{

	_shposmem1 = _vehicle selectionposition "Spice rakety";
	_shposmem2 = _vehicle selectionposition "Konec rakety";
	_turretDir = (_shposmem2 vectorFromTo _shposmem1) vectorMultiply 3;	
};

private _ranforward	= _turretDir vectorAdd [random [-1,0,1],random [-1,0,1],random [-1,0,1]];
private _ranback	= (_turretDir vectorAdd [random [-1,0,1],random [-1,0,1],random [-1,0,1]]) vectorMultiply -1;

{
	drop[_p3d,"","SpaceObject",1,13,_x # 0,_x # 1,3,5,1,0,[1],[[1,1,1,1]],[0],0.1,0.5,"","",_vehicle,0,true,0.1];
}foreach [[_shposmem1,_ranforward],[_shposmem2,_ranback]];
