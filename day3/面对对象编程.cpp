#include <iostream>
using namespace std;

//����һ��People��
class People
{
  //˽�����ԣ��ⲿ�޷�ֱ�ӷ��ʣ�ͨ��set,get��������ֵ���޸�ֵ
  private:
    int age;
    string name;

  //��������
  public:
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }

    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }

    void toString()
    {
        cout << "������" << getName() << endl;
        cout << "���䣺" << getAge() << endl;
    }
};

int main()
{

    People people;

    people.setName("MiChong");
    people.setAge(24);
    people.toString();

    system("pause");
    return 0;
}
