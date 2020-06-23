#include <iostream>
#include <string>
using namespace std;
class default_constructor
{
public:
    int student_id;
    string student_name;
    default_constructor()
    {
        cout << "ID: " << student_id << endl
             << "Name: " << student_name << endl; //as we can see we haven't assigned any values to constructor so it will print any garbage value
    }
};
int main()
{
    default_constructor dc;
    return 0;
}