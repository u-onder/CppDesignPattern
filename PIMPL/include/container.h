#ifndef _CONTAINER_H
#define _CONTAINER_H

#include <vector>

class Container
{
private:
    Container(const Container& other);
    Container& operator=(const Container& other);
    class Impl 
    {
        public:
            std::vector<int> vec;
            Impl (const size_t size)  
            {
                vec.resize(size);
            };
    };
    Impl * _impl;
public:
    Container(const size_t size) : _impl(new Impl(size)) {}
    int& operator[] (const int index)
    {
        return _impl->vec[index];
    }
    const int& operator[] (const int index) const
    {
        return _impl->vec[index];
    }
};

#endif