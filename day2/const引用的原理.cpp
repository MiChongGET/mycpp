#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //�����ǲ��Ϸ��ģ�a���õ���һ������������������û�е�ֵַ��
    //int &a = 20;

    //��������д���ǵȼ۵�
    const int &b = 20;

    double c = 22.22;
    //������뷢�������ڵ�ת��
    //int temp = c;
    //const int &d = temp;���Լ���c�����仯���ᵼ��d�����仯��
    const int &d = c;

    //����c��d�����Ͳ�һ�£�ʹ����������ͳ�ʼ�������Ϊd��ֵ��22��������3
    c=3.333;

    cout << "b��ֵ��" << b << endl;
    cout << "d��ֵ��" << d << endl;

    system("pause");
    return 0;
}
