#include <stdio.h>
struct Stu
{
    char *name;  //姓名
    int num;     //学号
    int age;     //年龄
    char group;  //所在小组
    float score; //成绩
};
int main()
{
    int i, num_140 = 0;
    float sum = 0;

    struct Stu classes[] = {
        {"Li ping", 5, 18, 'C', 145.0},
        {"Zhang ping", 4, 19, 'A', 130.5},
        {"He fang", 1, 18, 'A', 148.5},
        {"Cheng ling", 2, 17, 'F', 139.0},
        {"Wang ming", 3, 17, 'B', 144.5}};

    for (i = 0; i < 5; i++)
    {
        sum += classes[i].score;
        if (classes[i].score < 140)
            num_140++;
    }
    printf("sum=%.2f\naverage=%.2f\nnum_140=%d\n", sum, sum / 5, num_140);

    struct Stu new_class;
    new_class.age = 20;
    new_class.name = "hei~";
    printf("name=%s,age=%d\f", new_class.name, new_class.age);

    return 0;
}