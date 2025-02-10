#ifndef MEYERSSINGLETON_H
#define MEYERSSINGLETON_H

#include <iostream>

class MeyersSingleton
{
private:
    MeyersSingleton() {}
    MeyersSingleton(const MeyersSingleton&) = delete;
    MeyersSingleton& operator=(const MeyersSingleton&) = delete;
public:
    static MeyersSingleton& instance()
    {
        static MeyersSingleton _instance;
        return _instance;
    }

    void doSomething()
    {
        std::cout << "Singleton does something" << std::endl;
    }
};

#endif