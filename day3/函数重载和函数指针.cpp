#include <iostream>
using namespace std;

int func(int a, int b)
{
    cout << a << "******" << b << endl;
    return 0;
}
//?����?��
//����һ����������
typedef int(myfun1)(int a, int b);

//?��������
//���� һ������ָ������
typedef int (*myfun2)(int a, int b);

int main(int argc, char const *argv[])
{

    myfun1 *m1 = func;
    m1(2, 3);

    myfun2 m2 = func;
    m2(1, 2);

    //?��������
    //����һ������ָ�����
    int (*myfun3)(int a, int b) = func;
    myfun3(2, 3);

    system("pause");
    return 0;
}
