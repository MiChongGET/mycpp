#include <iostream>
using namespace std;

inline void printAB(int a, int b);

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;

    for (int i = 0; i < 100; i++)
    {
        a++;
        b++;
        printAB(a,b);
    }

    system("pause");

    return 0;
}

/*
* ���������ɱ���������
* �ڲ����ܺ���ѭ�������ж����,���ܶԺ�������ȡַ����
* ��������������ռ�Ϊ���ۣ���߳��������ʱ���Ч��
* 
*/
inline void printAB(int a, int b)
{
    cout<<"a="<<a<<"************b="<<b<<endl;
}