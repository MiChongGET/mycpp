#include <iostream>
#include <windows.h>
#include <memory>

using namespace std;

class A
{

  private:
    int a;

  public:
    A(int a)
    {
        this->a = a;
        cout << "A constructor" << endl;
    }
    ~A()
    {
        cout << "A destructor" << endl;
    }

    void dis()
    {
        cout << "in class A's dis" << endl;
        cout << "a=" << this->a << endl;
    }
};

class MyAutoPtr
{
  private:
    A *ptr;

  public:
    MyAutoPtr(A *ptr)
    {
        this->ptr = ptr;
    }

    // ->操作符重载
    A *operator->()
    {
        return this->ptr;
    }

    // 指针变量操作符* 重载
    A operator*()
    {
        return *ptr;
    }

    ~MyAutoPtr()
    {
        if (this->ptr != NULL)
        {
            delete ptr;
            this->ptr = NULL;
        }
    }
};

int main()
{
    //系统自带的
    // auto_ptr<A> ptr(new A(10));
    // ptr->dis();

    //自定义的智能指针
    MyAutoPtr ptr(new A(10));
    ptr->dis();
    (*ptr).dis();

    system("pause");
    return 0;
}
