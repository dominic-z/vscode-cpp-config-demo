#include <iostream>
#include <iomanip>
using namespace std;

class Base{
public:
    Base(int a = 0): m_a(a){ }
    int get_a() const{ return m_a; }
    virtual void func() const { 
        cout<<"Base"<<endl;
    }
protected:
    int m_a;
};

class Derived: public Base{
public:
    Derived(int a = 0, int b = 0): Base(a), m_b(b){ }
    int get_b() const { return m_b; }
    virtual void func() const { 
        cout<<"Base"<<endl;
    }
private:
    int m_b;
};

int main(){
    //情况①
    Derived *pd1 = new Derived(35, 78);
    Base *pb1 = dynamic_cast<Base*>(pd1);  // 这个应该是base
    cout<<"pd1 = "<<pd1<<", pb1 = "<<pb1<<endl ;
    cout<<pb1->get_a()<<endl;
    pb1->func();

    //情况②
    int n = 100;
    Derived *pd2 = reinterpret_cast<Derived*>(&n);
    Base *pb2 = dynamic_cast<Base*>(pd2);
    cout<<"pd2 = "<<pd2<<", pb2 = "<<pb2<<endl;
    cout<<pb2->get_a()<<endl;  //输出一个垃圾值
    pb2->func();  //内存错误

    return 0;
}