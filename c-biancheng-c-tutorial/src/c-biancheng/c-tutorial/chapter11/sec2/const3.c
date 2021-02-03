#include <stdio.h>
void func(char *str){ 
    printf("%s\n",str);
}
int main(){
    const char *str1 = "c.biancheng.net";
    char *str2 = str1; // 这里将str1给了str2，而str1指向的是const char，因此会报警告
    // *str2="cpp.biancheng"; // 这里会调试报错，因为对const char数据进行了更改
    func(str1);
    return 0;
}