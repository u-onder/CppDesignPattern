#ifndef CHAIN_H
#define CHAIN_H

#include <iostream>

template <typename T>
class IHandler
{
public:
    virtual ~IHandler() {}
    virtual IHandler<T>* setNext(IHandler<T>* handler) = 0;
    virtual T handle(T& request) = 0;
};

template <typename T>
class BaseHandler : public IHandler<T>
{
private:
    IHandler<T>* nextHandler;
public:
    BaseHandler() : nextHandler(nullptr) {}
    IHandler<T>* setNext(IHandler<T>* handler) override
    {
        this->nextHandler = handler;
        return handler;
    }
    T handle(T& request) override
    {
        if (this->nextHandler)
        {
            return this->nextHandler->handle(request);
        }
        return request;
    }
};

#endif