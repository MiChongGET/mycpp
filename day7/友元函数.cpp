#include <iostream>
#include <windows.h>

using namespace std;

////前向声明,是一种不完全型声明,即只需提供类名(无需提供类实现)即可。仅可?于声明指针和引?
class Point;

class Paper
{
  public:
    int getPoint(Point &p);
};

class Point
{
  private:
    int r;

  public:
    Point(int r)
    {
        this->r = r;
    }

    //定义一个全局的友元函数
    friend int getR(Point &p);

    //类成员函数作友元函数
    friend int Paper::getPoint(Point &p);
    ~Point();
};

int getR(Point &p)
{
    //允许生成的对象使用私有成员
    return p.r;
}

Point::~Point()
{
}

int Paper::getPoint(Point &p)
{
    return p.r;
}

int main()
{

    Point p(2);
    cout << getR(p) << endl;
    Paper point;
    cout << point.getPoint(p)<< endl;

    system("pause");
    return 0;
}
