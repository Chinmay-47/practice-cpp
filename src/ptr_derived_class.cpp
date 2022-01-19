#include <iostream>

using namespace std;

class Base
{
public:
    int base_var;
    void show()
    {
        cout << "Base Class : base_var : " << base_var << endl;
    }
};

class Derived : public Base
{
public:
    int derived_var;
    void show()
    {
        cout << "Derived Class : base_var : " << base_var << endl;
        cout << "Derived Class : derived_var : " << derived_var << endl;
    }
};

int main()
{
    Base *base_ptr;

    Base base_obj;
    Derived derived_obj;

    base_ptr = &derived_obj;
    base_ptr->show();

    return 0;
}
