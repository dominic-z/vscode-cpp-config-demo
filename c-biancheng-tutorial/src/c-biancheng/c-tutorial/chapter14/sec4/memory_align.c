#include <stdio.h>
#include <stdlib.h>

struct T
{
    int a;
    char b;
    int c;
};

int m;
char c;
int n;

int main()
{
    struct T t = {10, 'C', 20};

    printf("length: %d\n", sizeof(t));
    printf("&a: %X\n&b: %X\n&c: %X\n", &t.a, &t.b, &t.c);
    printf("&m: %X\n&c: %X\n&n: %X\n", &m, &c, &n);
    return 0;
}