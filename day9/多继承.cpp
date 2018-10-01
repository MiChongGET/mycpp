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

class Children
{
  private:
    int age;
    string name;

  public:
    Children()
    {
        cout << "我是孩子" << endl;
    }
};

//多继承
class Student : public Person, public Children
{
  private:
    int stu_num;
    string name;

  public:
    Student()
    {
        cout << "我是学生" << endl;
    }
};

int main()
{

    Student s;
    system("pause");
    return 0;
}
