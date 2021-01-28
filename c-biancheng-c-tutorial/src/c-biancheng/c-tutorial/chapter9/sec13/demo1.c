#include <stdio.h>
int main(){
    int a = 16, b = 932, c = 100;
    // 先来一个普通数组
    int arr[]={a,b,c};
    int *p=arr; // 定义p是一个指向arr的第一个元素的指针，也就是说，是一个指向int的指针
    printf("%d, %d, %d\n", arr[0], arr[1], arr[2]);
    printf("%d, %d, %d\n", *(p+0), *(p+1), *(p+2));

    //定义一个指针数组
    int *parr[3] = {&a, &b, &c};//也可以不指定长度，直接写作 int *parr[]，执行顺序为*(parr[3])，即告诉程序先创建一个数组，然后这个数组用于用来存指向int的指针
    //定义一个指向指针数组的指针
    int **parr_p = parr; // 由于parr是一个储存了int指针的数组，因此如果希望parr_p指向parr的第一个元素，需要写成int **，因为要求parr_p是一个（指向int指针）的指针
    printf("%d, %d, %d\n", *parr[0], *parr[1], *parr[2]);
    printf("%d, %d, %d\n", **(parr_p+0), **(parr_p+1), **(parr_p+2));
    return 0;
}