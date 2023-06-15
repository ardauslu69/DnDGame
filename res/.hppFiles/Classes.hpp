#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <array>
#include <vector>
#include <fstream>
#include <math.h>

/* create classes for weapon types like 
weapon 
armor
potion
others

and create a different file for map cuz it get very untidy */

//int error_counter=1;


const int INVENTORY_SPACE=4;

struct  Map{
    std::array<int,4> value;

    std::array<int,4> out;//5
    std::array<int,4> in;
};

class EquipmentBase{
public:// it allow access like object.name outside of class 
    std::string name;
    int price;
};

class Magic{
    public:

    std::string name;
    int attack;
    int mana;
    int type;
    std::string stype;

    Magic(std::string ,int,std::string,int);
};

class Weapon:public EquipmentBase {
    public:// it allow access like object.name outside of class 
    int attack;
    bool isDoubleAttack;
    bool isDoubleHanded;
    bool isEquipted;
    int Count;
    //std::string special;//make a list of special weapons and edit this a int
    Weapon(std::string Pname,int xattack,int xprice,int PCount=0, bool is2Attack=false,bool is2Handed=false){
    /* 
    FIND A WAY TO HANDLE PROJECTILES
     */
    name=Pname;
    attack=xattack;
    price=xprice;
    isDoubleAttack=is2Attack;
    isDoubleHanded=is2Handed;
    Count=PCount;
    }
};

class Armor:public EquipmentBase{
    public:// it allow access like object.name outside of class 
    int defence;
    bool isShield;
    Armor(std::string Pname,int xdefence,int xprice,bool PisShield=false){
    name=Pname;
    defence=xdefence;
    price=xprice;
    }
};
 
class Potion:public EquipmentBase{
    public :// it allow access like object.name outside of class 
    int type;
    std::string stype;
    Potion(std::string,int,std::string);
};

class Other:public EquipmentBase{
    public:// it allow access like object.name outside of class 
    int type;
    std::string stype;
    Other(std::string p_name,int p_price,std::string p_type);
    };

class Mission{

};

const std::vector<Magic> NONEMAGICVECTOR;
const std::vector<Weapon> NONEWeaponVECTOR;
const std::vector<Armor> NONEArmorVECTOR;
const std::vector<Potion> NONEPotionVECTOR;
const std::vector<Other> NONEOtherVECTOR;

class CCharacter{
	public:

	int Class;//1 fati 2 arda 3 furkan 4 haktan
    std::string name;
    std::array<int,4> Location;
    int level;

	int vitality;
	int agility;
	int wisdom;
	int strength;

	int health;
	int prestige;//misions and troumnets
	int mana;
	int money;

	double dodgeProbility;//furkan's favor
	int attack;//arda's favor
	int defence;//haktan's
    int exp;

    std::vector<Weapon> weapons;
    std::vector<Armor> armors;
	std::vector<Potion> potions;
	std::vector<Other> others;

	std::vector<Magic> magic;
    std::vector<Mission> missions;

    std::vector<Weapon> W_equipteds;
    std::vector<Armor> A_equipteds;

    int LevelUp(int level,CCharacter &ConstCharacter);
    int Equip(Weapon weapon);
    int GoTo(std::array<int,4>);
    int Equip(Armor armor);
    int UnEquip(int where,int type);//where can be either 0 or 1 
    int ThrowEquipment(int place,int type);// 1 weapon 2 armor 3 potion 4 others
    int UseMagic(Magic magic);
    int UsePotion(Potion potion,CCharacter ConstCharacter);
    CCharacter();

};


class Enemy{
    public:

    char * filePath;
    bool isSpecial;
    std::string name;

    // They give you these
	int money;

    int health;
    int mana;
	double dodgeProbility;
	int attack;
	int defence;

	std::vector<Weapon> weapons;
	std::vector<Armor> armors;
	std::vector<Potion> potions;
	std::vector<Other> others;

	std::vector<Magic> magic;

    Enemy(bool ,std::string ,int ,int ,int ,double ,int ,int,
    std::vector<Weapon> ,std::vector<Armor> ,std::vector<Potion> ,std::vector<Other>,std::vector <Magic>,char*);
    int GetHit(Weapon);
    int GetHit(Magic);


};

