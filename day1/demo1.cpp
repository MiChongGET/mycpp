#include <iostream>
using namespace std;

struct Student
{
    int age;
    char name[20];
};

int main()
{

    // test1
    
    return 0;
}

void test1(struct Student &s)
{
    s.age = 20;
}