### Inheritance

<br>

```c++
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
    int language_code;
    Programmer(int id)
    {
        emp_id = id;
        salary = 70000.0;
        language_code = 7;
    }
};

class Manager : public Employee
{
public:
    int team_code;
    Manager(int id)
    {
        emp_id = id;
        salary = 80000.0;
        team_code = 2;
    }
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
```

- Classes can derive attributes and behaviour from other classes
- Dervied classes are declared as "class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}"
- Visibility mode determines how the inheritance is performed
- Visiblity modes can be public or private
- Inherting publicly makes the public members of the base class public members of the derived class
- Inherting privately makes the public members of the base class private members of the derived class
- By default, the visibility mode is private
- Private members of the base class never become members of the derived class
