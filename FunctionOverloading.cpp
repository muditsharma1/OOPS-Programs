#include <iostream>
using namespace std;
class area
{
public:
    void calculate(int side)
    {
        int area = side * side;
        cout << "The Volume of Square With Side " << side << " is " << area << " cubic units" << endl;
    }
    void calculate(int length, int breadth)
    {
        int area = length * breadth;
        cout << "The Volume of rectangle With length " << length << "And breadth " << breadth << " is " << area << " cubic units" << endl;
    }
    void calculate(float radius)
    {
        float area = 3.14 * radius * radius;
        cout << "The Volume of circle With Radius " << radius << " is " << area << " cubic units" << endl;
    }
};
int main()
{
    area ar;
    int a, b;
    float c;
    cout << "Enter The Side of Square:" << endl;
    cin >> a;
    ar.calculate(a);
    cout << "Enter The Length and Breadth of Rectangle:" << endl;
    cin >> a >> b;
    ar.calculate(a, b);
    cout << "Enter The Radius of Circle:" << endl;
    cin >> c;
    ar.calculate(c);
    return 0;
}