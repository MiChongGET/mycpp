#include <iostream>
#include <windows.h>

using namespace std;

////ǰ������,��һ�ֲ���ȫ������,��ֻ���ṩ����(�����ṩ��ʵ��)���ɡ�����?������ָ�����?
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

    //����һ��ȫ�ֵ���Ԫ����
    friend int getR(Point &p);

    //���Ա��������Ԫ����
    friend int Paper::getPoint(Point &p);
    ~Point();
};

int getR(Point &p)
{
    //�������ɵĶ���ʹ��˽�г�Ա
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
