#include "EnginePCH.h"

#include "Launcher/Launcher.h"

class RuntimeEngine : public Engine
{
public:
    RuntimeEngine() = default;
    
    void Run() override
    {
        Engine::Run();
        std::cout << "Runtime is Working!" << std::endl;
    }

    ~RuntimeEngine() override = default;
};

Engine* InitializeEngine(int argc, char* argv[])
{
    return new RuntimeEngine();
}
