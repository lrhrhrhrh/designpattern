#ifndef _QQGROUP_HPP_
#define _QQGROUP_HPP_

#include "Subject.h"
#include "Observer.h"
#include <list>
#include <string>
class QQGroup: public Subject{
public:
    QQGroup();
    
    void registerObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers(const std::string& msg);

private:
    std::list<Observer*> *_observers;
};



#endif