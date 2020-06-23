#include <iostream>
using namespace std;
class constructor
{
public:
    void Unknown()
    {
        cout << "Constructor is called" << endl;
    }
};
int main()
{
    constructor c;
    c.Unknown();
    return 0;
}