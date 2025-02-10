#include <iostream>
#include <mutex>

class Lock
{
private:
    std::mutex& mtx;
public:
    Lock(std::mutex& m) : mtx{m}
    {
        std::cout << "Locking" << std::endl;
        mtx.lock();
    }
    ~Lock()
    {
        std::cout << "Unlocking" << std::endl;
        mtx.unlock();
    }
};
