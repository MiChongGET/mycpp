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
    friend Complex operator+(Complex &c1, Complex &c2);

    //成员函数
    Complex operator*(Complex &another);

    //操作符写在局部
    Complex operator-(Complex &another)
    {
        Complex temp(this->a - another.a, this->b - another.b);
        return temp;
    }

    void toString()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
};

//运算符函数，其实质是函数重载
//操作符写在全局,这个属于友元函数重载
Complex operator+(Complex &c1, Complex &c2)
{
    Complex temp(c1.a + c2.a, c1.b + c2.b);
    return temp;
}

//成员函数重载
Complex Complex::operator*(Complex &another)
{
    Complex temp(this->a * another.a, this->b * another.b);
    return temp;
}

int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);

    //实现相加的功能
    //Complex c3 = operator+(c1,c2);
    //友元函数重载
    Complex c3 = c1 + c2;
    c3.toString();

    //成员函数重载
    c3 = c1 * c2;
    c3.toString();

    //操作符重载写在局部
    c3 = c1 - c2;
    c3.toString();

    system("pause");
    return 0;
}
