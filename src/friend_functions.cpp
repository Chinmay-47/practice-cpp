#include <iostream>

using namespace std;

class Complex
{
    float x, y;

    // friend Complex add_complex_nums(Complex, Complex);
    // Can be added in the private section as well

public:
    void set_values(float a, float b)
    {
        x = a;
        y = b;
    }

    inline void print(void)
    {
        cout << "The complex number is " << x << " + " << y << "i" << endl;
    }

    friend Complex add_complex_nums(Complex, Complex);
};

Complex add_complex_nums(Complex a, Complex b)
{
    Complex temp;

    temp.set_values(a.x + b.x, a.y + b.y);

    return temp;
}

int main()
{

    Complex var1, var2, sum;

    var1.set_values(1.2, 3.4);
    var1.print();

    var2.set_values(3.7, 2.8);
    var2.print();

    sum = add_complex_nums(var1, var2);
    sum.print();

    return 0;
}
