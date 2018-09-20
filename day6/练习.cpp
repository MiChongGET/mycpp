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

    //��̬��Ա����
    static void toTal()
    {
        cout << "��������" << num << ", �ܷ�����" << score << "ƽ���֣�" << (score / num) << endl;
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
