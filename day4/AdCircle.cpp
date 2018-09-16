/*
 *  判断点在圆上的位置 
 */
#include <iostream>
#include <math.h>
using namespace std;

//点类
class Point
{
  public:
    //设置坐标轴
    void setXY(double x, double y)
    {
        m_x = x;
        m_y = y;
    }
    double getX()
    {
        return m_x;
    }
    double getY()
    {
        return m_y;
    }

  private:
    double m_x;
    double m_y;
};

//圆类
class Circle
{
  private:
    double circle_x;
    double circle_y;
    double circle_r;

  public:
    void setXY(double x, double y, double r)
    {
        circle_x = x;
        circle_y = y;
        circle_r = r;
    }

    //判断点关于圆的位置
    void judgePosition(Point &p)
    {
        int distance;
        int r = circle_r * circle_r;

        distance = (circle_x - p.getX()) * (circle_x - p.getX()) + (circle_y - p.getY()) * (circle_y - p.getY());
        if (r > distance)
        {
            cout << "在圆内" << endl;
        }
        else if (r == distance)
        {
            cout << "在圆上" << endl;
        }
        else if (r < distance)
        {
            cout << "在圆外" << endl;
        }
    }
};

int main()
{

    Circle circle;

    circle.setXY(3, 4, 5);

    Point point;
    point.setXY(20, 30);
    circle.judgePosition(point);

    system("pause");
    return 0;
}
