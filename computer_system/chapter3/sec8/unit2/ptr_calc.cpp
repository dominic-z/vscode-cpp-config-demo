#include <iostream>
using namespace std;



int get_ptr_length(int * arr){
    int length=sizeof(arr);
    std::cout<<"ptr:"<<length<<std::endl;
    std::cout<<"ptr:"<<sizeof(*arr)<<std::endl;
    return length;
}
template<class T> 
int get_template_ref_length(T& arr){
    int length=sizeof(arr);
    std::cout<<"ref:"<<length<<std::endl;
    std::cout<<"ref:"<<sizeof(arr[0])<<std::endl;
    return length;
}

int main(){
    int arr[10];
    std::cout<<"main:"<<sizeof(arr)<<std::endl;
    std::cout<<"main:"<<sizeof(arr[0])<<std::endl;
    int length=sizeof(arr)/sizeof(arr[0]); // 这个时候sizeof(arr)会计算出数组所占的空间


    std::cout<<length<<std::endl;
    for(int i=0;i<length;i++){
        arr[i]=i;
    }
    std::cout<<arr<<std::endl;
    std::cout<<arr+2<<std::endl;
    std::cout<<arr[2]<<std::endl;

    get_ptr_length(arr);
    get_template_ref_length(arr);

    return 0;
}

