#include <iostream>
#include <windows.h>

using namespace std;

class Test
{
  public:
    int i;
    int getI() const//成员函数尾部出现const修饰的是this指针，this指针就不可以被引用
    {
        //this指针是一个长指针
        //this->i = 10;
    }
};

int main()
{

    system("pause");
    return 0;
}
