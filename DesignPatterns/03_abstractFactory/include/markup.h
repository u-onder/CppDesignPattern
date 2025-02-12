#include <iostream>

class IFactory 
{
protected:
    virtual ~IFactory() {};
public:
    virtual std::string createStr(std::string message) = 0;
};

class HTMLFactory: public IFactory
{
protected:
    std::string _class;
    std::string _style;
public:
    HTMLFactory(std::string classStr, std::string styleStr) : _class(classStr), _style(styleStr) {}
    std::string createStr(std::string message) override 
    { 
        return "<span class=\"" + _class + "\" style=\"" + _style + "\">" + message + "</span>"; 
    }
};

class JsonFactory: public IFactory
{
protected:
    std::string _attribute;
public:
    JsonFactory(std::string attStr) : _attribute(attStr) {}
    std::string createStr(std::string message) override 
    { 
        return "{ \"" + _attribute + "\": \"" + message + "\" }"; 
    }
};

class MarkupFactory
{
private:
    IFactory* _factory;
public:
    MarkupFactory(IFactory* factory) : _factory(factory) {}
    std::string createStr(std::string message) 
    {
        return _factory->createStr(message);
    }
};