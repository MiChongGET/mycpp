#include <iostream>
#include <windows.h>

using namespace std;

class A
{
  private:
    int a;

  public:
    A(int a)
    {
        this->a = a;
    }

    void printA()
    {
        cout << "a=" << a << endl;
    }

    //����һ����Ԫ��B
    friend class B;
};

class B
{
  private:
    int b;

  public:
    B(int b)
    {
        this->b = b;
    }

    void printB()
    {

        A obja(100);
        cout<<"����B�е�A��"<<obja.a<<endl;
        cout << "b=" << b << endl;
    }
};

int main()
{

    B objb(200);
    objb.printB();
    system("pause");
    return 0;
}
