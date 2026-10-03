params["_vehicle"];

while{alive _vehicle}do
{
	_vehicle engineOn (isVehicleRadarOn _vehicle);
	sleep 2;
};