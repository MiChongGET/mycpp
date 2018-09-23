#include <iostream>
#include <windows.h>

using namespace std;

class Test
{
  private:
    int a;
    int b;

  public:
    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    Test &add(Test &t1)
    {
        this->a = this->a + t1.getA();
        this->b = this->b + t1.getB();

        return *this; //*������thisָ��ص�Ԫ��״̬
    }

    void toString()
    {
        cout << "a:" << a << "----b:" << b << endl;
    }
    ~Test()
    {
    }

    int getA()
    {
        return this->a;
    }

    int getB()
    {
        return this->b;
    }
};

int main()
{

    Test t1(100, 10);
    Test t2(200, 20);

    //���һ�������������ó�Ա������ÿ�ζ���ı��Լ�����Ա������Ҫ�������ã�
    t2.add(t1).add(t1);
    t2.toString();
    system("pause");
    return 0;
}
