#include <iostream>
using namespace std;
//声明内联函数
void swap1(int *a, int *b);  //也可以添加inline，但编译器会忽略
int main(){
    int m, n;
    cin>>m>>n;
    cout<<m<<", "<<n<<endl;
    swap1(&m, &n);
    cout<<m<<", "<<n<<endl;
    return 0;
}
//定义内联函数
inline void swap1(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}