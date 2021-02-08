#include<stdio.h>


int main(){

    char *str=(char*)malloc(20*sizeof(char));
    strcpy(str,"C语言编程网");
    puts(str);
    free(str);
    if(str){
        puts(str);
    }

    return 0;
}