#include <iostream>
#include <windows.h>

using namespace std;

class Student
{

  private:
    static int num;

  public:
    //static修饰的静态成员变量
    static int age;

    void toString()
    {
        cout << "年龄：" << age << endl;
    }

    //返回一个静态成员变量方法必须使用static修饰
    static int getNum()
    {
        return num;
    }
};

//静态成员变量初始化，一定要定义在外边
int Student::age = 18;
int Student::num = 100;

int main()
{
    Student t;
    t.toString();

    cout << "学号：" << t.getNum() << endl;

    system("pause");
    return 0;
}
