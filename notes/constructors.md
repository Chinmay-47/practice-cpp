### Constructors

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{

    float real, imaginary;

public:
    Complex(void);
    inline void print(void)
    {
        cout << "The complex number is " << real << " + " << imaginary << "i" << endl;
    }
};

Complex::Complex(void)
{
    real = 13;
    imaginary = 17;
}

int main()
{
    Complex num;

    num.print();

    return 0;
}
```

- Constructor is a special member function with the same name as the class
- It is automatically called when an object of the class is created
- It can be used to set values for members of the objects while creating them
- We do not need to assign a return type to constructors
- Constructors that do not take any inputs are called default constructors
- Constructors always need to be declared in the public section of the class
