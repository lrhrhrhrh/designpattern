#ifndef _ROOMMATE_HPP_
#define _ROOMMATE_HPP_

#include "Observer.hpp"
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

std::string RoomMate::getName(){
    return _name;

}

void RoomMate::Update(const std::string &msg){
    std::cout<<"this is "<<_name<<std::endl;
    if(msg=="dianming"){
        std::cout<<"Action: "<<_action<<std::endl<<std::endl;

    }else{
        std::cout<<"Go on: "<<_now<<std::endl<<std::endl;
    }

}

#endif