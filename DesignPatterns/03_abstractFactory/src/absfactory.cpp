#include <iostream>

#include "markup.h"

int main()
{
    HTMLFactory htmlFactory("myClass", "myStyle");
    JsonFactory jsonFactory("myAttribute");


    MarkupFactory _htmlFactory(&htmlFactory);
    std::cout << "Factory output from html factory:" << std::endl;
    std::cout << _htmlFactory.createStr("Hello World") << std::endl;
    
    
    MarkupFactory _jsonFactory(&jsonFactory);
    std::cout << "Factory output from json factory:" << std::endl;
    std::cout << _jsonFactory.createStr("Hello World") << std::endl;

    return 0;
}
