#pragma once

#include "../Classes.hpp"
#include "Game.hpp"
#include "TextureManager.hpp"

class graphChar{    

    public:  
    char * filename;

};

class BasicGraphics{
    public:

    private:

};

class FightGraphics{

    public:
        int FightSetup(graphChar ,Enemy);
        int FightSetup(graphChar,Enemy,Enemy);
        int FightSetup(graphChar,Enemy,Enemy,Enemy);
        int FightSetup(graphChar,Enemy,Enemy,Enemy,Enemy);           
    private:

};