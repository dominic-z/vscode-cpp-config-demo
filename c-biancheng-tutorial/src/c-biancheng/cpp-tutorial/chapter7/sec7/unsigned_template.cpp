#include<iostream>

using namespace std;

// template<typename T> void Swap(T a[],T b[],int length){
//     for(int i=0;i<length;i++){
//         cout<<a[i]<<endl;
//     }
// }

template<typename T,unsigned N> 
void Swap(T (&a)[N],T (&b)[N]){
    cout<<*a<<endl;// 也是指针
    cout<<typeid(a).name()<<endl;
    for(int i=0;i<length;i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    int length=5;
    // int arr[length];
    // for(int i=0;i<length;i++){
    //     arr[i]=i;
    // }
    // Swap<int,5>(arr,arr);// compile error

    int arr2[5];
    for(int i=0;i<length;i++){
        arr2[i]=i;
    }
    Swap(arr2,arr2);
}