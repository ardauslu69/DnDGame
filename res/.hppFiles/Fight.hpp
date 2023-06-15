#pragma once

#include "Classes.hpp"
#include "EmptyObjects.hpp"
#include "Objects.hpp"
#include "Map.hpp"
#include "Constructers.hpp"
#include "Functions.hpp"

#include "graphcis/Game.hpp" // for SDL 



int *EnemyChooseAct(Enemy enemy);
int CharacterInventory();
int CharacterAttack();
int CharacterMagic();
int CharacterInteract();
int *CharacterChooseAct(CCharacter &character,Enemy &enemy1,Enemy& enemy2,Enemy & enemy3,Enemy &enemy4);
int ActualFight(CCharacter &character,Enemy &enemy1,int turn);
int ActualFight(CCharacter &character,Enemy &enemy1,Enemy &enemy2,int turn);
int ActualFight(CCharacter &character,Enemy& enemy1,Enemy& enemy2,Enemy& enemy3,int turn);
int ActualFight(CCharacter &character,Enemy &enemy1,Enemy& enemy2,Enemy & enemy3,Enemy &enemy4,int turn);

int Fight(CCharacter &character,Enemy enem1,Enemy enem2,Enemy enem3,Enemy enem4,int howmnayenemy,int turn=1);