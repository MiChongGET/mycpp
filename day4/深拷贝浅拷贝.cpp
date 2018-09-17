#include <iostream>
#include <windows.h>

using namespace std;

class Student
{
    //当属性中存在指针变量的时候，考虑使用深拷贝以防止出现堆栈调用问题
  public:
    char *p;
    int p_len;

    Student(char *char_p)
    {
        p_len = strlen(char_p);
        p = (char *)malloc(p_len + 1);
        strcpy(p, char_p);
    }

    //深拷贝过程
    Student(const Student &stu)
    {
        p_len = stu.p_len;
        cout << "指针长度" << p_len << endl;
        p = (char *)malloc(p_len + 1);
        strcpy(p, stu.p);
    }

    ~Student()
    {
        cout << "对象被销毁" << endl;
    }
};

int main()
{
    Student s1("MiChong");
    //C++编译器也是使?用的默认拷贝构造函数，也是浅拷贝
    Student s2 = s1;

    cout << s2.p << endl;
    system("pause");
    return 0;
}
