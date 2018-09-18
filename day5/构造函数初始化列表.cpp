#include <iostream>
#include <windows.h>

using namespace std;

class People
{
  public:
    string name;
    int age;

    People(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student
{
  private:
    People p;

  public:
    //构造函数初始化列表，调用了People的拷贝构造函数
    Student(People &people) : p(people)
    {
    }

    //调用People的一个带参数的构造函数，给People对象传递两个参数
    //构造对象成员的顺序跟初始化列表的顺序无关
    //而是和成员对象的定义顺序有关
    Student(string name, int age) : p(name, age)
    {
    }

    void toString()
    {
        cout << "姓名：" << p.name << endl;
        cout << "年龄：" << p.age << endl;
        cout << "************" << endl;
    }
};

int main()
{
    //第一种
    People p("MiChong", 23);
    Student stu1(p);
    stu1.toString();

    //第二种
    Student stu2("米虫",24);
    stu2.toString();

    system("pause");
    return 0;
}
