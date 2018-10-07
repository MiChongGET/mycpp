#include <iostream>
#include <windows.h>

using namespace std;

/**
 *  函数指针用于指向一个函数，函数名是函数函数体的入口地址
 * 
 */

int add(int a, int b)
{
    return a + b;
};

//将一个方法当做一个参数传递
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