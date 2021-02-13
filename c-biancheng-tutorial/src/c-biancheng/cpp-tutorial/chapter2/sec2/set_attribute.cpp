#include <iostream>
class Name
{
private:
    static int i;

public:
    Name();
    ~Name();
    std::string m_name;
};

int Name::i = 0;

Name::Name()
{
    i += 1;
    std::cout << "constr name " << m_name << " " << i << std::endl;
}
Name::~Name()
{
    std::cout << "destroy name " << m_name << " "  << std::endl;
}

void show_name(Name name)
{
    std::cout << name.m_name << std::endl;
}

class Person
{

private:
    Name m_name1;
    Name m_name2;

public:
    void set_name1(Name name1)
    {
        m_name1 = name1;
    }
    void set_ref_name2(Name &name2)
    {
        m_name2 = name2;
    }
    void show_name()
    {
        std::cout << this->m_name1.m_name << std::endl;
        std::cout << this->m_name2.m_name << std::endl;
    }
};

int main()
{
    Person *p = new Person(); // 会自动进行两次name构造

    Name name1; // 第三次构造name
    name1.m_name = "abc";

    p->set_name1(name1); // 传参调用，调用的是拷贝构造构造函数，并不是构造函数，调用结束后形参被删除，析构函数调用
    name1.m_name="123123123";

    Name name2;
    name2.m_name = "abcddd";
    p->set_ref_name2(name2); // 引用调用，不构造
    p->show_name();
    return 0;
}