#include <iostream>
#include "point.h"
using namespace std;

int main(){
    Point<int, int> p1(10, 20);
    p1.setX(40);
    p1.setY(50);
    cout<<"x="<<p1.getX()<<", y="<<p1.getY()<<endl;

    Point<char*, char*> p2("东京180度", "北纬210度");
    p2.display();

    return 0;
}