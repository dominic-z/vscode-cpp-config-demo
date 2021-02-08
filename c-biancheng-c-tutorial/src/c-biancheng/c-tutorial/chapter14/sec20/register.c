#include <stdio.h>
// #include<conio.h>

int main()
{
    register int i = 0;
    double sign = 1.0, res = 0, ad = 1.0;
    for (i = 1; i <= 10; i++)
    {
        res += ad;
        sign = -sign;
        ad = sign / (2 * i + 1);
    }
    res *= 4;
    printf("pi is %f", res);
    return 0;
}