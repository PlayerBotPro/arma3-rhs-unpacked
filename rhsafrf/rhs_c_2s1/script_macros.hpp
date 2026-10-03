

#define LoadoutAmmoMacro(classname,stringname) \
class ##classname## { \
	name = $##stringname##; \
	value = ##classname##; \
	defaultValue = ##classname##; \
};

