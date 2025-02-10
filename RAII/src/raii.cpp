#include <iostream>

#include "lock.h"

int main()
{
    std::mutex m;
    std::cout << "Starting" << std::endl;
    try
    {
        Lock l(m);
        std::cout << "Doing someting" << std::endl;
        throw std::exception();
    }
    catch(...)
    {
        std::cout << "Exception caught" << std::endl;
    }
    
    std::cout << "Done" << std::endl;
    return 0;
}
