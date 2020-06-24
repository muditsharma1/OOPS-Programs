#include <iostream>
#include <string>
using namespace std;
class constructor
{
    int student_id;
    string student_name;
    int roll_no;

public:
    constructor()
    {
        cout << "ID:" << student_id << endl
             << "Name:" << student_name << endl;
    }
    constructor(int student_Id, string Student_name, int roll_no)
    {

        cout << "ID:" << student_id << endl
             << "Name:" << student_name << endl
             << "Roll_No" << roll_no << endl;
    }
    constructor(int Student_id, string student_Name)
    {
        cout << "ID:" << student_id << endl
             << "Name:" << student_name << endl;
    }

    constructor(const constructor &p)
    {
        cout << "ID:" << student_id << endl
             << "Name:" << student_name << endl;
    }
    ~constructor()
    {
        cout << "destructing " << student_id << endl;
    }
};
int main()
{
    constructor a;
    constructor p(23, "Mudit");
    constructor k = p;
    constructor f(2, "aditya", 4);
    return 0;
}