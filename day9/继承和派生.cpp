#include <iostream>
#include <windows.h>

using namespace std;

class Person
{
  private:
    int age;
    string name;

  public:
    Person()
    {
        cout << "我是person" << endl;
    }

    static void eat()
    {
        cout << "人会吃饭" << endl;
    }
};

class Student : public Person
{
  private:
    int stu_num;
    string name;

  public:
    Student()
    {
        cout << "我是学生" << endl;
    }

    Student(string name, int age)
    {
        this->name = name;
        this->stu_num = age;
        cout << "我是学生" << endl;
    }

    void doing()
    {
        //引用父类定义的static静态成员方法
        Person::eat();
    }
};

int main()
{

    Student s;
    s.doing();
    system("pause");
    return 0;
}
