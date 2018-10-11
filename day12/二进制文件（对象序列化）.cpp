#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

class Teacher
{
  public:
    Teacher()
    {
        age = 33;
        strcpy(name, "");
    }
    Teacher(int _age, const char *_name)
    {
        age = _age;
        strcpy(name, _name);
    }
    void printT()
    {
        cout << "name:" << name << "-----age:" << age << endl;
    }

  protected:
  private:
    int age;
    char name[32];
};

int main()
{

    ofstream ofs("d:\\target.txt", ios::binary);
    if (!ofs)
    {
        cout << "�ļ���ʧ�ܣ�" << endl;
        return 0;
    }

    Teacher t1(18, "MiChong");
    Teacher t2(22, "������");

    //��������Ϣд�뵽�ļ���ȥ
    ofs.write((char *)&t1, sizeof(Teacher));
    ofs.write((char *)&t2, sizeof(Teacher));

    // ���ļ��ж�ȡ���л������Ϣ
    Teacher temp;

    ifstream ifs("d:\\target.txt", ios::in);
    ifs.read((char *)&temp, sizeof(Teacher));
    temp.printT();

    ifs.read((char *)&temp, sizeof(Teacher));
    temp.printT();

    system("pause");
    return 0;
}
