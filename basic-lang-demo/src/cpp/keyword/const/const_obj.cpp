
#include <stdio.h>
#include <iostream>

using namespace std;

const int *const_arr=new const int[4]{1,2,3,4};

int main(){
    cout<<const_arr[3]<<endl;
    return 0;
}