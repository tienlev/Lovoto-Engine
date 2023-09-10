#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
public:
    struct Singleton
    {
        StringName name;
        Object *ptr = nullptr;
        StringName class_name; // used for binding generation hinting
        bool user_created = false;
        Singleton(const StringName &p_name = StringName(), Object *p_ptr = nullptr, const StringName &p_class_name = StringName());
    };

private:
    static Engine *singleton;

public:
    static Engine get_singleton();
    Engine();
    ~Engine();
}

#endif // ENGINE_H