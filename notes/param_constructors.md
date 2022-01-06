### Parameterized Constructors

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{
    float real, imaginary;

public:

    Complex(float, float);
    inline void print(void)
    {
        cout << "The complex number is " << real << " + " << imaginary << "i" << endl;
    }
};

Complex::Complex(float a, float b)
{
    real = a;
    imaginary = b;
}

int main()
{
    Complex num1 = Complex(4.5, 7.1);
    Complex num2(3.5, 4.7);

    num1.print();
    num2.print();

    return 0;
}
```

- Constructors can have arguments
- Constructors can also have default argument values
- We cannot refer to their addresses
- We can invoke parameterized constructors using the instance object variable or using the class name
