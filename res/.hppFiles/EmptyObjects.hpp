#pragma once 

#include "Classes.hpp"

const Weapon NoneWeapon("NoneW",0,0,0,false,false);
const Armor NoneArmor("NoneA" ,          0,0,false );
const Potion NonePotion("NoneP" ,0,"nonep");
const Other NoneOther("NoneO",0,"noneo");
const Magic NoneMagic("NoneM",0,"nonem",0);

const Enemy EmptyEnemy(0,"EmptyEnemey",0,0,0,0.0,0,0,NONEWeaponVECTOR,NONEArmorVECTOR,NONEPotionVECTOR,NONEOtherVECTOR,NONEMAGICVECTOR,"");

