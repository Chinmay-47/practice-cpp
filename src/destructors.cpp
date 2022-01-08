#include <iostream>

using namespace std;

class Complex
{
    float real, imaginary;

public:
    Complex(float a = 0.0, float b = 0.0)
    {
        cout << "Calling Constructor..." << endl;
        real = a;
        imaginary = b;
    }
    ~Complex()
    {
        cout << "Calling Destructor..." << endl;
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

    return 0;
}
