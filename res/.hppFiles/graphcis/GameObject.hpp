#pragma once

#include "Game.hpp"

class GameObject{

    public:

    GameObject(const char* TextureSheet,int x,int y);
    ~GameObject();

    void Update(int xpos,int ypos);
    void Render();

    private:

    int xpos;
    int ypos;

    SDL_Texture *objTexture;
    SDL_Rect srcRect,desRect;
    SDL_Renderer* renderer;

};