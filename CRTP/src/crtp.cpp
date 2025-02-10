#include <iostream>

#include "basecrtp.h"
#include "base.h"


int main()
{
    Derived derived {};
    std::cout << derived.return_data() << std::endl;

    BaseCRTP<DerivedCRTP> baseCrtp {};
    std::cout << baseCrtp.return_data() << std::endl;
    
    return 0;
}