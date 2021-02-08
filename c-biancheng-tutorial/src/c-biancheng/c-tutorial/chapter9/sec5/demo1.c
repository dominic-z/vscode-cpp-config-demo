#include <stdio.h>
#include <string.h>

int main(){
    char chars[] = "http://c.biancheng.net";
    int len = strlen(chars), i;
    //直接输出字符串
    printf("str1: %s\n", chars);
    //每次输出一个字符
    chars[0]='c';
    for(i=0; i<len; i++){
        printf("%c", chars[i]);
    }
    printf("\n");

    char *c_ptr=chars;

    char *str="http://c.biancheng.net";
    //直接输出字符串
    printf("str %s\n", str);
    //使用*(str+i)
    for(i=0; i<len; i++){
        printf("%c", *(str+i));
    }
    printf("\n");
    str[0]='c'; // 以下代码不会执行，因为不能修改这个值
    //使用str[i]
    for(i=0; i<len; i++){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}