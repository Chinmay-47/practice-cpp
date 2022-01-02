#include <iostream>

using namespace std;

class Complex
{
    float x, y;

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

    friend class Calculator;
};

class Calculator
{
public:
    inline float add_complex_parts(Complex a, Complex b)
    {
        return a.y + b.y;
    }

    inline float add_real_parts(Complex a, Complex b)
    {
        return a.x + b.x;
    }

    Complex add_complex_nums(Complex a, Complex b)
    {
        Complex temp;

        temp.set_values(a.x + b.x, a.y + b.y);

        return temp;
    }
};

int main()
{

    Complex var1, var2, sum;
    Calculator calc;
    float sum_real, sum_complex;

    var1.set_values(1.2, 3.4);
    var1.print();

    var2.set_values(3.7, 2.8);
    var2.print();

    sum_real = calc.add_real_parts(var1, var2);
    cout << "The sum of the real parts is: " << sum_real << endl;

    sum_complex = calc.add_complex_parts(var1, var2);
    cout << "The sum of the complex parts is: " << sum_complex << endl;

    sum = calc.add_complex_nums(var1, var2);
    sum.print();

    return 0;
}
