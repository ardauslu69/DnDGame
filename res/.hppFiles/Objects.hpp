#pragma once

#include <vector>
#include "Classes.hpp"

// WEAPONS
// in double handede weapons add a crictice attack percentage
//                                   doubleattack doublehanded
const Weapon Spear("Spear",           15,150,0,   false,        true);
const Weapon Dagger("Dagger",         5,50,0,false,false);
const Weapon ShortSword("Short Sword",15,100,0,false,false);
const Weapon Claymore("Claymore",     25,400,0,false,true);
const Weapon GreatSword("Great Sword",15,200,0,false,true);
const Weapon LongSword("Long Sword",  15,200,0,false,true);
const Weapon GreatAxe("Great Axe",    20,250,0,false,true);
const Weapon Mace("Mace",             23, 350, false, false);

// DOUBLE ATTACK
const Weapon WoodenStaff("Wooden Staff",  5,100,0,true,true);
const Weapon DoubleDagger("Double Dagger",8,120,0,true,true);
const Weapon DoubleAxe("Double Axe",      10,150,0,true,true);

// PROJECTILES
const Weapon Bow("Bow",                      5,100,10,false,false);//10
const Weapon Dart("Dart",                    5,100,5,false,false);//5
const Weapon ThrowingKnives("Throwing Knives",5,100,5,false,false);//5

// ARMORS 


const Armor LeatherArmor("Leather Armor",4,150,false);
const Armor FurArmor("Fur Armor",        6,250,false);
const Armor ChainArmor("Chain Armor",    10,350,false);
const Armor IronArmor("Iron Armor",      12,500,false);

// SHIELDS
const Armor CommonShield("Common Shield", 2,200,true);

// POTIONS


const Potion MinorHealthPotion("Minor Health Poiton",50,"mhl");
const Potion MajorHealthPotion("Major Health Poiton",150,"mahl");
const Potion RagePotion("Rage Poiton",200,"rp");
const Potion FullHealPotion("Full Heal Potion",250,"fhp");
const Potion MinorManaPotion("Minor Mana Potion",75,"mmp");
const Potion MajorManaPotion("Major Mana Poiton",200,"mamp");

// OTHERS



// ACCESSORYS

const Other Accessory1("Acc1",300,"acc1");

// MAGIC



const Magic FireBall("Fire Ball",10,"frbl",10);
const Magic MagicMissile("Magic Missile",20,"mgmsl",20);
const Magic Heal("Heal",15,"heal",0);

// FATI LEVEL UP MAGICS
//level 1 to 2

//level 2 to 3

//level 3 to 4


// ENEMY 

const std::vector<Weapon> GoblinWeapons;
const std::vector<Armor> GoblinArmors;
const std::vector<Potion> GoblinPotions;
const std::vector<Other> GoblinOthers;
const std::vector <Magic> GoblinMagic;


/* Enemy Goblin(false,"Goblin",15,12,0,3.4,4,2,GoblinWeapons,GoblinArmors,GoblinPotions,GoblinOthers,""); */

