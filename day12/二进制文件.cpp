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
        return;
    }

    system("pause");
    return 0;
}
