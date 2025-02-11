#ifndef DERIVEDCRTP_H
#define DERIVEDCRTP_H

class DerivedCRTP;

template<typename T> 
class BaseCRTP
{
public:
    T& derived() 
    { 
        return static_cast<T&>(*this); 
    }
    int return_data() { return derived().get_value(); }
};

class DerivedCRTP : public BaseCRTP<DerivedCRTP> 
{
public:
    int get_value() const { return 10; }
};

#endif