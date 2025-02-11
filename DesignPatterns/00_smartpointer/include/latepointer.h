#ifndef LATEPOINTER_H
#define LATEPOINTER_H

template <typename  T>
class LatePtr
{
private:
    T* _ptr;
    LatePtr(const LatePtr&);
    LatePtr& operator=(const LatePtr&);
public:
    explicit LatePtr(T* p=0) : _ptr(p){}
    ~LatePtr() { delete _ptr; }
    T& operator*() const 
    { 
        if (!_ptr)
            _ptr = new T();
        return *_ptr; 
    }
    T* operator->()
    { 
        if (!_ptr)
            _ptr = new T();
        return _ptr; 
    }
};

#endif