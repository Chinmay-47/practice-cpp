### Protected Members

<br>

```c++
#include <iostream>

using namespace std;

class Base
{
    int a;

protected:
    int b;

public:
    int c;

    void display()
    {
        cout << "This is the Base Class.." << endl;
        cout << "Private Member a = " << a << endl;
        cout << "Protected Member b = " << b << endl;
        cout << "Public Member c = " << c << endl;
    }
};

class PrivateDerived : Base
{
public:
    void display()
    {
        cout << "This is the PrivateDerived Class.." << endl;
        // cout << "Private Member a = " << a << endl;  'a' is not inherited
        cout << "Private Member b = " << b << endl;
        cout << "Private Member c = " << c << endl;
    }
};

class ProtectedDerived : protected Base
{
public:
    void display()
    {
        cout << "This is the ProtectedDerived Class.." << endl;
        // cout << "Private Member a = " << a << endl;  'a' is not inherited
        cout << "Protected Member b = " << b << endl;
        cout << "Protected Member c = " << c << endl;
    }
};

class PublicDerived : public Base
{
public:
    void display()
    {
        cout << "This is the PublicDerived Class.." << endl;
        // cout << "Private Member a = " << a << endl;  'a' is not inherited
        cout << "Protected Member b = " << b << endl;
        cout << "Public Member c = " << c << endl;
    }
};

int main()
{
    Base obj1;
    PrivateDerived obj2;
    ProtectedDerived obj3;
    PublicDerived obj4;

    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();

    return 0;
}
```

- Private members of the base class do not get inherited in the derived class
- But if we require them to inherited without having to make them public, we can use the protected access modifier
- Protected members are not as private as private members, which are accessible only to members of the class in which they are declared, but they are not as public as public members, which are accessible in any function
- They are eseentially like private members that can be inherited

<br>

#### Member access during each type of derivation:

<br>

|     |  Public Derivation  |  Private Derivation  |  Protected Derivation  |
|-------|-------------------|----------------|-----------------|
| Private Members | Not Inherited | Not Inherited | Not Inherited|
| Protected Members | Protected | Private | Protected |
| Public Members | Public | Private | Protected |
