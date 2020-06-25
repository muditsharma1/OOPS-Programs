#include <iostream>
using namespace std;
class Base_Class1
{
public:
    void intro()
    {
        cout << "My Name Is Mudit Sharma" << endl;
    }
};
class Base_Class2
{
public:
    void intro()
    {
        cout << "Mera Naam Mudit Sharma Hai" << endl;
    }
};
class derived : public Base_Class1, public Base_Class2
{

public:
    // we have to make function in derived class because it will cause ambiguity derived class will get confuse to go to base 1's intro or base'2 intro
    void intro()
    {
        Base_Class1::intro();
    }
};
int main()
{
    Base_Class1 Base_Class1obj;
    Base_Class2 Base_Class2obj;
    Base_Class1obj.intro();
    Base_Class2obj.intro();
    derived d;
    d.intro();
    return 0;
}