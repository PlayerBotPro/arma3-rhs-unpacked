

#define NAME_MACROS(VOICE_TYPE) \
Smolko[]	= { ##VOICE_TYPE##\020_Names\Smolko.ogg }; \
Sternik[]	= { ##VOICE_TYPE##\020_Names\Sternik.ogg }; \
Stolarski[]	= { ##VOICE_TYPE##\020_Names\Stolarski.ogg }; \
Stype[]		= { ##VOICE_TYPE##\020_Names\Stype.ogg }; \
Yakhin[]	= { ##VOICE_TYPE##\020_Names\Yakhin.ogg }; \
Zielinski[]	= { ##VOICE_TYPE##\020_Names\Zielinski.ogg }; \
Adamovich[]	= { ##VOICE_TYPE##\020_Names\Adamovich.ogg }; \
Burak[]		= { ##VOICE_TYPE##\020_Names\Burak.ogg }; \
Gorecki[]	= { ##VOICE_TYPE##\020_Names\Gorecki.ogg }; \
Ivanov[]	= { ##VOICE_TYPE##\020_Names\Ivanov.ogg }; \
Kesson[]	= { ##VOICE_TYPE##\020_Names\Kesson.ogg }; \
Kowalski[]	= { ##VOICE_TYPE##\020_Names\Kowalski.ogg }; \
Kruglikov[]	= { ##VOICE_TYPE##\020_Names\Kruglikov.ogg }; \
Krupin[]	= { ##VOICE_TYPE##\020_Names\Krupin.ogg }; \
Kushan[]	= { ##VOICE_TYPE##\020_Names\Kushan.ogg }; \
Nowak[]		= { ##VOICE_TYPE##\020_Names\Nowak.ogg }; \
Petrenko[]	= { ##VOICE_TYPE##\020_Names\Petrenko.ogg };
// cursorObject setNameSound "Kruglikov"; 
class RadioProtocolRUS: RadioProtocolBase
{
	class Words: Words
	{
		NAME_MACROS(Normal)

		class Normal
		{
			NAME_MACROS(Normal)
		};
		class CombatEngage: Normal 
		{
			NAME_MACROS(Normal)
		};
		class NormalContact: Normal 
		{
			NAME_MACROS(NormalContact)

		};
		class CombatContact: Normal 
		{
			NAME_MACROS(CombatContact)
		};
		class Stealth: Normal 
		{
			NAME_MACROS(Stealth)
		};
		class Combat: Normal 
		{
			NAME_MACROS(Combat)
		};
		class NormalEngage: Normal 
		{
			NAME_MACROS(NormalEngage)
		};
		class NormalWatch: Normal 
		{
			NAME_MACROS(NormalWatch)
		};
		class NormalTarget: Normal 
		{
			NAME_MACROS(NormalTarget)
		};
		class StealthEngage: Normal 
		{
			NAME_MACROS(StealthEngage)
		};
		class StealthWatch: Normal 
		{
			NAME_MACROS(StealthWatch)
		};
	};
};