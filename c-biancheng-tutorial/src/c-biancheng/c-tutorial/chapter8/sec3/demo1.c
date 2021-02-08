#include <stdio.h>
#define M (n*n+3*n)
int main(){
    int sum, n;
    printf("Input a number: ");
    scanf("%d", &n);
    sum = 3*M+4*M+5*M;
    printf("sum=%d\n", sum);
    return 0;
}