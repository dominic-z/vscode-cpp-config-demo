#include<stdio.h>

__attribute__((weak)) int a=20;
__attribute__((weak)) void func(){
    printf("C language\n");
}

int main(){
    printf("a=%d\n",a);
    func();
    return 0;
}