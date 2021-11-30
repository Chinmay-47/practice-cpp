### Reference Variables

<br>

- Decimal literals are assumed to be double when the values are passed around. eg: 47.7
- Can make them floats by adding an f at the end. eg: 47.7f
- Can make them long doubles by adding an l at the end. eg: 47.7l
- Important later, during function overloading
- sizeof shows the size of a data type


```c++
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
```

- y is a reference variable and it references x
- x and y refer to the same integer object
- z has the same value but does not refer to the same object
- x and y have same memory address
- z has different memory address
