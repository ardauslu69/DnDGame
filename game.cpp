#include "res/.hppFiles/graphcis/Game.hpp"
#include "res/.hppFiles/graphcis/TextureManager.hpp"
#include "res/.hppFiles/graphcis/GameObject.hpp"
// use struct to make a gameobject yada calss yaz ama bu dosyaya


GameObject*Furkan;
int FurkansXPOS=0;
int FurkansYPOS=0;

SDL_Renderer *Game::renderer=nullptr;

Game::Game(){

}
Game::~Game(){}

void Game::init(char * title,int xpos,int ypos,int width,int height,bool fullscreen){

    int flags=0;
    if(fullscreen){
        flags=SDL_WINDOW_FULLSCREEN;
    }

    if(SDL_Init(SDL_INIT_EVERYTHING)==0){
        std::cout << "Subsystems Initialised!..." << std::endl;

        window=SDL_CreateWindow(title,xpos,ypos,width,height,flags);
        renderer=SDL_CreateRenderer(window,-1,0);
        if(renderer){
            SDL_SetRenderDrawColor(renderer,255,255,255,255);
        }
        isRunning=true;
    }else{
        isRunning=false;
    }

    Furkan=new GameObject("res/.png/hazar1.png",350,0);

}

void Game::handleEvents(){
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type){
    case SDL_QUIT:
        isRunning=false;
        break;
    
    default:
        break;
    }
}

void Game::update(){
    Furkan->Update(FurkansXPOS,FurkansYPOS);
    FurkansXPOS++;
    FurkansYPOS++;
}

void Game::render(){
    SDL_RenderClear(renderer);
    Furkan->Render();
    SDL_RenderPresent(renderer);
}

void Game::clean(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Game has been cleaned"<<std::endl;
    
}

bool Game::running(){
    return isRunning;
}
