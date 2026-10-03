class CfgMineTriggers
{
	class Default;
	class WireTrigger;
	class RangeTrigger;
	class rhsgref_glmi43_trigger: Default
	{
		mineTriggerType  = "radius";
		mineTriggerRange = 0.1;
		mineTriggerMass  = 9;
		mineMagnetic     = 0;
	};
	
	class rhsgref_sMine_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[] = {0.1, 0, 0};
		restrictZoneRadius   = 3.0;
		mineWireStart[]      = {-2.0, 0.05, 0};
		mineWireEnd[]        = {2.0, 0.05, 0};
		mineTriggerMass      = 14;
	};
	
	class rhsgref_StMi43_2m_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[] = {0.1, 0, 0};
		restrictZoneRadius   = 3.0;
		mineWireStart[]      = {-1.0, 0, 0};
		mineWireEnd[]        = {1.0, 0.25, 0};
		mineTriggerMass      = 14;
	};
	
	class rhsgref_StMi43_4m_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[] = {0.1, 0, 0};
		restrictZoneRadius   = 3.0;
		mineWireStart[]      = {-2.0, 0.1, 0};
		mineWireEnd[]        = {2.0, 0.25, 0};
		mineTriggerMass      = 14;
	};

	class rhsgref_Mk2_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[] = {0.1, 0, 0};
		restrictZoneRadius   = 3.0;
		mineWireStart[]      = {-2.0, 0.025, -0.1};
		mineWireEnd[]        = {2.0, 0.025, -0.1};
		mineTriggerMass      = 14;
	};
	
	class rhsgref_M2A3_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[] = {0.1, 0, 0};
		restrictZoneRadius   = 3.0;
		mineWireStart[]      = {-2.0, 0.023, 0.05};
		mineWireEnd[]        = {2.0, 0.023, 0.05};
		mineTriggerMass      = 14;
	};

	class rhsgref_pressure_trigger: RangeTrigger
	{
		mineTriggerRange           = 0.6;
		mineTriggerActivationRange = 1;
	};
};