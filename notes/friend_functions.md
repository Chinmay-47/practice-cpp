### Friend Functions

<br>

```c++
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
```

- Friend functions are external functions that can access private members of objects of a given class
- This permission can be given to an external function from inside the class
- A function can be made a friend function of a particular class by adding the friend keyword followed by the function signature inside that particular class
- This declaration can be added in either the private or the public sections
- Here the add_complex_nums functions can access the private members of objects of the Complex class as it is declared as a friend function in the Complex class
- Friend functions cannot be accessed from objects of the class as they are not members of the class and are outside the scope of the class
