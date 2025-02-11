#include "stateless.h"
#include "statefull.h"

int main () 
{
    Member m1("John");
    m1.upgrade();
    m1.upgrade();
    m1.upgrade();
    m1.upgrade();
    m1.download();
    m1.download();

    MembershipExt m2("Jane");
    m2.upgrade();
    m2.upgrade();
    m2.upgrade();
    m2.upgrade();
    m2.download();
    m2.download();

    return 0;
}
