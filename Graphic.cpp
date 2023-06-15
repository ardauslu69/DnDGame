#include "res/.hppFiles/graphcis/TextureManager.hpp"
#include "res./.hppFiles/graphcis/Game.hpp"
#include "res/.hppFiles/graphcis/GameObject.hpp"
#include "res./.hppFiles/graphcis/Graphics.hpp"

SDL_Texture * TextureManager::LoadTexture(const char* texture){
    
    SDL_Surface *TmpTexture=IMG_Load(texture);
    SDL_Texture *tex=SDL_CreateTextureFromSurface(Game::renderer,TmpTexture);
    SDL_FreeSurface(TmpTexture);
    return tex;
}

GameObject::GameObject(const char* TextureSheet,int x,int y){
    objTexture=TextureManager::LoadTexture(TextureSheet);

    xpos=x;
    ypos=y;
}   

GameObject::~GameObject(){

}

void GameObject::Update(int p_xpos,int p_ypos){
    xpos=p_xpos;
    ypos=p_ypos;

    srcRect.h=150;
    srcRect.w=550;
    srcRect.x=0;
    srcRect.y=0;

    desRect.x=xpos;
    desRect.y=ypos;
    desRect.h=srcRect.h*2;
    desRect.w=srcRect.w*2;


}

void GameObject::Render(){
    SDL_RenderCopy(Game::renderer,objTexture,&srcRect,&desRect);
}