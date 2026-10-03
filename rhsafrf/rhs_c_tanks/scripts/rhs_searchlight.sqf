params["_v","_value"];

if(_value)then{
	//close searchlight
	_v setObjectTextureGlobal [3,"rhsafrf\addons\rhs_t80\Data\SearchlightClose.paa"];
	_v setObjectMaterialGlobal [3,"rhsafrf\addons\rhs_t80\Data\Materials\search.rvmat"];
}else{
	//open searchlight
	_v setObjectTextureGlobal [3,"rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa"];
	_v setObjectMaterialGlobal [3,"rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat"];
};