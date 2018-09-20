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
        cout << "���䣺" << age << ", ������" << name << endl;
    }
};

//���ٶ���
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
    //����һ��ָ�������ʹ��new ��ʼ��ֵ
    Student *student = new Student(12, "MiChong");
    //��ӡ���ֵ
    student->toString();
    //ɾ��ֵ
    DeleteObj(student);
    system("pause");
    return 0;
}
