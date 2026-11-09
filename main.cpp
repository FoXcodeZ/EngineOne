// ================================================================================
// FoXcodeZ Game Engine Learning Series: EngineOne
// Learning Material:
// Learn C++ and Make a Game from Scratch (Udemy Course by Jingtian Li)
// 0BSD Licence
// ================================================================================

#include <iostream>
#include <SDL3/SDL.h>

int main()
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window {};
    SDL_Renderer* renderer {};

    SDL_CreateWindowAndRenderer("EngineOne",
        800, 600,
        SDL_WINDOW_RESIZABLE,
        &window, &renderer);

    SDL_Event event {};

    while (event.type != SDL_EVENT_QUIT)
    {
        SDL_PollEvent(&event);
    }

    SDL_Quit();
}
