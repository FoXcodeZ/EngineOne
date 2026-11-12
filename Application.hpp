#pragma once
#include <SDL3/SDL.h>

namespace one
{
    class Application
    {
    public:
        bool Initialize();
        void Run();
        void Quit() const;
    private:
        SDL_Window* m_window {};
        SDL_Renderer* m_renderer {};
        SDL_Event m_event {};
    };
}