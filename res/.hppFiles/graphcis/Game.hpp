#ifndef GAME_HPP
#define GAME_HPP

#include "../../../src/include/SDL2/SDL.h"
#include "../../../src/include/SDL2/SDL_image.h"

#include "TextureManager.hpp"

#include <stdio.h>
#include <iostream>

class Game{
    public:
    Game();
    ~Game();

    void init(char *title,int xpos,int ypos,int width,int height,bool fulscreen);

    void handleEvents();
    void update();
    void render();
    void clean();

    bool running();

    static SDL_Renderer *renderer;
    
    private:
    bool isRunning=false;

    SDL_Window *window;

};

#endif