#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main()
{

    //打开一个文件
    ifstream ifs("D:\\test.txt", ios::in);
    char ch;

    if (!ifs)
    {
        cout << "文件打开失败！" << endl;
    }
    //读出文件中的字符
    while (ifs.get(ch))
    {
        cout << ch;
    }

    

    //往文件中写数据
    ofstream ofs("D:\\target.txt", ios::app);
    // char* hello =  "hello world!";
    // ofs.put(*hello);

    ofs << "hello world!" << endl;

    ofs.close();
    ifs.close();

    system("pause");
    return 0;
}
