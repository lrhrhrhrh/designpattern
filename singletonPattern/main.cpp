#include "Singleton.h"
#include <iostream>

int main(){
    Singleton* sgn = Singleton::getInstance();
    std::cout<<"Hello England"<<std::endl;
    return 0;
}