/*
 * ��������������У�������Ҫ��̬�ط���ͳ����ڴ�ռ䣬����Զ�̬
 * �����н��Ĳ�����ɾ������C�����������ÿ⺯��malloc��free������ͳ�
 *  ���ڴ�ռ�ġ�C++�ṩ�˽ϼ������ܽ�ǿ�������new��delete��ȡ��malloc��free����
 * 
 */

#include <iostream>
#include <windows.h>

using namespace std;

void test()
{
    //����?һ����������Ŀռ䣬��ָ���������ĳ�ֵΪ10������?һ��ָ��ô洢�ռ�ĵ�ַ
    int *p = new int(10);
    *p = 10;

    //����?һ�������������(����10��Ԫ��)�Ŀռ䣬����?��Ԫ�صĵ�ַ 
    int *array_p = new int[10];

    if (p != NULL)
    {
        //���ٿռ�
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
