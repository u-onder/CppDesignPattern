#include <iostream>

#include "smartpointer.h"
#include "latepointer.h"

class Resource
{
    public:
    Resource() { std::cout << "Resource constructor" << std::endl; }
    ~Resource() { std::cout << "Resource destructor" << std::endl; }
    void doSomething() { std::cout << "Resource used" << std::endl; }
};

int main()
{
    SmartPtr<Resource> ptr1(new Resource());
    ptr1->doSomething();

    LatePtr<Resource> ptr2;
    ptr2->doSomething();
    return 0;
}
