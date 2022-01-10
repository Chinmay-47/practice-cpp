#include <iostream>

using namespace std;

class Base1
{
protected:
    int base1var;

public:
    void set_base1_var(int a)
    {
        base1var = a;
    }
};

class Base2
{
protected:
    int base2var;

public:
    void set_base2_var(int a)
    {
        base2var = a;
    }
};

class MultiDerived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "In MultiDerived class..." << endl;
        cout << "base1var = " << base1var << endl;
        cout << "base2var = " << base2var << endl;
    }
};

int main()
{
    MultiDerived der1;

    der1.set_base1_var(7);
    der1.set_base2_var(17);
    der1.display();

    return 0;
}
