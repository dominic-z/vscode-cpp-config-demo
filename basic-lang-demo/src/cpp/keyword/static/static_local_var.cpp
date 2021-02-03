#include <stdio.h>
#include <iostream>

void sum(int i){
    static int sum=0;
    sum+=i;
    std::cout<<"sum: "<<sum<<std::endl;
}

int main(){
    sum(10);
    sum(20);
    return 0;
}