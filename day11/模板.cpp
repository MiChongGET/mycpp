#include <iostream>

using namespace std;
template <typename T>
void myswap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
};

int main()
{
    //1���Զ������Ƶ�
    int a = 1;
    int b = 2;
    myswap(a, b);
    cout << "a=" << a << "****b=" << b << endl;

    char c = 'c';
    char d = 'd';
    myswap(c,d);
    cout << "c=" << c << "****d=" << d << endl;

    //2����ʽ�����Ƶ�
    double e = 1.22;
    double f = 3.14;
    myswap<double>(e,f);    

    system("pause");
    return 0;
}
