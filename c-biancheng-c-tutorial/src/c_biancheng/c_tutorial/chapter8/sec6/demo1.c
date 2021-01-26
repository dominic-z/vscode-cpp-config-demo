#include<stdio.h>

#define STR(s) #s

int main(){
    printf("%s\n",STR(hello world));
    char s[]=STR(hello world);
    printf("%s\n",s);
    return 0;
}