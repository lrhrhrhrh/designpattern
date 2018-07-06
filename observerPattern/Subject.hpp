#ifndef _SUBJECT_HPP_
#define _SUBJECT_HPP_

#include "Observer.hpp"
class Subject{
public:
    virtual ~Subject(){};
    virtual void registerObserver(Observer* obs)=0;
    virtual void removeObserver(Observer* obs)=0;
    virtual void notifyObservers(const std::string& msg)=0;
    
};

#endif