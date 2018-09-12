#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //下面是不合法的，a引用的是一个字面量，字面量是没有地址值的
    //int &a = 20;

    //下面两种写法是等价的
    const int &b = 20;

    double c = 22.22;
    //下面代码发生了内在的转变
    //int temp = c;
    //const int &d = temp;所以假如c发生变化不会导致d发生变化的
    const int &d = c;

    //由于c和d的类型不一致，使用了相关类型初始化，结果为d的值是22，而不是3
    c=3.333;

    cout << "b的值：" << b << endl;
    cout << "d的值：" << d << endl;

    system("pause");
    return 0;
}
