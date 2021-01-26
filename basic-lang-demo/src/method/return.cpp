#include <iostream>

// 演示返回引用、返回值和返回指针
// 其中返回指针其实没啥好说的

class ReturnObj
{
public:
    ReturnObj();
    ReturnObj(std::string name);
    std::string get_name()
    {
        return this->name;
    }

private:
    std::string name;
};

ReturnObj::ReturnObj()
{
    this->name = "default_name";
}

ReturnObj::ReturnObj(std::string name)
{
    this->name = name;
}

ReturnObj &return_ref()
{
    ReturnObj *obj = new ReturnObj("return_ref"); // 使用new 在堆上构建对象，防止出现栈内对象被删除的现象
    std::cout << "ptr(in) = " << obj << std::endl;
    std::cout << "name(in) = " << obj->get_name() << std::endl;
    return *obj;
}

ReturnObj &return_local_ref()
{
    // warning func 模拟返回局部对象
    ReturnObj obj = ReturnObj("return_local_ref");
    std::cout << "ptr(in) = " << &obj << std::endl;
    std::cout << "name(in) = " << obj.get_name() << std::endl;
    return obj;
}

ReturnObj *return_ptr()
{
    ReturnObj *obj = new ReturnObj("return_ptr");
    std::cout << "ptr(in) = " << obj << std::endl;
    std::cout << "name(in) = " << obj->get_name() << std::endl;

    return obj;
}

ReturnObj return_obj()
{
    ReturnObj *obj = new ReturnObj("return_obj");
    std::cout << "ptr(in) = " << obj << std::endl;
    return *obj;
}

int return_int(int &i)
{
    std::cout << "in(value) = " << &i << std::endl;
    return i;
}

int &return_int_ref(int &i)
{
    std::cout << "in(value) = " << &i << std::endl;
    return i;
}

int *return_int_ptr(int &i)
{
    std::cout << "in(value) = " << &i << std::endl;
    return &i;
}

int main()
{
    std::cout << "==========return_ref===============" << std::endl;
    ReturnObj &ref = return_ref();
    std::cout << "ptr(out) = " << &ref << std::endl;
    std::cout << "name(out) = " << ref.get_name() << std::endl;

    std::cout << "==========return_obj===============" << std::endl;
    ReturnObj obj1 = return_obj();
    std::cout << "ptr(out) = " << &obj1 << std::endl;
    std::cout << "name(out) = " << obj1.get_name() << std::endl;

    ReturnObj obj2 = return_ref(); // 虽然返回了一个ref，但是obj2并不是引用，因此还是做了值拷贝
    std::cout << "ptr(out) = " << &obj2 << std::endl;
    std::cout << "name(out) = " << obj2.get_name() << std::endl;

    std::cout << "==========return_local_ref===============" << std::endl;
    ReturnObj &local_ref = return_local_ref();// 由于返回了临时对象，在调用结束后，这个临时对象会被释放，但是这个引用却被返回了，那么结果就是这个引用指向了一块不知道是什么的内存
    std::cout << "ptr(out) = " << &local_ref << std::endl;
    std::cout << "(broken)name(out) = " << local_ref.get_name() << std::endl;

    std::cout << "==========return_int_ref===============" << std::endl;
    int in = 10;
    int &out = return_int_ref(in);
    std::cout << "out(value) = " << &out << std::endl;
    return 0;
}