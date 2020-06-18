#include <iostream>
using namespace std;
class employee
{
private:
    int employee_id;
    string name;
    float salary;

public:
    void getdata(void);
    void display(void);
};
void employee ::getdata(void)
{
    cout << "Enter Your Employee Id:" << endl;
    cin >> employee_id;
    cout << "Enter Your Name:" << endl;
    cin >> name;
    cout << "Enter Your Salary:" << endl;
    cin >> salary;
}
void employee ::display(void)
{
    cout << "Your Employee id is " << employee_id << " Your Name is " << name << " your salary " << salary << endl;
}
int main()
{
    employee e[3];
    for (int i = 0; i < 3; i++)
    {
        e[i].getdata();
        e[i].display();
    }

    return 0;
}