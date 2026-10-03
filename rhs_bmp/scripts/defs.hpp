#define path RHS_BMP1
#define __autor_prefix RHS_
#define __addon_prefix bmp1_
#define __preprocess compile preprocessFileLineNumbers
#define __quoted(str) #str
#define __uiGet(name) (uiNamespace getVariable __quoted(name))
#define __uiSet(name,value) uiNamespace setVariable [__quoted(name),value]
#define __concat2(var1,var2) ##var1####var2
#define __concat3(var1,var2,var3) ##var1####var2####var3
#define __concat4(var1,var2,var3,var4) ##var1####var2####var3####var4
#define __scriptPath(a) __quoted(__concat4(__path,\fnc_,a,.sqf))
#define __scriptName(a) __concat4(__autor_prefix,__addon_prefix,fnc_,a)
#define __prepFnc(a) __scriptName(a) = __preprocess __scriptPath(a)
#define __callFnc(name) call PG_get(name)
#define GVAR(a) __concat3(__autor_prefix,__addon_prefix,a)