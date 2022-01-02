### Objects as Arguments

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{

public:
    float x, y;
    void set_values(float a, float b)
    {
        x = a;
        y = b;
    }
    inline void print(void)
    {
        cout << "The complex number is " << x << " + " << y << "i" << endl;
    }
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

- C++ allows us to pass objects as arguments to functions
- Here the add_complex_nums function takes objects of Complex class as arguments and returns an object of the Complex class
