#include<stdio.h>

char *str1="c.biancheng.net";// 字符串在常量区，str1在全局数据区
int n; // 全局数据区

char *func(){
    char *str="c语言中文网"; // 字符串在常量区，str在栈

    char stack_strs[20]="56789"; // 字符串和arr都在栈，如果返回arr，则main函数里最后一个print会失效
    return str;
}

int main(){
    int a;
    char *str2="01234"; // 字符串在常量区，str2在栈区
    char arr[20]="56789"; // 字符串和arr都在栈
    char *pstr=func(); // pstr在栈
    int b; // b在栈

    printf("str1:%#X\npstr: %#X\nstr2:%#X\n",str1,pstr,str2);
    printf("---------------------\n");
    printf("&str1:%#X\n&n: %#X\n",&str1,&n);
    printf("---------------------\n");
    printf("&a:%#X\narr: %#X\n&b:%#X\n",&a,arr,&b);
    printf("---------------------\n");
    printf("n:%d\na: %d\nb:%d\n",n,a,b);
    printf("---------------------\n");
    printf("%s\n",pstr);
    return 0;

}