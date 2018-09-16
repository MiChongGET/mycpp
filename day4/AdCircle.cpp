/*
 *  �жϵ���Բ�ϵ�λ�� 
 */
#include <iostream>
#include <math.h>
using namespace std;

//����
class Point
{
  public:
    //����������
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

//Բ��
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

    double getX()
    {
        return circle_x;
    }
    double getY()
    {
        return circle_y;
    }
    double getR()
    {
        return circle_r;
    }

    //�жϵ����Բ��λ��
    void judgePosition(Point &p)
    {
        double distance;
        double r = circle_r * circle_r;

        distance = (circle_x - p.getX()) * (circle_x - p.getX()) + (circle_y - p.getY()) * (circle_y - p.getY());
        if (r > distance)
        {
            cout << "��Բ��" << endl;
        }
        else if (r == distance)
        {
            cout << "��Բ��" << endl;
        }
        else if (r < distance)
        {
            cout << "��Բ��" << endl;
        }
    }
    //�ж�����Բ��λ��
    void circlePersion(Circle &circle)
    {
        //Բ�ľ���ƽ��
        double circle_point_distance;
        //�뾶֮��ƽ��
        double circle_r_long = (circle_r + circle.getR()) * (circle_r + circle.getR());
        circle_point_distance = (circle.getX() - circle_x) * (circle.getX() - circle_x) + (circle.getY() - circle_y) * (circle.getY() - circle_y);

        if (circle_r_long > circle_point_distance)
        {
            cout << "����Բ�ཻ" << endl;
        }
        else if (circle_r_long == circle_point_distance)
        {
            cout << "����Բ����" << endl;
        }
        else if (circle_r_long < circle_point_distance)
        {
            cout << "����Բ����" << endl;
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

    Circle circle2;
    circle2.setXY(2, 3, 4);
    circle2.circlePersion(circle);

    system("pause");
    return 0;
}
