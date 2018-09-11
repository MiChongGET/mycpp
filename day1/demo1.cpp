/*
 *  引用作为函数参数案例
 */
#include <iostream>
using namespace std;

struct Student
{
    int age;
    char name[20];
};

void test1(struct Student &s)
{
    //相当于把s直接传入进来，对s直接修改
    s.age = 20;
}

int main()
{
    Student stu;
    stu.age = 10;
    //此时age已经被修改为20了
    test1(stu);

    cout << "学生的年龄是：" << stu.age << endl;
    system("pause");
    return 0;
}
