#include <iostream>
using namespace std;

int func(int a, int b)
{
    cout << a << "******" << b << endl;
    return 0;
}
//?方法?：
//声明一个函数类型
typedef int(myfun1)(int a, int b);

//?方法二：
//声明 一个函数指针类型
typedef int (*myfun2)(int a, int b);

int main(int argc, char const *argv[])
{

    myfun1 *m1 = func;
    m1(2, 3);

    myfun2 m2 = func;
    m2(1, 2);

    //?方法三：
    //定义一个函数指针变量
    int (*myfun3)(int a, int b) = func;
    myfun3(2, 3);

    system("pause");
    return 0;
}
