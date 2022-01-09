#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void show_roll_number(void);
};

void Student::set_roll_number(int roll_no)
{
    roll_number = roll_no;
}

void Student::show_roll_number(void)
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths_marks;
    float physics_marks;

public:
    void set_marks(float, float);
    void show_marks(void);
};

void Exam::set_marks(float a, float b)
{
    maths_marks = a;
    physics_marks = b;
}

void Exam::show_marks(void)
{
    cout << "Marks obtained by roll_number " << roll_number << " in Physics is " << physics_marks << endl;
    cout << "Marks obtained by roll_number " << roll_number << " in Maths is " << maths_marks << endl;
}

class Result : public Exam
{
protected:
    float percentage;

public:
    void calc_percentage(void)
    {
        percentage = (physics_marks + maths_marks) / 2;
    }
    void diplay(void);
};

void Result::diplay(void)
{
    show_roll_number();
    show_marks();
    calc_percentage();
    cout << "Obtained " << percentage << "%" << endl;
}

int main()
{
    Result student1;

    student1.set_roll_number(17);
    student1.set_marks(97.1, 99.7);
    student1.diplay();

    return 0;
}
