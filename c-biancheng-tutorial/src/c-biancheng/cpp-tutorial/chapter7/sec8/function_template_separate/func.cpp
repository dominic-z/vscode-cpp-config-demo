#include "func.h"

//冒泡排序算法
void bubble_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool isSorted = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                isSorted = false;
                Swap(arr[j], arr[j+1]);  //调用Swap()函数
            }
        }
        if(isSorted) break;
    }
}