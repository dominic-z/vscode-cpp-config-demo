#include<stdio.h>
static int n=999; // 删除static之后，如果对文件夹下面的c进行build，会报错

static void say(){
    printf("Hello World!\n");
}