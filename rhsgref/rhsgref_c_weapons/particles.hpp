class rhsgref_792CartridgeEject
{
	class rhsgref_792Cartridge_FX1
	{
		simulation   = "particles";
		type         = "rhsgref_792Cartridge";
		position[]   = {0, 0, 0};
		intensity    = 1;
		interval     = 1;
		lifeTime     = 0.05;
		qualityLevel = 2;
	};

	class rhsgref_792Cartridge_FX1Med
	{
		simulation   = "particles";
		type         = "rhsgref_792Cartridge";
		position[]   = {0, 0, 0};
		intensity    = 1;
		interval     = 1;
		lifeTime     = 0.05;
		qualityLevel = 1;
	};
};

class rhsgref_792LinkEject
{
	class rhsgref_792Link_FX1
	{
		simulation = "particles";
		type       = "rhsgref_792Link";
		position[] = {0, 0, 0};
		intensity  = 1;
		interval   = 1;
		lifeTime   = 0.05;
	};
};

class CfgCloudlets
{
	class MachineGunCartridge;
	class MachineGunEject;
	class rhsgref_792Link: MachineGunEject
	{
		interval      = 0.05;
		particleShape = "\A3\data_f\ParticleEffects\Universal\AmmoBelt_Links.p3d";
		size[]        = {1};
	};

	class rhsgref_792Cartridge: MachineGunCartridge
	{
		interval      = 0.05;
		particleShape = "\rhsgref\addons\rhsgref_c_weapons\data\casing_792_SmE.p3d";
		size[]        = {1};
	};
};