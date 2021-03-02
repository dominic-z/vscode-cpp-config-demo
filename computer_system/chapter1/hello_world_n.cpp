#include <stdio.h>
#include <iostream>

using namespace std;

class Apple
{
public:
Apple(){}
    Apple(string s) {
        this->m_name=s;
    }
string m_name;
};

class Fruit{

public:
    Fruit(string name){
        this->apple=Apple(name);
    }

    Apple get_apple(){
        return this->apple;
    }

private:
    Apple apple;
};

void fn()
{
    static int n = 10;
    std::cout << n << std::endl;
    n++;
}

int main(int argc, char const *argv[])
{
    Fruit f("ad");
    Apple a=f.get_apple();
    cout<<a.m_name<<endl;
    return 0;
}
