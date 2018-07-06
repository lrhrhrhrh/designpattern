#include "RoomMate.hpp"

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