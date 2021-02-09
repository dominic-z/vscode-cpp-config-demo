# 15.2
## 预处理
`#include`是递归的，因此会在预处理的时候递归地将代码导入进来
> 那么问题来了，如果a引入了b，b引入了c，c引入了a，那么会不会造成错误。

答：会报错，解决方法就是加上`#pragma once`或者使用`#ifdef`

# 15.4

最能体现链接的作用的实际上还是15.1的代码，尝试手动编译和链接
```shel
gcc -c src/c-biancheng/c-tutorial/chapter15/sec1/main.c -o out/src/c-biancheng/c-tutorial/chapter15/sec1/main.o

gcc -c src/c-biancheng/c-tutorial/chapter15/sec1/module.c -o out/src/c-biancheng/c-tutorial/chapter15/sec1/module.o

gcc out/src/c-biancheng/c-tutorial/chapter15/sec1/main.o out/src/c-biancheng/c-tutorial/chapter15/sec1/module.o -o out/src/c-biancheng/c-tutorial/chapter15/sec1/main.out
```

分别对main.c和module.c进行了编译，但是main里只是声明了`func`和`m`，在main.o里并不知道这个函数和数据的地址，最后生成out的时候，将数据链接在一起，生成了执行文件。

## 全局变量和局部变量

原来在编译过程中，局部变量的地址（虚拟地址）的计算公式会确定下来，但是具体的值没法确定。

## 15.7
强引用和弱引用存在的意义是：方便插件式开发和框架式开发。例如，这个框架如果依赖某个用户提供的功能（方法），那么将这个功能声明为弱引用，然后对框架进行连接，也是可以链接通过的。然后再将框架和用户模块结合编译，就可以完成整个框架了。