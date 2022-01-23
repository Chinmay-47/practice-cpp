### Abstract Base Classes and Pure Virtual Functions

<br>

```c++
#include <iostream>

using namespace std;

class Base
{
public:
    int base_var;
    virtual void show() = 0;
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

    Derived derived_obj;

    base_ptr = &derived_obj;
    base_ptr->show();

    return 0;
}
```

- Pure virtual functions are virtual functions that compulsorily need to be overridden in derived classes
- Pure virtual functions are like abstract methods in Python
- Virtual functions can be made pure virtual by adding "= 0" at the end, during their declaration
- Declaring virtual functions in a class makes the class an abstract base class
- An abstract base class cannot be instantiated
- It can only serve as a bueprint for classes deriving from it
- An abstract base class can have other methods that are not virtual, but having even one pure virtual function makes the class abstract
