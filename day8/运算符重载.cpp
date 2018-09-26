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

    //��Ԫ����
    friend Complex operator+(Complex &c1, Complex &c2);

    //��Ա����
    Complex operator*(Complex &another);

    //������д�ھֲ�
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

//�������������ʵ���Ǻ�������
//������д��ȫ��,���������Ԫ��������
Complex operator+(Complex &c1, Complex &c2)
{
    Complex temp(c1.a + c2.a, c1.b + c2.b);
    return temp;
}

//��Ա��������
Complex Complex::operator*(Complex &another)
{
    Complex temp(this->a * another.a, this->b * another.b);
    return temp;
}

int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);

    //ʵ����ӵĹ���
    //Complex c3 = operator+(c1,c2);
    //��Ԫ��������
    Complex c3 = c1 + c2;
    c3.toString();

    //��Ա��������
    c3 = c1 * c2;
    c3.toString();

    //����������д�ھֲ�
    c3 = c1 - c2;
    c3.toString();

    system("pause");
    return 0;
}
