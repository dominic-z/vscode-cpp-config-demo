#include<stdio.h>
#include<stdlib.h>

int a=1,b=255;
int main(){
    int *pa=&a;
    printf("pa = %#X, &b = %#X",pa,&b);
    return 0;
}