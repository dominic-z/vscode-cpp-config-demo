#include <stdio.h>
int main(){
    // 这个枚举值必须是int类型的，编译器会将其自增
    enum week{ Mon = 11, Tues, Wed, Thurs, Fri, Sat, Sun } day;
    enum period{ AM = 11, PM};
    scanf("%d", &day);
    switch(day){
        case Mon: puts("Monday"); break;
        case Tues: puts("Tuesday"); break;
        case Wed: puts("Wednesday"); break;
        case Thurs: puts("Thursday"); break;
        case Fri: puts("Friday"); break;
        case Sat: puts("Saturday"); break;
        case Sun: puts("Sunday"); break;
        default: puts("Error!");
    }

    switch(day){ // 可以看到用day去匹配period也是可以成功的
        case AM: puts("AM"); break;
        case PM: puts("PM"); break;
        default: puts("Error!");
    }

    enum period time=AM; 
    switch(time){ // 可以看到，用time去匹配week也能成功，因为说到底这些枚举类就是int数字，把enum当做编译器的宏
        case Mon: puts("Monday"); break;
        case Tues: puts("Tuesday"); break;
        case Wed: puts("Wednesday"); break;
        case Thurs: puts("Thursday"); break;
        case Fri: puts("Friday"); break;
        case Sat: puts("Saturday"); break;
        case Sun: puts("Sunday"); break;
        default: puts("Error!");
    }
    return 0;
}