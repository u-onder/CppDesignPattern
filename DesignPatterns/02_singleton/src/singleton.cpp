#include <iostream>

#include "simplesingleton.h"
#include "meyerssingleton.h"

int main()
{
    Singleton* singleton = Singleton::instance();
    singleton->doSomething();

    MeyersSingleton& meyersSingleton = MeyersSingleton::instance();
    meyersSingleton.doSomething();
    
    return 0;
}