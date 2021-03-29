#include<iostream>
using namespace std;

int get_ptr_length(int * arr){
    int length=sizeof(arr);
    std::cout<<"ptr:"<<length<<std::endl;
    std::cout<<"ptr:"<<sizeof(*arr)<<std::endl;
    return length;
}

template<class T> int length(T& arr)
{
    // cout << sizeof(arr[0]) << endl;
    // cout << sizeof(arr) << endl;
    return sizeof(arr) / sizeof(arr[0]);
}

int main()
{
    int arr[] = { 1,5,9,10,9,2 };
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr) << endl;

    // 方法一
    cout << "数组的长度为：" << length(arr) << endl;
    // 方法二
    //cout << end(arr) << endl;
    //cout << begin(arr) << endl;
    cout << "数组的长度为：" << end(arr)-begin(arr) << endl;

    // 错误范例，这种情况，arr就会被视为指针
    get_ptr_length(arr);
    system("pause");
    return 0;
}