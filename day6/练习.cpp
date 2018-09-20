#include <iostream>
#include <windows.h>

using namespace std;
class Student
{
  private:
    int id;
    static int num;
    static int score;

  public:
    Student(int id, int score)
    {
        num++;

        this->score += score;
    }

    //静态成员函数
    static void toTal()
    {
        cout << "总人数：" << num << ", 总分数：" << score << "平均分：" << (score / num) << endl;
    }
};

int Student::num = 0;
int Student::score = 0;

int main()
{

    new Student(1, 88);
    new Student(2, 99);
    new Student(3, 67);

    Student::toTal();

    system("pause");
    return 0;
}
