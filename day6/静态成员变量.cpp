#include <iostream>
#include <windows.h>

using namespace std;

class Student
{

  private:
    static int num;

  public:
    //static���εľ�̬��Ա����
    static int age;

    void toString()
    {
        cout << "���䣺" << age << endl;
    }

    //����һ����̬��Ա������������ʹ��static����
    static int getNum()
    {
        return num;
    }
};

//��̬��Ա������ʼ����һ��Ҫ���������
int Student::age = 18;
int Student::num = 100;

int main()
{
    Student t;
    t.toString();

    cout << "ѧ�ţ�" << t.getNum() << endl;

    system("pause");
    return 0;
}
