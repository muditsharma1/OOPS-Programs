#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Constructing A" << endl;
    }
    ~A()
    {
        cout << "Destructing A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Constructing B" << endl;
    }
    ~B()
    {
        cout << "Destructing B" << endl;
    }
};

class C : public A
{
public:
    C()
    {
        cout << "Constructing C" << endl;
    }
    ~C()
    {
        cout << "Destructing C" << endl;
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "Constructing D" << endl;
    }
    ~D()
    {
        cout << "Destructing D" << endl;
    }
};

int main()
{

    {
        cout << "For A" << endl;
        A a;
        cout << "For B" << endl;
        B b;
        cout << "For C" << endl;
        C c;
        cout << "For D" << endl;
        D d;
    }

    return 0;
}