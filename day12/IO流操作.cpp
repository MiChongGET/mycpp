#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main()
{

    //��һ���ļ�
    ifstream ifs("D:\\test.txt", ios::in);
    char ch;

    if (!ifs)
    {
        cout << "�ļ���ʧ�ܣ�" << endl;
    }
    //�����ļ��е��ַ�
    while (ifs.get(ch))
    {
        cout << ch;
    }

    

    //���ļ���д����
    ofstream ofs("D:\\target.txt", ios::app);
    // char* hello =  "hello world!";
    // ofs.put(*hello);

    ofs << "hello world!" << endl;

    ofs.close();
    ifs.close();

    system("pause");
    return 0;
}
