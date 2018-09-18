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
    //���캯����ʼ���б�������People�Ŀ������캯��
    Student(People &people) : p(people)
    {
    }

    //����People��һ���������Ĺ��캯������People���󴫵���������
    //��������Ա��˳�����ʼ���б��˳���޹�
    //���Ǻͳ�Ա����Ķ���˳���й�
    Student(string name, int age) : p(name, age)
    {
    }

    void toString()
    {
        cout << "������" << p.name << endl;
        cout << "���䣺" << p.age << endl;
        cout << "************" << endl;
    }
};

int main()
{
    //��һ��
    People p("MiChong", 23);
    Student stu1(p);
    stu1.toString();

    //�ڶ���
    Student stu2("�׳�",24);
    stu2.toString();

    system("pause");
    return 0;
}
