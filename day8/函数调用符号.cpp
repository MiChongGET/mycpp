#include <iostream>
#include <windows.h>

using namespace std;

class Sqr
{

  private:
    int a;

  public:
    Sqr(int a)
    {
        this->a = a;
    }

    int operator()(int value)
    {
        return value * value;
    }
};

int main()
{

    Sqr s(20);
    int a = s(10);

    //��һ�����󵱳�һ����ͨ����������
    //�����ֶ�����α�������º�����
    cout << "a��" << a << endl;
    system("pause");
    return 0;
}
