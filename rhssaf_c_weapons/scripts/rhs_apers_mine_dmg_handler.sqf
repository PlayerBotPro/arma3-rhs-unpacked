// Usage: this addEventHandler["handleDamage",{_this call rhs_fnc_mine_damage_handler;}];
// NOTE: This code was written for use with RHS vehicles only, other applications may lead to issues

params [["_unit",objNull,[objNull]], ["_part","",[""]], ["_damage",0,[0]], ["_source",objNull,[objNull]], ["_projectile","",[""]], ["_hitPartIndex",0,[0]]];

// debug stuff
diag_log _this;
if (isNull _source) then {
  diag_log "Source Null";
};

if (_projectile == "rhssaf_mine_pma3_ammo") then {
  if ((_unit isKindOf "Car") or (_unit isKindOf "Truck")) then {
    {
      _unit setHitPointDamage [_x, 1];
      } forEach ["HitLFWheel","HitLBWheel","HitLMWheel","HitRFWheel","HitRBWheel","HitRMWheel","HitLF2Wheel","HitLB2Wheel","HitRF2Wheel","HitRB2Wheel"];
      _unit setHitPointDamage ["HitBody", 0.3];
      _unit setHitPointDamage ["HitFuel", 0.7];
      _unit engineOn false;
    };
    if (_unit isKindOf "CaManBase") then {
      {
        _unit setHitPointDamage [_x, 1];
        } forEach ["HitLegs","HitHands","HitPelvis"];
        _unit setUnconscious true;
        _unit setUnconscious false;
      };
      false;
    };
