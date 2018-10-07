#include <iostream>
#include <windows.h>

using namespace std;
/**
 *  抽象类的应用 
 */


class Interface1
{
  public:
    virtual void print() = 0;
    virtual int add(int a, int b) = 0;
};

class Interface2
{
  public:
    virtual void print() = 0;
    virtual int add(int a, int b) = 0;
    virtual int sub(int a, int b) = 0;
};

class Parent
{
  public:
    int a;
};

class Child : public Parent, public Interface1, public Interface2
{
  public:
    void print()
    {
        cout << "Child pring()" << endl;
    }

    int add(int a, int b)
    {
        return a + b;
    }
    int sub(int a, int b)
    {
        return a - b;
    }
};

int main()
{

    Child c;
    c.print();

    Interface1 *if1 = &c;
    Interface2 *if2 = &c;

    cout << if1->add(1, 2) << endl;
    cout << if2->add(1, 2) << endl;

    system("pause");
    return 0;
}
