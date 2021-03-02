#include <stdio.h>

void fn();
int main()
{
    printf("hello world\n");
    int i = 10;
    fn();
    fn();
    printf("%d\n", i);
    return 0;
}

void fn()
{
    static int n = 10;
    printf("%d\n", n);
    n++;
}