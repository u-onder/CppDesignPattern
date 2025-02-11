#include <iostream>

#include "container.h"

int main()
{
    Container c(5);
    c[2] = 3;
    std::cout << c[2] << std::endl; 
    return 0;
}
