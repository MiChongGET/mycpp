#include <iostream>
#include "Circle.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Circle circle;
    circle.setR(4);

    cout << "����ǣ�" << circle.getArea() << endl;

    system("pause");

    return 0;
}
