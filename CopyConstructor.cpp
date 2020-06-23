#include <iostream>
using namespace std;
class copy_constructor
{
    int a, b;

public:
    copy_constructor(int x, int y) //Parameterized Constructor
    {
        a = x;
        b = y;
    }

    copy_constructor(copy_constructor &x) //Copy Constructor
    {
        a = x.a;
        b = x.b;
    }

    void display()
    {
        cout << "\na=" << a << ",b=" << b;
    }
};

int main()
{

    copy_constructor a(3, 4);
    a.display();

    copy_constructor b(a); //Or copy_constructor c=a;
    b.display();

    return 0;
}