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
