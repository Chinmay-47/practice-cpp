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
