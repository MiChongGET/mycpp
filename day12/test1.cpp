#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

/**
 * ��дһ���򣬽������ļ��ϲ���һ���ļ���
 */
int main()
{
    char c[1024];

    ifstream if1("D:\\C\\work\\Cpp\\day12\\source1.txt");
    ifstream if2("D:\\C\\work\\Cpp\\day12\\source2.txt");

    ofstream osf("D:\\C\\work\\Cpp\\day12\\target.txt");

    /**
    * ÿһ���򿪵��ļ�����һ���ļ�ָ�룬��ָ��ĳ�ʼλ����I/O��ʽָ����
    * ÿ�ζ�д�����ļ�ָ��ĵ�ǰλ�ÿ�ʼ��ÿ����һ���ֽڣ�ָ��ͺ���һ����
    * �ڡ����ļ�ָ���Ƶ���󣬾ͻ������ļ�����EOF���ļ�������Ҳռһ���ֽڣ�
    * ��ֵΪ-1)����ʱ������ĳ�Ա����eof��ֵΪ��0ֵ(һ����Ϊ1)����ʾ�ļ���
    * ���ˡ�
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
