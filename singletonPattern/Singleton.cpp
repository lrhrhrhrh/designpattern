#include "Singleton.h"
#include <iostream>

using namespace std;

Singleton* Singleton::m_instance=0;

Singleton::Singleton(){
    cout<<"Singleton..."<<endl;
}

Singleton* Singleton::getInstance(){
    if(m_instance==0){
        m_instance = new Singleton();
    }
    return m_instance;
}