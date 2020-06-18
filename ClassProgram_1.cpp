#include <iostream>
using namespace std;
class student
{
private:
    int roll_no;
    string name;

public:
    void getdata();
    void showdata();
};
void student::getdata()
{
    cout << "Enter Your Roll No:" << endl;
    cin >> roll_no;
    cout << "Enter Your Name:" << endl;
    cin >> name;
}
void student::showdata()
{
    cout << "You entered " << roll_no << " as your roll no and your name is " << name << endl;
}
int main()
{
    student s;
    s.getdata();
    s.showdata();

    return 0;
}