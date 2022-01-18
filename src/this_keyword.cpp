#include <iostream>

using namespace std;

class A
{
    int a;

public:
    void set_a(int a)
    {
        // a = a;   This is wrong as a gets a garbage value
        this->a = a;
    }
    void show(void)
    {
        cout << "Value of a: " << a << endl;
    }
};

int main()
{

    A x;
    x.set_a(7);
    x.show();

    return 0;
}
