#include <iostream>
#include <windows.h>

using namespace std;

class Complex
{
  private:
    int a;
    int b;

  public:
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    friend ostream &operator<<(ostream &os, Complex &c);

    friend istream &operator>>(istream &is, Complex &c);

    void toString()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
};

//���Ʋ�����
ostream &operator<<(ostream &os, Complex &c)
{
    os << "(" << c.a << "," << c.b << ")" << endl;

    return os;
}

//���Ʋ�����
istream &operator>>(istream &is, Complex &c)
{
    cout << "a:";
    is >> c.a;

    cout << "b:";
    is >> c.b;

    return is;
}

int main()
{
    Complex c1(1, 2);

    //����
    cout << c1;

    //����
    cin >> c1;
    cout << c1;

    system("pause");
    return 0;
}
