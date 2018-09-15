#include <iostream>
using namespace std;

//定义一个People类
class People
{
  //私有属性，外部无法直接访问，通过set,get方法设置值和修改值
  private:
    int age;
    string name;

  //公共属性
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
        cout << "姓名：" << getName() << endl;
        cout << "年龄：" << getAge() << endl;
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
