#include "EnginePCH.h"
#include "Launcher.h"

int main(int argc, char* argv[])
{
    Engine* engine = InitializeEngine(argc, argv);
    engine->Run();
    delete engine;
    return 0;
}