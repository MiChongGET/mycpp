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
        cout << "文件打开失败！" << endl;
        return 0;
    }

    Teacher t1(18, "MiChong");
    Teacher t2(22, "赵晓东");

    //将对象信息写入到文件中去
    ofs.write((char *)&t1, sizeof(Teacher));
    ofs.write((char *)&t2, sizeof(Teacher));

    // 从文件中读取序列化后的信息
    Teacher temp;

    ifstream ifs("d:\\target.txt", ios::in);
    ifs.read((char *)&temp, sizeof(Teacher));
    temp.printT();

    ifs.read((char *)&temp, sizeof(Teacher));
    temp.printT();

    system("pause");
    return 0;
}
