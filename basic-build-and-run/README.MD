# 用vscode编译cpp的配置示例

主要是各种task，包括创建输出目录，编译单个文件，编译并运行单个文件，运行单个文件，编译本目录下所有文件，编译工作空间下所有文件。
将源码和输出分开两个文件夹，避免相互干扰

如果不想依赖task，也可以手动编译
```shell
cd manually-compile
g++ -c func2/foo.cpp -o ../out/foo.out
g++ -c func1/bar.cpp -o ../out/bar.out
g++ ../out/foo.out ../out/bar.out -o ../out/out.out # 链接
../out/out.out 
```

# 生效逻辑
bar.cpp引入了foo.h的声明部分（使用相对路径和绝对路径都可以），但是编译的时候要把bar.cpp和foo.cpp在一起编译，这样才能将定义链接到声明上。