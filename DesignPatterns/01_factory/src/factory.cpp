#include <iostream>

#include "object.h"

int main()
{
    ObjectFactory factory("Apple");
    Object* obj1 = factory.create("iPhone");
    Object* obj2 = factory.create("iPhone");
    Object* obj3 = factory.create("iPad");
    obj1->print();
    obj2->print();
    obj3->print();
    delete obj1;
    delete obj2;
    delete obj3;
    return 0;
}
