### Copy Constructor

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{
    float real, imaginary;

public:
    Complex(Complex &obj)
    {
        cout << "Copy Constructor called..." << endl;
        real = obj.real;
        imaginary = obj.imaginary;
    }
    Complex(float a = 0.0, float b = 0.0)
    {
        real = a;
        imaginary = b;
    }
    inline void print(void)
    {
        cout << "The complex number is " << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{

    Complex num1(3.5, 4.7);
    num1.print();

    Complex num2(num1);
    num2.print();

    return 0;
}
```

- Copy constructor is a constructor that can create a copy an object
- We pass the object to be copied by reference to the copy constructor
- When no user defined copy constructor is found, the compiler assigns a default copy constructor to the class
