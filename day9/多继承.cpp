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
        cout << "����person" << endl;
    }

    static void eat()
    {
        cout << "�˻�Է�" << endl;
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
        cout << "���Ǻ���" << endl;
    }
};

//��̳�
class Student : public Person, public Children
{
  private:
    int stu_num;
    string name;

  public:
    Student()
    {
        cout << "����ѧ��" << endl;
    }
};

int main()
{

    Student s;
    system("pause");
    return 0;
}
