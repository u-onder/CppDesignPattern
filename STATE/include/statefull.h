#ifndef STATEFULL_H
#define STATEFULL_H

#include <iostream>

class Membership
{
private:
    std::string name;
public:
    Membership(const std::string& n) : name(n) {}
    const std::string& getName() { return name; }
    virtual int download_per_day() const = 0;
    virtual Membership* upgrade() = 0;
};

class PremiumMember : public Membership
{
public:
    PremiumMember() : Membership("Premium") {};
    int download_per_day() const override
    {
        return 100;
    }
    Membership* upgrade() override 
    {
        std::cout << "Already Premimum Member" << std::endl;
        return this;
    }
};
class BasicMember : public Membership 
{
public:
    BasicMember() : Membership("Basic") {};
    int download_per_day() const override
    {
        return 5;
    }
    Membership* upgrade() override 
    {
        std::cout << "Upgrading to premium" << std::endl;
        return new PremiumMember();
    }
};
class FreeMember : public Membership 
{
public:
    FreeMember() : Membership("Free") {};
    int download_per_day() const override
    {
        return 1;
    }
    Membership* upgrade() override 
    {
        std::cout << "Upgrading to basic" << std::endl;
        return new BasicMember();
    }
};
class MembershipExt 
{
private:
    Membership *_role;
    std::string _name;
    int _currentDownloads;
public:
    MembershipExt(const std::string& n) : _name(n), _currentDownloads(0), _role(new FreeMember()){}
    const std::string getName() { return _name; }
    bool canDownload() const { return (_role->download_per_day() - _currentDownloads) > 0; }
    bool download() 
    {
        if (canDownload())
        {
            _currentDownloads++;
            return true;
        }
        return false;
    }
    void upgrade() 
    {
        _role = _role->upgrade();
    }
};

#endif