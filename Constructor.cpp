#include <iostream>
using namespace std;
class constructor
{
public:
    constructor()
    {
        cout << "Constructor is called" << endl;
    }
};
int main()
{
    constructor c;
    return 0;
}
