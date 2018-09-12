#include <iostream>
using namespace std;

struct Teacher
{
    int age;
    char name[20];
};

//此时的t相当于teacher的别名，简化了C语言指针繁琐的问题
int getTeacher(Teacher *&t)
{
    t = (Teacher *)malloc(sizeof(Teacher));
    if (t == NULL)
    {
        return -1;
    }

    t->age = 24;
    return 0;
}

void FreeTeacher(Teacher *t)
{
    if (t == NULL)
    {
        return;
    }

    //释放
    free(t);
}

int main()
{
    //*teacher代表的是指针常量，存放指针地址的地方
    Teacher *teacher = NULL;
    getTeacher(teacher);
    cout << "老师的年龄：" << teacher->age << endl;
    FreeTeacher(teacher);
    system("pause");
    return 0;
}
