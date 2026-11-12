#include "Application.hpp"

bool one::Application::Initialize()
{
    return SDL_CreateWindowAndRenderer("EngineOne",
        1024, 768,
        SDL_WINDOW_RESIZABLE,
        &m_window, &m_renderer);
}

void one::Application::Run()
{
    while (m_event.type != SDL_EVENT_QUIT)
    {
        SDL_PollEvent(&m_event);
    }
}

void one::Application::Quit() const
{
    if (m_renderer != nullptr)
    {
        SDL_DestroyRenderer(m_renderer);
    }
    if (m_window != nullptr)
    {
        SDL_DestroyWindow(m_window);
    }
    SDL_Quit();
}
