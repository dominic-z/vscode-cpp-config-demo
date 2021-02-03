#include <iostream>
void fn();
static int n; //定义静态全局变量
int main()
{
    n=20;
    std::cout<<n<<std::endl;
    fn();
    return 0;
}