#include <iostream>
#include <windows.h>

using namespace std;

class B
{
  public:
    int b;

    B()
    {
        this->b = 10;
    }
};

class B1 : virtual public B
{
};
class B2 : virtual public B
{
};

class C : public B1, public B2
{
};

int main()
{

    C c;
    cout << c.B1::b << endl;
    cout << c.B2::b << endl;

    system("pause");
    return 0;
}
