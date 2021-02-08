#include<stdio.h>
#include<stdlib.h>
int main(){
    char *p=(char *)malloc(100*sizeof(char));

    p=(char*)malloc(50*sizeof(char));

    free(p);
    p=NULL;
    return 0;
}