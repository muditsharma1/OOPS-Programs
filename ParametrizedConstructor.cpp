#include <iostream>
#include <string>
using namespace std;
class parametrized_constructor
{
public:
    int student_id;
    string student_name;
    parametrized_constructor(int student_id, string student_name)
    {
        cout << "ID: " << student_id << endl
             << "Name: " << student_name << endl; //as we can see we have assigned  values in the form of parameters to constructor
    }
};
int main()
{
    parametrized_constructor pc(23, "Mudit");
    return 0;
}