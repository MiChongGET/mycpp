#include "Circle.h"

//功能的具体实现
void Circle::setR(double r)
{
    circle_r = r;
}

double Circle::getR()
{
    return circle_r;
}

double Circle::getArea()
{
    return 3.14 * circle_r * circle_r;
}

double Circle::getGirth()
{
    return 2 * 3.14 * circle_r;
}