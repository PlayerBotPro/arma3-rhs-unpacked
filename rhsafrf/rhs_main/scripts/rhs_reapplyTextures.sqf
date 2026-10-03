params["_object"];

if(!local _object)exitWith{};

{_object setObjectTextureGlobal [_foreachIndex,_x]}foreach (getObjectTextures _object);