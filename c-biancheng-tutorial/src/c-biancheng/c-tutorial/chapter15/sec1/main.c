#include <stdio.h>

extern void func();
extern int m;

int n = 200;

int main()
{
    func();
    printf("m=%d, n=%d", m, n);
    return 0;
}