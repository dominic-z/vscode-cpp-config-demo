
#include<iostream>

using namespace std;

class Test
{
public:
    Test(string s)
    {
        str = s;
       cout<<"Test creat\n";
    }
    ~Test()
    {
        cout<<"Test delete:"<<str<<endl;
    }
    string& getStr()
    {
        return str;
    }
    void setStr(string s)
    {
        str = s;
    }
    void print()
    {
        cout<<str<<endl;
    }
private:
    string str;
};


int main(){
    shared_ptr<Test> p_test=make_shared<Test>("hello");
    p_test->print();

    // wrong
    Test *test=(make_shared<Test>("hello")).get();// 这个对象执行完这一步之后回就会被回收掉的，因为内存中没有shared_ptr存在，计数器为0，导致删除对象
    Test *test1=(make_shared<Test>("hello1")).get();
    test->print(); 
    return 0;
}