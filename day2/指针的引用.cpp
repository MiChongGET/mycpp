#include <iostream>
using namespace std;

struct Teacher
{
    int age;
    char name[20];
};

//��ʱ��t�൱��teacher�ı���������C����ָ�뷱��������
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

    //�ͷ�
    free(t);
}

int main()
{
    //*teacher�������ָ�볣�������ָ���ַ�ĵط�
    Teacher *teacher = NULL;
    getTeacher(teacher);
    cout << "��ʦ�����䣺" << teacher->age << endl;
    FreeTeacher(teacher);
    system("pause");
    return 0;
}
