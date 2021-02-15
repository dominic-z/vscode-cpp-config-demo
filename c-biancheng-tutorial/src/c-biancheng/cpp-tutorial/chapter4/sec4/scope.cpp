#include<iostream>

using namespace std;

class A{
    public:
    void func();
    public:
    int n;
};

void A::func(){
    cout<<"A: "<<n<<endl;
}

class B:public A{
    public:
    int n;
};

int main(){
    B b;
    b.A::n=20;
    b.n=10;

    b.func();
    return 0;
}