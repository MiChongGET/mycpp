#include <iostream>
#include <windows.h>

using namespace std;

class Student
{
  public:
    int age;
    string name;

    Student(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

    void toString()
    {
        cout << "年龄：" << age << ", 姓名：" << name << endl;
    }
};

//销毁对象
void DeleteObj(Student *&s)
{
    if (s != NULL)
    {
        delete s;
    }

    s = NULL;
}

int main()
{
    //创建一个指针变量，使用new 初始化值
    Student *student = new Student(12, "MiChong");
    //打印输出值
    student->toString();
    //删除值
    DeleteObj(student);
    system("pause");
    return 0;
}
