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

        return *this; //*操作让this指针回到元素状态
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

    //如果一个对象连续调用成员方法，每次都会改变自己，成员方法需要返回引用！
    t2.add(t1).add(t1);
    t2.toString();
    system("pause");
    return 0;
}
