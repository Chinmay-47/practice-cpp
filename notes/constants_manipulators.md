### Constants and Manipulators

<br>

```c++
#include<iostream>
#include<iomanip> // For using manipulators

using namespace std;

int main()
{
    const int num1 = 7;
    int num2 = 27;

    cout << num2 << endl;
    // num1 = 47; raises an error
    num2 = 47;
    cout << num2 << endl;

    int p = 7, q = 17, r = 127, s = 124777;

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "r = " << r << endl;
    cout << "s = " << s << endl;

    // setw manipulator - format output

    cout << "with setw(4) manipulator p = " << setw(4) << p << endl;
    cout << "with setw(4) manipulator q = " << setw(4) << q << endl;
    cout << "with setw(4) manipulator r = " << setw(4) << r << endl;
    cout << "with setw(4) manipulator s = " << setw(4) << s << endl;

    return 0;
}
```

- Declaring a variable with 'const' before the type makes them constants
- Constants are read only
- We need to include 'iomanip' in our header to use manipulators
- Manipulators are functions made to be used with insertion and extraction operators
- They are used to change formatting parameters on streams and to insert or extract certain special characters
- 'endl' is also a manipulator
- 'setw' is a set field width manipulator
