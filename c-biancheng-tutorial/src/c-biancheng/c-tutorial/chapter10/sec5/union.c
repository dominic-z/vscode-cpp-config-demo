#include <stdio.h>
union data
{
    int n;
    char ch;
    short m;
};

union union_s
{
    /* data */
    int *ptr;
    char arr[10];
};

int main()
{
    union data a;
    printf("%d, %d\n", sizeof(a), sizeof(union data));
    a.n = 0x40;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.ch = '9';
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.m = 0x2059;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.n = 0x3E25AD54;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);

    union union_s us1; 
    printf("sizeof member: %d, %d\n", sizeof(us1.ptr), sizeof(us1.arr));
    printf("sizeof union: %d, %d\n", sizeof(us1), sizeof(union union_s));// union的大小好像都是8的倍数
    char c[] = "abcdefg";
    us1.arr[0] = 'a';
    printf("%d, %s\n", us1.ptr, us1.arr);
    int n = 10;
    us1.ptr = &n;
    printf("%d, %s\n", *us1.ptr, us1.arr);
    // printf("%d, %d\n", sizeof(us1), sizeof(union union_s));
    // printf("%s, %s\n",us1.s_ptr,us1.short_s);
    return 0;
}