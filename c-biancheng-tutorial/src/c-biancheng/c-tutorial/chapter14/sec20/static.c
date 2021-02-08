#include<stdio.h>
#include<stdlib.h>

int main(){
    static int result=10;// 与sum里的result不冲突
    for(int i=1;i<=10;i++){
        result=sum(i);
    }
    printf("result: %d\n",result);
    return 0;
}

int sum(int n){
    static int result=0;

    result+=n;
    return result;
}