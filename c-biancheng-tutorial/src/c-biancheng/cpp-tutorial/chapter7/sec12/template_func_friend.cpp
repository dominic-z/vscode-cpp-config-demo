#include<iostream>
#include<string>

using namespace std;

template<typename T1,typename T2>
class Pair
{
private:
    T1 key;
    T2 value;

public:
    Pair(T1 k,T2 v):key(k),value(v){};

    template <typename T3,typename T4> // 为啥这么声明，因为友元函数不属于该类，无法获取T1和T2，这个方法是给cout<<用的
    friend ostream & operator << (ostream & o,const Pair<T3,T4> p);
};

template <typename T1,typename T2>
ostream & operator << (ostream & o,const Pair<T1,T2> p){
    o<<"("<<p.key<<","<<p.value<<")";
    return o;
}

int main(){
    Pair<string,int> student("Tom",20);

    cout<<student<<" "<<endl;

}