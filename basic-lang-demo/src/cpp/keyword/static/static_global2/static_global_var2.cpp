#include <iostream>

static int n=10; //定义静态全局变量
void fn()
{
n++;
std::cout<<n<<std::endl;
}

// // int main(){
// //     fn();
// //     return 0;

// // }