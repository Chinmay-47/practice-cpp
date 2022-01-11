### Ambiguity Resolution

<br>

```c++
#include <iostream>

using namespace std;

class Base1
{
public:
    void display(void)
    {
        cout << "Displaying Base1..." << endl;
    }
};

class Base2
{
public:
    void display(void)
    {
        cout << "Displaying Base2..." << endl;
    }
};

class MultiDerived : public Base1, public Base2
{
public:
    void display(void)
    {
        Base1 ::display();
    }

    // Use from base class or re define
    // void display(void)
    // {
    //     cout << "Displaying MultiDerived..." << endl;
    // }
};

int main()
{
    Base1 base1_obj;
    Base2 base2_obj;
    MultiDerived dervied_obj;

    base1_obj.display();
    base2_obj.display();

    dervied_obj.display();

    return 0;
}
```

- During multiple inheritance if there is a duplication of member or member function names among the base classes, the derived class raises an error for ambiguous name lookup
- We have to manually resolve this ambiguity by defining which member or member function should be used in the derived class by using the scope resolution operator
- But if the derived class has a member or member function with the same name as the base classes, it overrides the definition
- So, essentially we have to either specify which member function from the base classes the derived class should use or we have to re-define the member function in the derived class 
