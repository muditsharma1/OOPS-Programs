#include <iostream>
using namespace std;
class calculator
{
    int n1;
    int n2;
    char symbol;

public:
    void add()
    {
        cout << "The Addition Will Be: " << n1 + n2 << endl;
    }
    void sub()
    {
        cout << "The Subtraction Will Be: " << n1 - n2 << endl;
    }
    void multi()
    {
        cout << "The Multiplication Will Be: " << n1 * n2 << endl;
    }
    void divi()
    {
        cout << "The Division Will Be: " << n1 / n2 << endl;
    }
    calculator(int a, int b, char s)
    {
        n1 = a;
        n2 = b;
        symbol = s;
        switch (symbol)
        {
        case '+':
            add();
            break;

        case '-':
            sub();
            break;

        case '*':
            multi();
            break;

        case '/':
            divi();
            break;

        default:
            cout << "invalid value entered" << endl;
            break;
        }
    }
};
int main()
{
    calculator(1, 2, '+');
    calculator(1, 2, '-');
    calculator(1, 2, '*');
    calculator(1, 2, '/');
    return 0;
}