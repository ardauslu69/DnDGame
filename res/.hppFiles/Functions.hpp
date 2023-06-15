#pragma once

#include <fstream>
#include <string>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
#include <iostream>

#include "Classes.hpp"

std::string ReadLine(int x,std::string path);

void invalid_input_check(int &x);

void invalid_input_check(double &x);

int FillTheVector(std::vector<Weapon> &W,int space);
int FillTheVector(std::vector<Armor> &A,int space);
int FillTheVector(std::vector<Potion> &P,int space);

int FillTheVector(std::vector<Other> &O,int space);
std::string GetCharacterName(int x);

int Random(int x);

int combine2Int(int a, int b);

int separateInts(int num,int nth_digit );

