#include <iostream>
#include <windows.h>

using namespace std;
class Student
{

  private:
  public:
    int age;
    string name;

    //Student�Ĺ��캯��
    Student()
    {
    }

    //��ʾ�Ŀ������캯��,��д�Ļ������Ĭ�ϵ�
    Student(const Student &another)
    {
        this->age = another.age;
        this->name = another.name;
        cout << "�����Ѿ�����" << endl;
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

    //��ֵ����������
    void operator=(const Student &another)
    {
        this->age = another.age;
        this->name = another.name;
        cout << "��ֵ����" << endl;
    }
};
int main()
{
    Student s1(18, "MiChong");

    //��ʼ������
    Student s2(s1);
    s2.toString();

    //��ʼ�����ÿ������캯��
    Student s3 = s1;
    s3.toString();

    //���治�ǵ��ÿ������������ǵ��ø�ֵ����������
    Student s4;
    s4 = s1;
    s4.toString();

    system("pause");
    return 0;
}
