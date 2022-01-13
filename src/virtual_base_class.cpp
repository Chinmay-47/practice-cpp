#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int num)
    {
        roll_no = num;
    }
    void print_roll_no(void)
    {
        cout << "Roll number is: " << roll_no;
    }
};

class StudentTest : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float marks1, float marks2)
    {
        maths = marks1;
        physics = marks2;
    }
    void print_marks(void)
    {
        cout << "Marks scored are: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class StudentSports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Sports score is " << score << endl;
    }
};

class StudentResult : public StudentTest, public StudentSports
{
private:
    float total;

public:
    void display(void)
    {
        total = physics + maths + score;
        print_roll_no();
        print_marks();
        print_score();
        cout << "Total score is: " << total << endl;
    }
};

int main()
{
    StudentResult s1;

    s1.set_roll_no(7);
    s1.set_marks(97.5, 91.7);
    s1.set_score(94.7);

    s1.display();

    return 0;
}
