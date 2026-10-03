//Static editor props//
class cnr_base_obj: Thing
{
	dlc = "RHS_USAF";

	author="Feint";
	scope = 1;
	accuracy = 0.3;
	vehicleClass = "RHSUSF_CNR";
	simulation = "thingX";
	nameSound = "";
	model = "\rhsusf\addons\rhsusf_commskit\RHS_ANPRC152.p3d";
	displayName = "AN/PRC-152";
	class DestructionEffects {};
	armor = 450;
	cost = 0;
	class EventHandlers;
};
class rhsusf_props_anprc152: cnr_base_obj
{
	AUTHOR_MACRO_PUBLIC
	RHS_DLC
	model = "\rhsusf\addons\rhsusf_commskit\RHS_ANPRC152.p3d";
	displayName = "AN/PRC-152";
};