// ================================================================================
// FoXcodeZ Game Engine Learning Series: EngineOne
// Learning Material:
// Learn C++ and Make a Game from Scratch (Udemy Course by Jingtian Li)
// 0BSD Licence
// ================================================================================

#include "Application.hpp"
#include <memory>

int main()
{
    std::unique_ptr<one::Application> game {};

    game->Initialize();
    game->Run();
    game->Quit();
}