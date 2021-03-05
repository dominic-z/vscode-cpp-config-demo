#include "stdio.h"

long exchange(long *xp,long y){
    long x=*xp;
    *xp=y;
    printf("%ld",*xp);
    return x;
}

int main(){
    long y=10;
    long *xp=&y;
    y=exchange(xp,1000);// 这块又把10赋回给了y，因此，*xp还是10，因为无论是y还是*xp，都只是底层内存的助记符，这个内存被赋予为10，因此就是10
    
    printf("outer_x:%ld\n",y);
    printf("outer_*xp:%ld\n",*xp);
    return 0;
}