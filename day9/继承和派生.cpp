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

class Student : public Person
{
  private:
    int stu_num;
    string name;

  public:
    Student()
    {
        cout << "����ѧ��" << endl;
    }

    Student(string name, int age)
    {
        this->name = name;
        this->stu_num = age;
        cout << "����ѧ��" << endl;
    }

    void doing()
    {
        //���ø��ඨ���static��̬��Ա����
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
