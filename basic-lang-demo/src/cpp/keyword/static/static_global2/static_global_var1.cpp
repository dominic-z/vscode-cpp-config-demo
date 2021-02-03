#include <iostream>
#include "./static_global_var2.cpp"
// 注意区分，这种情况下，n这个变量在本cpp作用域下面可读
// 这是因为include的预处理操作，会将var2.cpp的代码直接粘贴到这里然后生成.i文件，然后再去编译链接
// 直接将n这个变量引入到本文件来了
// 

int main()
{
    n=20;
    std::cout<<n<<std::endl;
    fn();
    return 0;
}