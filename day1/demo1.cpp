/*
 *  ������Ϊ������������
 *  ����C���Ե�ָ����˵�����ø��Ӽ򵥺ͷ���
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

    //������ֵ
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << "����֮�����ֵ" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    system("pause");
    return 0;
}

//����������������ֵ
void swap(int &i, int &j)
{
    int temp;
    temp = i;
    i = j;
    i = temp;
}
