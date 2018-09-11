/*
 *  引用作为函数参数案例
 *  对于C语言的指针来说，引用更加简单和方便
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

    //交换数值
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << "交换之后的数值" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    system("pause");
    return 0;
}

//交换两个变量的数值
void swap(int &i, int &j)
{
    int temp;
    temp = i;
    i = j;
    i = temp;
}
