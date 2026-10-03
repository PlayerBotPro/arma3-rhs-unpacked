
disableSerialization;
private["_t","_c","_d1","_d2","_d3","_d4","_tx"];

_t=_this select 0;

_c = uiNamespace getVariable "RHS_M1_Ctrl";
//digits from 1 to 4
_d1= (_c displayCtrl 1);
_d2= (_c displayCtrl 2);
_d3= (_c displayCtrl 3);
_d4= (_c displayCtrl 4);
//texture path
_tx= "rhsusf\addons\rhsusf_c_m1a1\scripts\data";

if(_t >0)then
{
	//if(_t >1000)then{
		_d1 ctrlSetText format["%1\green_%2.paa",_tx,floor(_t/1000)];_t=_t-1000*floor(_t/1000);
		//}else{_d1 ctrlSetText ""};
	_d2 ctrlSetText format["%1\green_%2.paa",_tx,floor(_t/100)];_t=_t-100*floor(_t/100);
	_d3 ctrlSetText format["%1\green_%2.paa",_tx,floor(_t/10)];_t=_t-10*floor(_t/10);
	_d4 ctrlSetText format["%1\green_%2.paa",_tx,_t];
}else
{
	{_x ctrlSetText format["%1\green_%2.paa",_tx,0]}foreach [_d1,_d2,_d3,_d4];
	while{_t<0}do
	{
		sleep 0.3;
		{_x ctrlSetText ""}foreach [_d1,_d2,_d3,_d4];
		sleep 0.3;
		{_x ctrlSetText format["%1\green_%2.paa",_tx,0];}foreach [_d1,_d2,_d3,_d4];
		_t=_t+1;
	};
};