#include "engine.h"

Engine::Engine()
{
    singleton = this;
}
Engine::get_singleton()
{
    return this->singleton;
}