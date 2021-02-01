#include <stdio.h>
//返回两个数中较大的一个
float max(int a, int b){
    return (float)(a>b ? a : b);
}
int main(){
    int x, y;
    float maxval;
    //定义函数指针
    float (*pmax)(int, int) = max;  //也可以写作int (*pmax)(int a, int b)
    printf("Input two numbers:");
    scanf("%d %d", &x, &y);
    maxval = (*pmax)(x, y);
    printf("Max value: %.2f\n", maxval);
    return 0;
}