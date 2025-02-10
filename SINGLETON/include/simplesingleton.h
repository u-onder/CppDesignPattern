#ifndef SIMPLESINGLETON_H
#define SIMPLESINGLETON_H

#include <iostream>

class Singleton
{
private:
    static Singleton* _instance;

    Singleton() {}
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
public:
    static Singleton* instance()
    {
        if (!_instance)
        {
            _instance = new Singleton();
        }
        return _instance;
    }

    void doSomething()
    {
        std::cout << "Singleton does something" << std::endl;
    }
};

Singleton* Singleton::_instance = nullptr;

#endif