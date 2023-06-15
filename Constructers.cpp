#include "res/.hppFiles/EmptyObjects.hpp" 
#include "res/.hppFiles/Constructers.hpp"

int SetupLevel(int C,CCharacter &ConstCharacter){
    switch(C){
        case 1://strength
            ConstCharacter.attack+=3;
            ConstCharacter.strength++;
        case 2://agility
        ConstCharacter.agility++;
            if(ConstCharacter.Class==3)
                ConstCharacter.dodgeProbility+=1.75;
            else
                ConstCharacter.dodgeProbility+=1.5;
        case 3://wisdom
        ConstCharacter.wisdom++;
            if(ConstCharacter.Class==1)
                ConstCharacter.mana+=10;
            else
                ConstCharacter.mana+=5;
        case 4://vitality
        ConstCharacter.vitality++;
        ConstCharacter.health+=4;
    }
    return 1;
}

// SEARCH WITH OBJECT'S NAME 
int AddAnEquipment(Weapon weapon,CCharacter &Character){
    //Itirate through vector
        if(Character.weapons.size()>INVENTORY_SPACE){
        return -1;
    }
    if(Character.weapons.size()==INVENTORY_SPACE){
        return 0;
    }
    if(Character.weapons.size()<INVENTORY_SPACE){
        int sz=Character.weapons.size();
        int it=0;
        while(sz>it){
            if(Character.weapons.at(it).name=="NoneW"){
                Character.weapons.at(it)=weapon;
                return 1;
            }
            it++;
        }
    }
    return 1;
}
int AddAnEquipment(Armor armor,CCharacter &Character){
    #define weapons armors
        if(Character.weapons.size()>INVENTORY_SPACE){
        return -1;
    }
    if(Character.weapons.size()==INVENTORY_SPACE){
        return 0;
    }
    if(Character.weapons.size()<INVENTORY_SPACE){
        int sz=Character.weapons.size();
        int it=0;
        while(sz>it){
            if(Character.weapons.at(it).name=="NoneA"){
                Character.weapons.at(it)=armor;
                return 1;
            }
            it++;
        }
    }
    #undef weapons
    return 1;
}
int AddAnEquipment(Potion potion,CCharacter& Character){
    #define weapons potions
        if(Character.weapons.size()>INVENTORY_SPACE){
        return -1;
    }
    if(Character.weapons.size()==INVENTORY_SPACE){
        return 0;
    }
    if(Character.weapons.size()<INVENTORY_SPACE){
        int sz=Character.weapons.size();
        int it=0;
        while(sz>it){
            if(Character.weapons.at(it).name=="NoneP"){
                Character.weapons.at(it)=potion;
                return 1;
            }
            it++;
        }
    }
    #undef weapons
    return 1;
}
int AddAnEquipment(Other other,CCharacter &Character){
    #define weapons others
    if(Character.weapons.size()>INVENTORY_SPACE){
        return -1;
    }
    if(Character.weapons.size()==INVENTORY_SPACE){
        return 0;
    }
    if(Character.weapons.size()<INVENTORY_SPACE){
        int sz=Character.weapons.size();
        int it=0;
        while(sz>it){
            if(Character.weapons.at(it).name=="NoneO"){
                Character.weapons.at(it)=other;
                return 1;
            }
            it++;
        }
    }
    #undef weapons
    return 1;
}

int LearnMagic(Magic magic,CCharacter& character){
    character.magic.push_back(magic); 
    return 1;  
}

int CCharacter::UseMagic(Magic magic){// This function does not give damanage
//                        ı will make a seperate function for dealing with damage and stuff && add that into this function
    if(mana < 0)
        return 0;// cannot use the magic
    if(mana >= magic.mana)
        mana-=magic.mana;
    return 1;
}

int RealUseMagic(){

}

int CCharacter::UsePotion(Potion potion,CCharacter ConstCharacter){
    switch (potion.type){//POTIONS EFFECTS
        case 1:// minor heal
        health+=(health/2);
        if(health>ConstCharacter.health)
            health=ConstCharacter.health;
        break;
        case 2:// major heal
        health=ConstCharacter.health;
        break;
        case 3:
        break;
    }
    return 1;
}

int CCharacter::LevelUp(int level,CCharacter &ConstCharacter){
    using namespace std;
        errlevel:
    std::cout <<"What stat do you want to increase"<<std::endl;
    cout << "1) Strength"<<endl<<"2) Agility"<<endl<<"3) Wisdom "<<endl <<"4) Vitality"<<endl;
    int levelchoice;
    cin >>levelchoice;
    if(ConstCharacter.level==1){
        ConstCharacter.health+=2;
        if(ConstCharacter.Class==1){//fati
            ConstCharacter.mana+=10;
            // add new magic to fati
            LearnMagic(NoneMagic,ConstCharacter);

            SetupLevel(levelchoice,ConstCharacter);
        }else if(ConstCharacter.Class==2){//arda
            ConstCharacter.attack+=4;
            SetupLevel(levelchoice,ConstCharacter);
        }else if(ConstCharacter.Class==3){//furkan
            ConstCharacter.dodgeProbility+=3;
            SetupLevel(levelchoice,ConstCharacter);
        }else if(ConstCharacter.Class==4){//haktan
            ConstCharacter.defence+=2;
            SetupLevel(levelchoice,ConstCharacter);
        }else{
            return 0;
        }
    }else if(ConstCharacter.level==2){
      ConstCharacter.health+=4;
        if      (ConstCharacter.Class==1){//fati
            ConstCharacter.mana+=15;
            //add a magic to fati
            LearnMagic(NoneMagic,ConstCharacter);

            SetupLevel(levelchoice,ConstCharacter);;
        }else if(ConstCharacter.Class==2){//arda
            ConstCharacter.attack+=5;
            SetupLevel(levelchoice,ConstCharacter);
        }else if(ConstCharacter.Class==3){//furkan
            ConstCharacter.dodgeProbility+=3;
            SetupLevel(levelchoice,ConstCharacter);
        }else if(ConstCharacter.Class==4){//haktan
            ConstCharacter.defence+=3;
            SetupLevel(levelchoice,ConstCharacter);
        }else{
            return 0;
        }  
    }
    ConstCharacter.level++;
    *this=ConstCharacter;
    // ı think they are same
    //Character=ConstCharacter;
    return 1;
}

