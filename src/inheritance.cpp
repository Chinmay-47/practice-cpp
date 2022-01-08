#include <iostream>

using namespace std;

class Employee
{
public:
    int emp_id;
    float salary;
    Employee(){};
    Employee(int id)
    {
        emp_id = id;
        salary = 50000.0;
    }
};

class Programmer : Employee
{
public:
    Programmer(int id)
    {
        emp_id = id;
        salary = 70000.0;
    }
    int language_code = 7;
};

class Manager : public Employee
{
public:
    Manager(int id)
    {
        emp_id = id;
        salary = 80000.0;
    }
    int team_code = 2;
};

int main()
{
    Employee e1(3);
    cout << "Employee salary = " << e1.salary << endl;

    Programmer p1(17);
    // cout << "Programmer code = " << p1.emp_id << endl;    Cannot do this
    // cout << "Programmer salary = " << p1.salary << endl;  Cannot do this
    cout << "Programmer code = " << p1.language_code << endl;

    Manager m1(27);
    cout << "Manager id = " << m1.emp_id << endl;
    cout << "Manager salary = " << m1.salary << endl;

    return 0;
}
