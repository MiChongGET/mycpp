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
* 内联函数由编译器处理，
* 内部不能含有循环语句和判断语句,不能对函数进行取址操作
* 本质是牺牲代码空间为代价，提高程序的运行时间的效率
* 
*/
inline void printAB(int a, int b)
{
    cout<<"a="<<a<<"************b="<<b<<endl;
}