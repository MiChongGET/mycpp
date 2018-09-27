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

    //将一个对象当成一个普通函数来调用
    //称这种对象是伪函数（仿函数）
    cout << "a：" << a << endl;
    system("pause");
    return 0;
}
