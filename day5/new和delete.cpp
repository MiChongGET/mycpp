/*
 * 在软件开发过程中，常常需要动态地分配和撤销内存空间，例如对动态
 * 链表中结点的插入与删除。在C语言中是利用库函数malloc和free来分配和撤
 *  销内存空间的。C++提供了较简便而功能较强的运算符new和delete来取代malloc和free函数
 * 
 */

#include <iostream>
#include <windows.h>

using namespace std;

void test()
{
    //开辟?一个存放整数的空间，并指定该整数的初值为10，返回?一个指向该存储空间的地址
    int *p = new int(10);
    *p = 10;

    //开辟?一个存放整形数组(包括10个元素)的空间，返回?首元素的地址 
    int *array_p = new int[10];

    if (p != NULL)
    {
        //销毁空间
        delete p;
    }

    for (size_t i = 0; i < 10; i++)
    {
        array_p[i] = i + 1;
    }

    for (size_t i = 0; i < 10; i++)
    {
        cout << array_p[i] << endl;
    }
}

int main()
{

    test();

    system("pause");
    return 0;
}
