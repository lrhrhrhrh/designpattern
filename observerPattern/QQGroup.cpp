#include "QQGroup.h"
// #include <string>

//  QQGroup::QQGroup(){
//         _observers = new std::list<Observer*>();
//     }
QQGroup::QQGroup(){
    _observers = new std::list<Observer*>();
}

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

