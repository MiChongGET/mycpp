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

    //等号操作符重载
    Complex &operator=(const Complex &another)
    {
        //比较两个指针的地址,防止自身赋值
        if (this == &another)
        {
            return *this;
        }

        //先将自身的额外开辟的空间回收掉

        if (this->a != NULL)
        {
            delete[] this->a;
            this->a = NULL;
            this->b = 0;
        }

        //执行深拷贝
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

    Complex c3("米虫", 2);

    c2 = c3;
    
    c2.toString();
    c3.toString();

    system("pause");
    return 0;
}
