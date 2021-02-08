#include<stdio.h>

void func(char **p){
    char arr[]="C语言";
    *p=arr;
}

int main(){
    char *c1;
    gets(c1);
    puts(c1);

    char *str=(char*)malloc(20*sizeof(char));
    strcpy(str,"C语言编程网");
    puts(str);
    free(str);
    if(str){
        puts(str);
    }

    char *
    return 0;
}