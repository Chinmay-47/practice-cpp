### Object Pointer and Arrow Operator

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{
protected:
    float real, imaginary;

public:
    Complex(float, float);
    inline void show(void)
    {
        cout << "Complex number is " << real << " + " << imaginary << "i" << endl;
    }
};

Complex::Complex(float real_, float imaginary_)
{
    real = real_;
    imaginary = imaginary_;
}

int main()
{
    Complex c1(2.7, 4.7);
    c1.show();

    Complex *c1_ptr = &c1;
    (*c1_ptr).show();
    c1_ptr->show();

    Complex *new_ptr = new Complex(1.7, 7.1);
    new_ptr->show();

    return 0;
}
```

- We can have pointers to objects of custom classes and not only primitive data types
- We can dereference and access the members and member functions using the * operator
- We can also access members and member functions using the arrow operator
