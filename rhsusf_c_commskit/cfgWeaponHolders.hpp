#define ItemMacro(nameN,dispName,classN,EdClassN,EdSubClassN) \
	class Item_##nameN## : Item_Base_F {\
			scope = 2;\
			scopeCurator = 2;\
			displayName = ##dispName##;\
			author=$STR_RHSUSF_AUTHOR_FULL;\
			vehicleClass = ##classN##;\
			editorCategory = ##EdClassN##;\
			editorSubcategory = ##EdSubClassN##;\
			model = \A3\Weapons_f\dummyweapon.p3d;\
			class TransportItems {\
				class ##nameN## {\
				name = ##nameN##;\
				count = 1;\
			};\
		};\
	};

ItemMacro(rhsusf_radio_anprc152,"AN/PRC-152","Items","EdCat_Equipment","EdSubcat_InventoryItems")