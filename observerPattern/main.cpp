#include <iostream>
#include "QQGroup.hpp"
#include "RoomMate.hpp"

using namespace std;


int main(){

    RoomMate* B = new RoomMate("B", "sleeping", "get dressed and run to classroom");
    RoomMate* C = new RoomMate("C", "playing games", "pay the fee and run to class");
    RoomMate* D = new RoomMate("D", "shopping with girl friend", "go back to school and be worried about girl friend's angry");

    QQGroup* qqgroup = new QQGroup();
    

    cout<<"I love MaryLand chicken"<<endl;
    return 0;
}