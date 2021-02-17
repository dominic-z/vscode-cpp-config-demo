# 7.7
`template<typename T,unsigned N> void Swap(T (&a)[N],T (&b)[N],int length)`
`template<typename T> void Swap(T a[],T b[],int length)`
这俩没有本质区别，进到函数里面a都是指针

非类型参数感觉还是挺鸡肋的

# 7.8
> 模板的实例化由编译器完成，而不是链接的时候完成的

function_template_separate_bad_case文件夹就是反例
对整个文件夹编译链接就会出现链接问题，找不到`Swap<double>(double&, double&)`方法。原因如上所述，编译的时候都是单个文件编译，编译main的时候，*没看到`Swap`的定义，只有声明，模板函数没有通过main函数的调用实例化*；编译func.cpp的时候，模板函数有定义，但是也只实例化了`Swap<int>`，因此在链接的时候，找不到`Swap<double>`