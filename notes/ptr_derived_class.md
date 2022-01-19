### Pointers to Derived Classes

<br>

```c++
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
```

- Pointers to base classes are allowed to point to derived classes in C++
- However the behaviour is not like general pointers to objects
- If we try to access any functions of the derived class using the base pointer assigned, it will not work
- This is due to a concept called early binding
- The compiler binds the pointer and directly associate an address to the function call
- Hence, if a pointer is declared to point to a base class but later made to point to a derived class, we cannnot access members and member functions of the derived class
