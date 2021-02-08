#include <stdio.h>
int getNum()
{
    return 100;
}
int main()
{
    int n = 90,m=100;
    const int *p1=&n;
    int *const p3=&m;
    printf("*p1: %d, *p3: %d\n", *p1, *p3);

    // *p1=30; // p1指向的值不可更改 const修饰的是*p1
    p1=&m; // p1本身可更改
    printf("*p1: %d, *p3: %d\n", *p1, *p3);

    // p3=&n; // p3本身不可更改 const修饰的是p3
    *p3=n; // 但p3指向的值可以更改，此处将m这个值改成90了
    printf("*p1: %d, *p3: %d\n", *p1, *p3);
    return 0;
}