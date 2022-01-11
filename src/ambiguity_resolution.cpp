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
