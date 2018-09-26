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

    //友元函数
    friend Complex &operator+=(Complex &c1, Complex &c2);

    //操作符写在局部
    Complex operator-=(Complex &another)
    {
        this->a -= another.a;
        this->b -= another.b;
        return *this;
    }

    Complex &operator++()
    {
        this->a++;
        this->b++;

        return *this;
    }

    const Complex operator ++(int)//亚元,为的是和上面的那个函数区分开来
    {
        Complex temp(this->a,this->b);
        this->a++;
        this->b++;

        return temp;
    }

    void toString()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
};

//返回的是c1
Complex &operator+=(Complex &c1, Complex &c2)
{
    c1.a += c2.a;
    c1.b += c2.b;
    return c1;
}

//

int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);

    c1 += c2;
    c1.toString();

    c1 -= c2;
    c1.toString();

    ++c1;
    c1.toString();

    c2 = c1++;
    c1.toString();
    c2.toString();

    system("pause");
    return 0;
}
