### Constructor Overloading

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{
    float real, imaginary;

public:
    Complex(void);
    Complex(float);
    Complex(float, float);
    inline void print(void)
    {
        cout << "The complex number is " << real << " + " << imaginary << "i" << endl;
    }
};

Complex::Complex(void)
{
    real = 0.0;
    imaginary = 0.0;
}

Complex::Complex(float a)
{
    real = a;
    imaginary = 0.0;
}

Complex::Complex(float a, float b)
{
    real = a;
    imaginary = b;
}

int main()
{
    Complex num1;
    Complex num2(1.7);
    Complex num3 = Complex(4.5, 7.1);
    Complex num4(3.5, 4.7);

    num1.print();
    num2.print();
    num3.print();
    num4.print();

    return 0;
}
```

- Constructor overloading is similar to function overloading
- A class can have multiple constructors based on the arguments
