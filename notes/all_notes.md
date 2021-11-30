# Complete Notes

Notes for all programs in order.

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
    cout << "(!(a == b)) = " << (!(a == b)) << endl; // Logical Not
    cout << endl;
    
    return 0;
}
```

- "endl" operator is the same as writing "\n"
- C++ provides assignment, arithmetic, logical, comparison and bitwise operators

