#include <iostream>

#include "res/.hppFiles/Setup.hpp"
#include "res/.hppFiles/graphcis/Game.hpp"

Game *game=nullptr;

int main( int argc, char *argv[] )
{
    game =new Game();
    char * windowName="Fati Game";
    game->init(windowName,SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED,1453,800,false);

    const int FPS=60;
    const int frameDelay=1000/FPS;

    Uint32 FrameStart;
    int FrameTime;

    while(game->running()){

        FrameStart =SDL_GetTicks();
        game->handleEvents();
        game->update();
        game->render();

        FrameTime=SDL_GetTicks()-FrameStart;
        if(frameDelay>FrameTime){
            SDL_Delay(frameDelay-FrameTime);
        }
    }

    game->clean();

    return 0;
}