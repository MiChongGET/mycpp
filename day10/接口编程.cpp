#include <iostream>
#include <windows.h>

using namespace std;

/**
 *  ����ָ������ָ��һ���������������Ǻ������������ڵ�ַ
 * 
 */

int add(int a, int b)
{
    return a + b;
};

//��һ����������һ����������
int libfun(int (*p)(int a, int b))
{
    int a = 1;
    int b = 2;

    return p(a, b);
}

int main()
{

    int (*p)(int a, int b);
    p = add;

    cout << libfun(p) << endl;

    system("pause");
    return 0;
}