#include <iostream>

class Object
{
friend class ObjectFactory;
private:
    Object(std::string manufacturer, std::string name, int serialNumber) : manufacturer(manufacturer), name(name), serialNumber(serialNumber) {};
private:
    std::string manufacturer;
    std::string name;
    int serialNumber;
    Object() {};
public:
    ~Object() {};
    void print() { std::cout << "[" << manufacturer << "]" << name << " SN:" << serialNumber <<std::endl; };
};

class ObjectFactory
{
private:
    std::string manufacturer;
    int serialNumber = 1128376;
public:
    ObjectFactory(std::string manufacturer) : manufacturer(manufacturer) {};
    Object* create(std::string name) 
    { 
        serialNumber++;
        return new Object(manufacturer, name, serialNumber); 
    };
};