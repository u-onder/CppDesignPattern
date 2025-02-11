#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

template <typename  T>
class SmartPtr
{
    private:
    T* _ptr;
    SmartPtr(const SmartPtr&);
    SmartPtr& operator=(const SmartPtr&);
    public:
    explicit SmartPtr(T* p=0) : _ptr(p){}
    ~SmartPtr() { delete _ptr; }
    T& operator*() const { return *_ptr; }
    T* operator->() const { return _ptr; }
};

#endif