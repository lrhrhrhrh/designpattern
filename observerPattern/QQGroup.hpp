#ifndef _QQGROUP_HPP_
#define _QQGROUP_HPP_

#include "Subject.hpp"
#include "Observer.hpp"
#include <list>
#include <string>
class QQGroup: public Subject{
public:
    QQGroup(){
        _observers = new std::list<Observer*>();
    }
    void registerObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers(const std::string& msg);

private:
    std::list<Observer*> *_observers;
};


#endif