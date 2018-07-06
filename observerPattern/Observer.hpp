#ifndef _OBSERVER_HPP_
#define _OBSERVER_HPP_

#include <iostream>
#include <string>
#include <list>

class Observer{
public:
   
    virtual void Update(const std::string& msg) = 0;
    virtual std::string getName() = 0;
protected:
    Observer(){};
};

#endif