#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_number(int r)
    {
        roll_no = r;
    }
    void print_number(void)
    {
        cout << "Your Roll No is: " << roll_no << endl;
    }
};
class Test : public virtual Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your Result is: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};
class Sports : public virtual Student
{
protected:
    float Score;

public:
    void Set_Score(float S)
    {
        Score = S;
    }
    void print_score(void)
    {
        cout << "Your Score is " << Score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + Score;
        print_number();
        print_marks();
        print_score();
        cout << "Your Total Score is: " << total << endl;
    }
};
int main()
{
    Result Mudit;
    Mudit.set_number(21);
    Mudit.set_marks(82.3, 95.9);
    Mudit.Set_Score(9.26);
    Mudit.display();
    return 0;
}