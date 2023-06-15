#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#include <array>

#include "Classes.hpp"
#include "Functions.hpp"
#include "Constructers.hpp"
#include "Fight.hpp"
#include "Map.hpp"
#include "EmptyObjects.hpp"
#include "Objects.hpp"
#include "graphcis/Game.hpp"

int InventorySetup(int choice, std::vector<Weapon> &W,std::vector<Armor> &A,std::vector<Potion> &P,std::vector<Other> &O ,std::vector<Magic>&M,CCharacter &character);

int InitializeTheCharacter(CCharacter Character);