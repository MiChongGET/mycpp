#include <iostream>
#include <windows.h>

using namespace std;

class Complex
{
  private:
    char *a;
    int b;

  public:
    Complex()
    {
        this->a = NULL;
        this->b = 0;
    }

    Complex(char *a, int b)
    {
        int len = strlen(a);
        this->a = new char[len + 1];
        strcpy(this->a, a);

        this->b = b;
    }

    //�ȺŲ���������
    Complex &operator=(const Complex &another)
    {
        //�Ƚ�����ָ��ĵ�ַ,��ֹ����ֵ
        if (this == &another)
        {
            return *this;
        }

        //�Ƚ�����Ķ��⿪�ٵĿռ���յ�

        if (this->a != NULL)
        {
            delete[] this->a;
            this->a = NULL;
            this->b = 0;
        }

        //ִ�����
        int len = strlen(another.a);
        this->a = new char[len + 1];
        strcpy(this->a, another.a);
        this->b = another.b;

        return *this;
    }

    void toString()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
};

int main()
{

    Complex c1("michong", 1);
    Complex c2 = c1;

    Complex c3("�׳�", 2);

    c2 = c3;
    
    c2.toString();
    c3.toString();

    system("pause");
    return 0;
}
