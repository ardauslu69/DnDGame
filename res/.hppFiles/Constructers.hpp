#pragma once 

#include "Functions.hpp"
#include "Classes.hpp"

int SetupLevel(int C,CCharacter&);

// SEARCH WITH OBJECT'S NAME 
int AddAnEquipment(Weapon weapon,CCharacter&);
int AddAnEquipment(Armor armor,CCharacter&);
int AddAnEquipment(Potion potion,CCharacter&);
int AddAnEquipment(Other other,CCharacter&);
/* int CCharacter::Equip(Weapon weapon);
int CCharacter::Equip(Armor armor);
int CCharacter::UnEquip(int where,int type);
int CCharacter::ThrowEquipment(int place,int type); */
 /*
    0 th is countery
    1 this  region
    2 th is city
    3 th is town 
    4 th is shop
    5 th is dungeon
    6 th is forest
    7 th is 0
    8 th is 0
    9 th is 0       pointers
    10th is 0
   */
/* int CCharacter::GoTo(std::array<int,10> loc); */
int LearnMagic(Magic magic,CCharacter &character);
int RealUseMagic();

/* int CCharacter::LevelUp(int level); */
