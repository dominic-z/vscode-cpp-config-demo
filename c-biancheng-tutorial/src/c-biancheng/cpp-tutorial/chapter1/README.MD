# 1.13

为什么1.11最后的例子里内联函数的声明和定义分开了，单独编译不会报错；但1.13的声明定义分开会报错呢。
很简单，问题出在链接上，1.13中main.cpp声明了`func`方法，但没找到定义；module.cpp定义了内联的`func`，但编译后这个`func`就不存在了，因此main中的`func`仍然没有被成功链接。
而1.11里声明定义虽然分开，但声明还是找到了定义的。

# 1.18
需要手动编译链接，另外myfunc.c中应该不用`#include myfunc.h`
```shell
gcc -c src/c-biancheng/cpp-tutorial/chapter1/sec18/main.cpp -o out/src/c-biancheng/cpp-tutorial/chapter1/sec18/main.out
gcc -c src/c-biancheng/cpp-tutorial/chapter1/sec18/myfunc.c -o out/src/c-biancheng/cpp-tutorial/chapter1/sec18/myfunc.out

gcc out/src/c-biancheng/cpp-tutorial/chapter1/sec18/main.out out/src/c-biancheng/cpp-tutorial/chapter1/sec18/myfunc.out -o out/src/c-biancheng/cpp-tutorial/chapter1/sec18/a.out
```