#ifndef EVENTS_H
#define EVENTS_H

#include <iostream>
#include "chain.h"

struct Event
{
    int eventId;
    std::string Message = "";
};


class EventHandler1 : public BaseHandler<Event>
{
public:
    Event handle(Event& request) override
    {
        if (request.eventId > 3)
        {
            std::cout << "Error on 1st event handler" << std::endl;
            return request;
        }
        std::cout << "1st event handler" << std::endl;
        request.Message += ".";
        request.eventId++;

        return BaseHandler<Event>::handle(request);
    }
};

class EventHandler2 : public BaseHandler<Event>
{
public:
    Event handle(Event& request) override
    {
        if (request.eventId > 3)
        {
            std::cout << "Error on 2nd event handler" << std::endl;
            return request;
        }

        std::cout << "2nd event handler" << std::endl;
        request.Message += ".";
        request.eventId++;

        return BaseHandler<Event>::handle(request);
    }
};

class EventHandler3 : public BaseHandler<Event>
{
public:
    Event handle(Event& request) override
    {
        if (request.eventId > 3)
        {
            std::cout << "Error on 3rd event handler" << std::endl;
            return request;
        }

        std::cout << "3rd event handler" << std::endl;
        request.Message += ".";
        request.eventId++;

        return BaseHandler<Event>::handle(request);
    }
};

#endif