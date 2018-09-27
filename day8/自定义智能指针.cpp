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

    // ->����������
    A *operator->()
    {
        return this->ptr;
    }

    // ָ�����������* ����
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
    //ϵͳ�Դ���
    // auto_ptr<A> ptr(new A(10));
    // ptr->dis();

    //�Զ��������ָ��
    MyAutoPtr ptr(new A(10));
    ptr->dis();
    (*ptr).dis();

    system("pause");
    return 0;
}
