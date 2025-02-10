#ifndef DERIVED_H
#define DERIVED_H

class Base
{
protected:
    virtual int get_value() const = 0;
public:
    virtual ~Base() {}
    int return_data() const { return this->get_value(); }
};

class Derived : public Base 
{
private:
    int get_value() const { return 10; }
};

#endif