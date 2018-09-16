#include <iostream>
#include <windows.h>

using namespace std;
class Student
{

  private:
  public:
    int age;
    string name;

    //Student的构造函数
    Student()
    {
    }

    //显示的拷贝构造函数,不写的话会调用默认的
    Student(const Student &another)
    {
        this->age = another.age;
        this->name = another.name;
        cout << "对象已经拷贝" << endl;
    }

    Student(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

    void toString()
    {
        cout << "age:" << age << endl;
        cout << "name:" << name << endl;
        cout << "******************" << endl;
    }

    //赋值操作符函数
    void operator=(const Student &another)
    {
        this->age = another.age;
        this->name = another.name;
        cout << "赋值操作" << endl;
    }
};
int main()
{
    Student s1(18, "MiChong");

    //初始化构造
    Student s2(s1);
    s2.toString();

    //初始化调用拷贝构造函数
    Student s3 = s1;
    s3.toString();

    //下面不是调用拷贝函数，而是调用赋值操作符函数
    Student s4;
    s4 = s1;
    s4.toString();

    system("pause");
    return 0;
}
