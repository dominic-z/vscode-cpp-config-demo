#include<stdio.h>

void func(char **p){// 刚看到这个**p的时候确实反应了一下，p的是一个指针，指向了一个char指针
    char arr[]="C语言";
    *p=arr;// *p就是个char指针
}

int main(){

    char *pstr;
    func(&pstr);
    puts(pstr);
    return 0;
}