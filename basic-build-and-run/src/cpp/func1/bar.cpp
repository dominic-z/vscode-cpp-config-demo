#include <iostream>
// #include "../func2/foo.h"
// #include "/Users/dominiczhu/work/learn/c/vscode-cpp-demo/basic-build-and-run/src/cpp/func2/foo.h"
#include <stdio.h>
struct{
    short a;
    char b;
    float c;
} cs;

int main(){
    // show();
    std::cout << sizeof(cs)<< std::endl;
    return 0;
}