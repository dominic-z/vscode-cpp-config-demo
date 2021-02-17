#ifndef _FUNC_H
#define _FUNC_H

//交换两个数的值
template<typename T> void Swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int arr[], int n);

#endif