#include <iostream>
#include "func.h"
using namespace std;

extern template void Swap(double &a,double &b); // 可以不写void Swap(double &a,double &b);

int main(){
    int n1 = 10, n2 = 20;
    Swap(n1, n2);
   
    double f1 = 23.8, f2 = 92.6;
    Swap(f1, f2);

    return 0;
}