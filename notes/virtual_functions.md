### Virtual Functions

<br>

```c++
#include <iostream>

using namespace std;

class Base
{
public:
    int base_var;
    virtual void show()
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
```

- If we declare a pointer to a base class but assign the address of a derived class to it, it will still access the base class
- We can circumvent this issue of early binding by using virtual functions
- We need to define member functions as virtual using the virtual keyword
- We can use virtual functions to introduce run time polymorphism
- Virtual functions defined in the base class having functions with exact signatures in the derived class, allows pointers access member functions of the derived class
- Virtual functions are always defined in the base class and overridden in a derived class
- It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
- However, virtual functions cannot be static
