#include<iostream>

using namespace std;

int main()
{

    cout << "Size of 47.7f is : " << sizeof(47.7) << endl;
    cout << "Size of 47.7f is : " << sizeof(47.7f) << endl;
    cout << "Size of 47.7F is : " << sizeof(47.7F) << endl;
    cout << "Size of 47.7l is : " << sizeof(47.7l) << endl;
    cout << "Size of 47.7L is : " << sizeof(47.7L) << endl;


    // Reference Variables
    int x = 47;
    int z = x;
    int &y = x;

    cout << "Value of x is : " << x << endl;
    cout << "Value of y is : " << y << endl;
    cout << "Value of z is : " << z << endl;
    cout << "Address of x is : " << &x << endl;
    cout << "Address of y is : " << &y << endl;
    cout << "Address of z is : " << &z << endl;

    return 0;
}
