#pragma once

class Circle
{
public:
  //��������
  void setR(double set_r);
  double getArea();
  double getR();
  double getGirth();

private:
  //��������
  double circle_r;
  double area;
  double girth;
};