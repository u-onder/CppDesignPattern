#ifndef STATELESS_H
#define STATELESS_H

#include <iostream>

class Member 
{
private:
    enum Membership {FREE, BASIC, PREMIUM };
    Membership type;
    int currentDownloads;
    std::string name;
public:
    Member(const std::string& n) : name(n), type(FREE), currentDownloads(0) {}
    void upgrade() 
    {
        switch(type)
        {
            case FREE:
                std::cout << "Upgrading to basic" << std::endl;
                type = BASIC;
                break;
            case BASIC:
                std::cout << "Upgrading to premium" << std::endl;
                type = PREMIUM;
                break;
            case PREMIUM:
                std::cout << "Already premium member!" << std::endl;
                break;
        }
    }
    bool canDownload()
    {
        switch (type)
        {
            case FREE:
                return currentDownloads < 1;
            case BASIC:
                return currentDownloads < 5;
            case PREMIUM:
                return true;
        }
        return false;
    }
    bool download() 
    {
        if (canDownload())
        {
            currentDownloads++;
            return true;
        }
        return false;
    }
};

#endif