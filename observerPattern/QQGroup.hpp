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

void QQGroup::registerObserver(Observer* observer){
    _observers->push_back(observer);
}

void QQGroup::removeObserver(Observer* observer){
    if(_observers->size()>0)
    _observers->remove(observer);
}

void QQGroup::notifyObservers(const std::string& msg){
    std::cout<<"Group message: "<<msg<<std::endl;
    std::list<Observer*>::iterator iter = _observers->begin();
    for(; iter!=_observers->end(); iter++){
        (*iter)->Update(msg);
    }

}


#endif