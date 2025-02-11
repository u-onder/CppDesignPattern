#include <iostream>
#include "events.h"

int main()
{
    EventHandler1* handler1 = new EventHandler1();
    EventHandler2* handler2 = new EventHandler2();
    EventHandler3* handler3 = new EventHandler3();
    
    handler1->setNext(handler2)->setNext(handler3);

    Event event { 1, "Sample Event should go all over handlers without any error" };
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "Event ID: " << event.eventId << std::endl;
    std::cout << "Event Message: " << event.Message << std::endl;
    handler1->handle(event);   
    std::cout << "Event ID: " << event.eventId << std::endl;
    std::cout << "Event Message: " << event.Message << std::endl;


    Event event2 { 3, "Sample Event should stop at 2nd event handler" };
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "Event ID: " << event2.eventId << std::endl;
    std::cout << "Event Message: " << event2.Message << std::endl;
    handler1->handle(event2);   
    std::cout << "Event ID: " << event2.eventId << std::endl;
    std::cout << "Event Message: " << event2.Message << std::endl;
    return 0;
}