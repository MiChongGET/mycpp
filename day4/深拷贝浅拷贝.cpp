#include <iostream>
#include <windows.h>

using namespace std;

class Student
{
    //�������д���ָ�������ʱ�򣬿���ʹ������Է�ֹ���ֶ�ջ��������
  public:
    char *p;
    int p_len;

    Student(char *char_p)
    {
        p_len = strlen(char_p);
        p = (char *)malloc(p_len + 1);
        strcpy(p, char_p);
    }

    //�������
    Student(const Student &stu)
    {
        p_len = stu.p_len;
        cout << "ָ�볤��" << p_len << endl;
        p = (char *)malloc(p_len + 1);
        strcpy(p, stu.p);
    }

    ~Student()
    {
        cout << "��������" << endl;
    }
};

int main()
{
    Student s1("MiChong");
    //C++������Ҳ��ʹ?�õ�Ĭ�Ͽ������캯����Ҳ��ǳ����
    Student s2 = s1;

    cout << s2.p << endl;
    system("pause");
    return 0;
}
