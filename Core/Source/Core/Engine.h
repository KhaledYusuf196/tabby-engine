#pragma once

class Engine
{
public:
    Engine() = default;
    virtual ~Engine() = default;
    virtual void Run();
};
