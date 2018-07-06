#ifndef _ROOMMATE_HPP_
#define _ROOMMATE_HPP_

#include "Observer.h"
#include <string>

class RoomMate: public Observer{
public:
    RoomMate(std::string name, std::string now, std::string action){
        _name = name;
        _action = action;
        _now = now;
    }

    void Update(const std::string& msg);
    std::string getName();

private:
    std::string _name;
    std::string _action;
    std::string _now;
};



#endif