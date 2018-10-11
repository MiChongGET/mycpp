#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

/**
 * 编写一程序，将两个文件合并成一个文件。
 */
int main()
{
    char c[1024];

    ifstream if1("D:\\C\\work\\Cpp\\day12\\source1.txt");
    ifstream if2("D:\\C\\work\\Cpp\\day12\\source2.txt");

    ofstream osf("D:\\C\\work\\Cpp\\day12\\target.txt");

    /**
    * 每一个打开的文件都有一个文件指针，该指针的初始位置由I/O方式指定，
    * 每次读写都从文件指针的当前位置开始。每读入一个字节，指针就后移一个字
    * 节。当文件指针移到最后，就会遇到文件结束EOF（文件结束符也占一个字节，
    * 其值为-1)，此时流对象的成员函数eof的值为非0值(一般设为1)，表示文件结
    * 束了。
    */
    while (!if1.eof())
    {
        if1.getline(c, 999);
        osf << c << endl;
        cout << c << endl;
    }

    while (!if2.eof())
    {
        if2.getline(c, 999);
        osf << c << endl;
        cout << c << endl;
    }

    system("pause");
    return 0;
}
