#include <iostream>
#include <windows.h>

using namespace std;

class Parent
{
  public:
    int a;

    virtual void child() = 0;
};

class Son : public Parent
{
  public:
    Son(){

    }
    void child()
    {
        cout << "�����к�������" << endl;
    }
};

class Daughter : public Parent
{
  public:
    Daughter(){
        
    }
    void child()
    {
        cout << "����Ů��������" << endl;
    }
};

int main()
{
    Parent* p1 = new Son();
    Parent* p2 = new Daughter();

    p1->child();
    p2->child();

    system("pause");
    return 0;
}
