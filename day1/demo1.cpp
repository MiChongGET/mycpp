/*
 *  ������Ϊ������������
 */
#include <iostream>
using namespace std;

struct Student
{
    int age;
    char name[20];
};

void test1(struct Student &s)
{
    //�൱�ڰ�sֱ�Ӵ����������sֱ���޸�
    s.age = 20;
}

int main()
{
    Student stu;
    stu.age = 10;
    //��ʱage�Ѿ����޸�Ϊ20��
    test1(stu);

    cout << "ѧ���������ǣ�" << stu.age << endl;
    system("pause");
    return 0;
}
