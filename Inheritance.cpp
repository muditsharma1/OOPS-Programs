#include <iostream>
using namespace std;
class laptop
{
public:
    int ram;
    laptop(int Ram)
    {
        ram = Ram;
        cout << Ram << endl;
    }
    laptop(){};
};
class gaminglaptop : public laptop
{
public:
    int vram;
    gaminglaptop(int Vram)
    {
        vram = Vram;
        cout << vram;
    }
};
int main()
{
    laptop mudit(4);
    gaminglaptop mudits(8);
    return 0;
}