#include <iostream>
#include <windows.h>

using namespace std;

class Test
{
  public:
    int i;
    int getI() const//��Ա����β������const���ε���thisָ�룬thisָ��Ͳ����Ա�����
    {
        //thisָ����һ����ָ��
        //this->i = 10;
    }
};

int main()
{

    system("pause");
    return 0;
}
