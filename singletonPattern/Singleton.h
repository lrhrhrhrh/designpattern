#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>
class Singleton{
private:
    static Singleton* m_instance;
protected:
    Singleton();
public:
    static Singleton* getInstance();
};
#endif