Enemy::Enemy(bool P_isSpecial,std::string name,int money,int health,int mana,double DP,int attack,int defence,
std::vector<Weapon> P_W,std::vector<Armor> A,std::vector<Potion> P,std::vector<Other> O,std::vector <Magic> M=NONEMAGICVECTOR,char*filePath=""){

}

CCharacter::CCharacter(){
    level=1;

	vitality= 0;
	agility=  0;
	wisdom=   0;
	strength= 0;

	health=  1;
	prestige=0;
	money=   0; 
	mana=    0;

	dodgeProbility = 0;
	attack= 0;
    defence=0;
    exp=0;

    weapons.reserve(4);//capacity=4 but it can expand
    armors.reserve(4);
    potions.reserve(4);
    potions.reserve(4);

    W_equipteds.reserve(2);
    A_equipteds.reserve(2);
}

Magic::Magic(std::string p_name,int p_mana,std::string p_type,int p_attack){
        stype=p_type;
        int itype;
        if(p_type=="frbl"){
             itype=1;
             attack=p_attack;
        }
           
        if(p_type=="mgcmsl"){
            itype=2;
            attack=p_attack;
        }
           
        if(p_type=="heal"){
            itype=2;
        }
    
        // . 
        // .
        // .
        name=p_name;
        mana=p_mana;
        type=itype;
    }

Potion::Potion(std::string Pname,int Pprice,std::string Ptype){
        stype=Ptype;
        int itype=0;
        if((Ptype=="mhp")){
            itype=1;
        }
        else if((Ptype=="mahl")){
            itype=2;
        }
      
        //.
        //.
        //.
        name=Pname;
        price=Pprice;
        type=itype;
    } 

Other::Other(std::string p_name,int p_price,std::string p_type){
        stype=p_type;
        int itype=0;
        if(p_type=="Acc1"){
            itype=1;
        }
        name=p_name;
        price=p_price;
        type=itype;
    }

int CCharacter::Equip(Weapon weapon){
    //for weapons u can have 1 one handed and 1 projectile or 1 twohanded
    for(int i=0;i<INVENTORY_SPACE;i++){
        if(weapons.at(i).name==weapon.name){
            break;
        }
        if(i==3){
            return 0;
        }
    }
    // check if there is a weapon as the parametr in the inventory
    int res=0;
    for(int i=0;i<2;i++){
        if(W_equipteds.at(i).isDoubleHanded){
            res+=1;
        }
    }
    if(res==1&& weapon.isDoubleHanded){
        return 0;
    }
    if(W_equipteds.size()>2){
        return -1;
    }
    W_equipteds.push_back(weapon);
    return 1;
}
int CCharacter::Equip(Armor armor){
    //you can have a armor and if your equipted weapon is one handed you can use shiled
    for(int i=0;i<INVENTORY_SPACE;i++){
        if(armors.at(i).name==armor.name){
            break;
        }
        if(i==3){
            return 0;
        }
    }
    // check if there is a weapon as the parametr in the inventory

    bool res=0;
    bool res1=armor.isShield;
    for(int i=0;i<2;i++){
        if(W_equipteds.at(i).isDoubleHanded){
            res=1;
            break;
        }
    }
    // check if its 2 handed an a shield
    if(res&&res1){
        return 0;
    }
    res=0;
    for(int i=0;i<2;i++){
        if(A_equipteds.at(i).isShield){
            res=1;
        }
    }
    // check if there is two shileds
    if(armor.isShield&&res){
        return 0;
    }
    if(A_equipteds.size()>2){
        return -1;
    }
    A_equipteds.push_back(armor);
    return 1;
}

int CCharacter::UnEquip(int where,int type){
    // 1 is weapons  2 is armors
    if(type==1){
        W_equipteds.at(where)=NoneWeapon;
    }else if(type==2){
        A_equipteds.at(where)=NoneArmor;
    }else{
        return -1;
    }
    return 1;
}
int CCharacter::ThrowEquipment(int place,int type){
    switch(type){
        case 1:// weapon
        weapons.at(place)=NoneWeapon;
        case 2: // armor
        armors.at(place)=NoneArmor;
        case 3: //potion
        potions.at(place)=NonePotion;
        case 4://other
        others.at(place)=NoneOther;
    }

}
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
int CCharacter::GoTo(std::array<int,4> loc){
    //checks if character can go loc 
    if(loc.at(0)!=Location.at(0)||loc.at(7)!=Location.at(7))// check if loc is countery or region
        return 0;// like this
    if(Location.at(0)!=0){// you are in a countery 
        // do with ID numbers
    }else{//                 you are in a region

    }
    Location=loc;
}

int Enemy::GetHit(Weapon weapon){
    if(weapon.Count!=0){
        if(weapon.isDoubleAttack){
            health-=weapon.attack*2;
        }
        health-=weapon.attack;
    }else{
       
    }
}

int Enemy::GetHit(Magic magic){
    health-=magic.attack;
}

