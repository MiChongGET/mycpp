#include <iostream>
#include <windows.h>

using namespace std;

class Student
{

  private:
    int age;
    string name;

  public:
    //Student的构造函数

    Student()
    {
        age = 18;
        name = "MiChong";
        cout << "自动初始化" << endl;
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
    }
};

int main()
{
    Student s;
    s.toString();

    // Student student(23, "MiChong");
    // student.toString();
    system("pause");
    return 0;
}
