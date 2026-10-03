

#define LoadoutAmmoMacro(classname,numb) \
class ##classname##_##numb## { \
	name = $STR_##classname##; \
	value = ##classname##_##numb##; \
	defaultValue = ##classname##_##numb##; \
};
#define LoadoutAmmoMacro2(classname,numb) \
class ##classname## { \
	name = $STR_##classname##; \
	value = ##classname##; \
	defaultValue = ##classname##; \
};