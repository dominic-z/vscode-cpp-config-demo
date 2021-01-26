#include<iostream>

class Stack{
public:
int get_count() const;
int get_m_data() const;

void set_m_num(int i){
    this->m_num=i;
}

private:
int m_num;
int m_data[20];
};

int Stack::get_count()const{
    return this->m_num;
}

int Stack::get_m_data()const{
    return this->m_data[0];
}

int main(){
    Stack s=Stack();
    s.set_m_num(10);
    std::cout<<s.get_count()<<std::endl;
    return 0;
}
