#pragma once

class Circle
{
public:
  //功能设置
  void setR(double set_r);
  double getArea();
  double getR();
  double getGirth();

private:
  //属性设置
  double circle_r;
  double area;
  double girth;
};