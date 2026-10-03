params["_veh"];


if(local _veh)then
{
	private _s = createSoundSource [(_this select 1), getpos _veh, [], 0];

	//can't pass _s variable to EH killed
	waitUntil {sleep 5;not(alive _veh)};
	deleteVehicle _s;
};
