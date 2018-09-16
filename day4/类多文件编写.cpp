#include <iostream>
#include "Circle.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Circle circle;
    circle.setR(4);

    cout << "Ãæ»ýÊÇ£º" << circle.getArea() << endl;

    system("pause");

    return 0;
}
