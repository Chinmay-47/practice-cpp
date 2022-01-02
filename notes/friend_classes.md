### Friend Classes

<br>

```c++
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
```

- When we need multiple functions to be able to access private members of a given class and these functions belong to another class, we can declare the other class as a friend class
- Here, the functions in the Calculator class need to know about the private members of the Complex number class
- Hence, declaring the Calculator class as a friend class of the Complex number class gives all the functions in the Calculator class access to private members of the Complex number class
