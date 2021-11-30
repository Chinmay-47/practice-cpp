### Header files and Operators

<br>

- Types of header files:
    - System header files - Shipped with compiler
    - User defined header files - Defined by user

Check out cppreference in google to know more on system header files


```c++
#include<iostream>
using namespace std;

// Example of user defined header file.
#include "headers_operators.h"

int main()
{
    // endl - End line operator
    cout << "End line Operator in C++" << endl;
    cout << endl;


    // Arithmetic operators
    int a = 7, b = 3;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a++ = " << a++ << endl; // Increments after printing
    cout << "a-- = " << a-- << endl; // Decrements after printing
    cout << "++a = " << ++a << endl; // Increments before printing
    cout << "--a = " << --a << endl; // Decrements before printing
    cout << endl;


    // Comparison operators
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a >= b = " << (a == b) << endl;
    cout << "a <= b = " << (a == b) << endl;
    cout << endl;


    // Logical Operators
    cout << "a = " << a << ", b = " << b << endl;
    cout << "((a == b) && (a > b)) = " << ((a == b) && (a > b)) << endl; // Logical AND
    cout << "((a > b) && (b < a)) = " << ((a > b) && (b < a)) << endl;
    cout << "((a == b) || (b < a)) = " << ((a == b) || (b < a)) << endl; // Logical OR
    cout << "(!(a == b)) = " << (!(a == b)) << endl; // Logical Not
    cout << endl;
    
    return 0;
}
```

- "endl" operator is the same as writing "\n"
- C++ provides assignment, arithmetic, logical, comparison and bitwise operators
