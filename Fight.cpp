#include "res/.hppFiles/Fight.hpp"

int *EnemyChooseAct(Enemy enemy){// Attack/magic

}

int CharacterInventory(){
    
}
int CharacterAttack(){

}
int CharacterMagic(){

}
int CharacterInteract(){
    
}
int *CharacterChooseAct(CCharacter &character,Enemy &enemy1,Enemy& enemy2,Enemy & enemy3,Enemy &enemy4){
    static int response[5];
    std::cout << "1.Attack 2.Maigc 3.Inventory 4.Interact"<<std::endl;
    // get input
    int input;
    std::cin >> input ;
    if(input==1){
        // display weapons
        //choose weapon
        Weapon chosenW=GreatAxe;
       //display enemys
       //choose enemy
       enemy1.GetHit(GreatAxe);

    }else if(input==2){
        Magic chosenM=FireBall;
        if(chosenM.attack >0){
            enemy1.GetHit(chosenM);
        }else{

        }
        }else if(input == 3){

    }else if(input ==4){

    }

    return response;
}
int ActualFight(CCharacter &character,Enemy &enemy1,int turn){
    Enemy EmptyEnemyCos(0,"EmptyEnemey",0,0,0,0.0,0,0,NONEWeaponVECTOR,NONEArmorVECTOR,NONEPotionVECTOR,NONEOtherVECTOR,NONEMAGICVECTOR,"");
    while(enemy1.health > 0){
        if(turn){// ı have the turn 
            int *response=CharacterChooseAct(character,enemy1,EmptyEnemyCos,EmptyEnemyCos,EmptyEnemyCos);

            
        }else{// turn on the enemy
            EnemyChooseAct(enemy1);
        }
        
        if(character.health <=0)
            return -1;
        if(enemy1.health <=0)
            return 1;
    }

    if(character.health <= 0 )
        return -1;
    if(enemy1.health <= 0)
        return 1;
    
}
int ActualFight(CCharacter &character,Enemy &enemy1,Enemy &enemy2,int turn){
      Enemy EmptyEnemyCos(0,"EmptyEnemey",0,0,0,0.0,0,0,NONEWeaponVECTOR,NONEArmorVECTOR,NONEPotionVECTOR,NONEOtherVECTOR,NONEMAGICVECTOR,"");
    while(enemy1.health > 0){
        if(turn){// ı have the turn 
            int *response=CharacterChooseAct(character,enemy1,EmptyEnemyCos,EmptyEnemyCos,EmptyEnemyCos);

            
        }else{// turn on the enemy
            EnemyChooseAct(enemy1);
        }
        
        if(character.health <=0)
            return -1;
        if(enemy1.health <=0)
            return 1;
    }

    if(character.health <= 0 )
        return -1;
    if(enemy1.health <= 0)
        return 1;
    
}
int ActualFight(CCharacter &character,Enemy& enemy1,Enemy& enemy2,Enemy& enemy3,int turn){
     Enemy EmptyEnemyCos(0,"EmptyEnemey",0,0,0,0.0,0,0,NONEWeaponVECTOR,NONEArmorVECTOR,NONEPotionVECTOR,NONEOtherVECTOR,NONEMAGICVECTOR,"");
    while(enemy1.health > 0){
        if(turn){// ı have the turn 
            int *response=CharacterChooseAct(character,enemy1,EmptyEnemyCos,EmptyEnemyCos,EmptyEnemyCos);

            
        }else{// turn on the enemy
            EnemyChooseAct(enemy1);
        }
        
        if(character.health <=0)
            return -1;
        if(enemy1.health <=0)
            return 1;
    }

    if(character.health <= 0 )
        return -1;
    if(enemy1.health <= 0)
        return 1;
    
}
int ActualFight(CCharacter &character,Enemy &enemy1,Enemy& enemy2,Enemy & enemy3,Enemy &enemy4,int turn){
     Enemy EmptyEnemyCos(0,"EmptyEnemey",0,0,0,0.0,0,0,NONEWeaponVECTOR,NONEArmorVECTOR,NONEPotionVECTOR,NONEOtherVECTOR,NONEMAGICVECTOR,"");
    while(enemy1.health > 0){
        if(turn){// ı have the turn 
            int *response=CharacterChooseAct(character,enemy1,EmptyEnemyCos,EmptyEnemyCos,EmptyEnemyCos);

            
        }else{// turn on the enemy
            EnemyChooseAct(enemy1);
        }
        
        if(character.health <=0)
            return -1;
        if(enemy1.health <=0)
            return 1;
    }

    if(character.health <= 0 )
        return -1;
    if(enemy1.health <= 0)
        return 1;
    
}

int Fight(CCharacter &character,Enemy enem1,Enemy enem2,Enemy enem3,Enemy enem4,int howmnayenemy,int turn){
    if(howmnayenemy>4||howmnayenemy<1)
        return -1;
    /* switch(howmnayenemy){
        case 1:

        case 2:
            
        case 3:

        case 4:
    } */
}