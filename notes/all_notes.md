# Complete Notes

Notes for all programs in order of progression.

<br>
<hr>
<br>

### First Program

<br>

- C++ is extremely fast
- Adds OOP to C
- Allows for memory management

<br>

```c++
#include<iostream>

int main(){
    std :: cout << "Hello World!";
    return 0;
}
```

- Include statement is like an import
- iostream is a built in library providing IO capabilities
- std is the namespace that containts the cout function
- cout is like print

<br>
<hr>
<br>

### Namespace

<br>

```c++
#include<iostream>
using namespace std;

int main(){
    cout << "Hello World!";
    return 0;
}
```

- Namespace is like the environment or context containing functions, classes, variables etc..
- Namespace essentialy defines a scope
- std is the standard namespace
- std contains standard
- We can also avoid prepending of namespaces with the "using namespace" directive

<br>

We have avoided calling the cout function like:
 ```c++
std :: cout << "Hello World!";
``` 
by writing: 
```c++
using namespace std;
cout << "Hello World!";
```

<br>
<hr>
<br>

### Variables and Comments

<br>

```c++
#include<iostream>
using namespace std;

/*
1st line
This is a multi line comment.
last line
*/

// Example comment 
int main(){
    int var1 = 7;
    float var2 = 7.0;
    cout << "Variables and Comments " << var1;
    cout << var2;
    return 0;
}
```

- Comments can placed using "//" before the sentences
- Multi line comments can be placed between "/*multi-line comment goes here */"
- Variables are data containers and their type has to be mentioned while declaring
- Variables types can be int, float, bool, char etc..

<br>
<hr>
<br>

### Variable Scope

<br>

```c++
#include<iostream>
using namespace std;

int global_scope = 7;

void print_global(){
    cout << "Variable global_scope has value: " << global_scope << "\n";
}

int main(){
    int global_scope = 17;

    cout << "Variable global_scope has value: " << :: global_scope << "\n";
    cout << "Variable global_scope has value: " << global_scope << "\n";
    print_global();
    return 0;
}
```

- We've declared a global integer variable holding a value 7
- We've declared a variable of the same name inside main but with value 7
- print_global is a function that prints the value of the global variable
- Having a variable inside a function (local variable or local scope) with the same name as a global variable does not affect the value of the global variable
- Variable with same name in C++ may mean different things based on the scope
- Global variables with same name as local variables can still be used locally by using the scope resolution operator "::" before the variable name

<br>
<hr>
<br>

### Basic I/O

<br>

```c++
#include<iostream>
using namespace std;

int main()
{
    // Cannot use C++ reserved keywords as variable names
    int num1, num2;

    cout << "Enter two numbers:\n";
    cin >> num1;
    cin >> num2;
    cout << "Entered numbers are: " << num1 << " and " << num2 << "\n";
    cout << "Their sum is : " << num1 + num2 << "\n";
    return 0;
}
```

- We can declare variables without assigning a default value
- We cannot use C++ reserved keywords as variable names
- Function cin in present in the std namespace
- cin is used to accept user values
- "<<" is called Insertion Operator
- ">>" is called Extraction Operator

<br>
<hr>
<br>

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
    cout << "(!(a == b)) = " << (!(a == b)) << endl; // Logical NOT
    cout << endl;
    
    return 0;
}
```

- "endl" operator is the same as writing "\n"
- C++ provides assignment, arithmetic, logical, comparison and bitwise operators

<br>
<hr>
<br>

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

<br>
<hr>
<br>

### TypeCasting

<br>

```c++
#include<iostream>

using namespace std;

int main(){

    int num1 = 7;
    float num2 = 17.47;

    cout << "Integer : " << num1 << endl;
    cout << "Float : " << num2 << endl;
    cout << "Float typecasted to Int : " << (int)num2 << endl;
    cout << "Float typecasted to Int : " << int(num2) << endl;
    cout << "Int typecasted to Double : " << double(num1) << endl;
    cout << "Size of Int : " << sizeof(num1) << endl;
    cout << "Size of Int typecasted to Double : " << sizeof(double(num1)) << endl;
    cout << endl;

    cout << "Arithmetic operations with types" << endl;
    cout << "(num1 + num2) = " << num1 + num2 << endl;
    cout << "(num1 + int(num2)) = " << num1 + int(num2) << endl;
    cout << "(double(num1) + num2) = " << double(num1) + num2 << endl;
    cout << "Size of double + float = " << sizeof(double(num1) + num2) << endl;

    return 0;
}
```

- C++ allows conversion between data types
- Conversion can be made writing by the data type to convert to, followed by the variable name 
- Either the variable name or the data type needs to be covered with brackets
- float + int = float
- double + float = double
- double + int = double

<br>
<hr>
<br>

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

<br>
<hr>
<br>
