#include <iostream>

void get_initializer_list(){
    std::initializer_list<std::pair<int,std::string>> list={{1,"1"},{2,"2"}};

    for(auto i:list){
        std::cout<<i.first<<std::endl;
        std::cout<<i.second<<std::endl;
    } 
        
}

int main(){
    get_initializer_list();
    return 0;
}