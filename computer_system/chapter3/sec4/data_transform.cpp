#include<iostream>

long exchange(long *xp,long y){
    long x=*xp;
    *xp=y;
    std::cout<<*xp<<std::endl;
    return x;
}

int main(){
    long y=10;
    long *xp=&y;
    long x=exchange(xp,1000);
    std::cout<<x<<std::endl;
    std::cout<<*xp<<std::endl;
    return 0;
}