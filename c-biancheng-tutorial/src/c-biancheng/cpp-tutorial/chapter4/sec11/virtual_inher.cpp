#include<iostream>
using namespace std;
//间接基类A
class A{
public:
    void show(){
        cout<<"A"<<endl;
    }
protected:
    int m_a;
};

//直接基类B
class B: virtual public A{  //虚继承
public:
    void show(){
        cout<<"B"<<endl;
    }
protected:
    int m_b;
};

//直接基类C
class C: virtual public A{  //虚继承
public:
    void show(){
        cout<<"C"<<endl;
    }
protected:
    int m_c;
};

//派生类D
class D: public B, public C{
public:
    void seta(int a){ m_a = a; }  //正确
    void setb(int b){ m_b = b; }  //正确
    void setc(int c){ m_c = c; }  //正确
    void setd(int d){ m_d = d; }  //正确
private:
    int m_d;
};

int main(){
    D d;
    d.B::show();
    return 0;
}