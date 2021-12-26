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

### Control Structures

<br>

```c++
#include<iostream>

using namespace std;

int main()
{
    int height_cm;
    cout << "Enter height in cms : " << endl;
    cin >> height_cm;
    if (height_cm > 180){
        cout << "You are more than 6 Feet tall" << endl;
    }
    else if (height_cm == 180){
        cout << "You are 6 Feet tall" << endl;
    }
    else{
        cout << "You are less than 6 Feet tall" << endl;
    }
    return 0;
}
```

- "if", "else" and "else if" are used for conditional checks
- Condition to check is defined inside brackets
- The action to perform is defined inside curly brackets after the condition check

<br>

```c++
#include<iostream>

using namespace std;

int main()
{
    int height_cm;
    cout << "Enter height in cms : " << endl;
    cin >> height_cm;
    cout << "Doing the same with Switch Case statement" << endl;
    switch (height_cm)
    {
    case 180:
        cout << "You are 6 Feet tall" << endl;
        break;
    case 150:
        cout << "You are less than 6 Feet tall" << endl;
        break;
    case 190:
        cout << "You are more than 6 Feet tall" << endl;
        break;
    default:
        cout << "Default case executed when all other cases fail" << endl;
        break;
    }

    return 0;
}
```

- We can use the switch case statement when there are multiple conditions
- We can avoid a long else if ladder by using this
- We enter the variable being compared inside the switch statement
- We perform tasks based on comparisons to the variable inside switch, using case statements
- We define a default case to execute if all other comparisons fail
- If we do not "break" inside each case, all cases get executed

<br>
<hr>
<br>

### Loops

<br>

```c++
#include<iostream>

using namespace std;

int main()
{
    cout << "For loop" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}
```
- For loops take an initial value, a condition and an operation
- Performs the actions as well as the declared operation inside the loop, as long as the condition specified is true

<br>

```c++
#include<iostream>

using namespace std;

int main()
{
    cout << "While loop" << endl;
    int j = 0;
    while (j < 5)
    {
        cout << j << endl;
        j++;
    }

    return 0;
}
```
- While loop performs actions only if condition is true
- The operation has to be defined inside the loop
- Easy to produce infinite loops if the operation never breaks the condition or if an operation is not defined

<br>

```c++
#include<iostream>

using namespace std;

int main()
{
    cout << "Do While loop" << endl;
    int k = 0;
    do
    {
        cout << k << endl;
        k++;
    } while (k < 5);

    return 0;
}
```
- Similar to while loop
- Only difference is that, regardless of the condition, the loop runs atleast once

<br>
<hr>
<br>

### Break and Continue Statement

<br>

```c++
#include<iostream>

using namespace std;

int main(){

    cout << "Break Statement" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        if (i == 5)
        {
            break;
        }
        
    }
    
    return 0;
}
```
- Break statement stops the execution of the loop and exits the loop

<br>

```c++
#include<iostream>

using namespace std;

int main(){
    
    cout << "Continue Statement" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;

    }
    
    return 0;
}
```
- Continue statement skips to the next iteration without execution of code present after the continue statement

<br>
<hr>
<br>

### Pointers

<br>

```c++
#include<iostream>

using namespace std;

int main(){

    int a = 3;
    int* b = &a;

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Address of a: " << &a << endl;
    cout << "The value at address b: " << *b << endl;

    return 0;
}

```

- Pointers are data types holding addresses to other data types
- They are declared by the data type followed by '*'
- '&' is an operator that gives the address of a variable
- '*' shows the value contained at the address that the pointer points to
- It is an operator to "de-reference" a pointer

<br>

```c++
#include<iostream>

using namespace std;

int main(){

    int a = 3;
    int* b = &a;
    int** c = &b;

    cout << "Value of c: " << c << endl;
    cout << "Address of b: " << &b << endl;
    cout << "The value at address c: " << *c << endl;
    cout << "The value at address b from c: " << **c << endl;

    return 0;
}

```

- A pointer can also hold addresses to other pointers
- These are pointers to pointers and can be declared by '**'
- They can also be de-referenced by '*' and '**'

<br>
<hr>
<br>

### Arrays

<br>

```c++
#include<iostream>

using namespace std;

int main(){

    int my_array1[4] = {1, 2, 3, 4};
    int my_array2[] = {5, 6, 7, 8};

    cout << "Array1 with size definition" << endl;
    for (int i = 0; i < 4; i++){
        cout << my_array1[i] << endl;
    }

    cout << "Array2 without size definition" << endl;
    for (int i = 0; i < 4; i++){
        cout << my_array2[i] << endl;
    }    

    cout << "Changing values in Array1" << endl;
    my_array1[1] = 47;
    for (int i = 0; i < 4; i++){
        cout << my_array1[i] << endl;
    }

    return 0;
}
```

- Arrays are collections of a given data type
- We can use these instead of many variables
- We can declare arrays with a given size and data type
- We can also declare them without a size and C++ will figure it out
- We can iterate through them with an index starting from 0
- We can also access the elements of the array using the index
- We can also modify elements in the arrays 
- Be careful while assigning new values to arrays outside the defined size (eg: assigning 5th element in a 4 element array)
- This can alter values in other arrays due to some memory location stuff

<br>
<hr>
<br>

### Pointer Arithmetic

<br>

```c++
#include<iostream>

using namespace std;

int main(){

    int my_array[4] = {1, 2, 3, 4};

    cout << my_array << endl;

    int* my_pointer = my_array;
    
    cout << my_pointer << endl;
    cout << *my_pointer << endl;

    cout << ++my_pointer << endl;
    cout << *(my_pointer) << endl;

    return 0;
}
```

- Name of the array variable gives the address of the first block
- Cannot get address with '&' as the variable itself gives a pointer
- Dereferencing the variable will give the first value = my_array[0]
- Incrementing the pointer will give the address of the next block
- Basically, new_address = current_address + (i * data_type_size)
- For integer an increment will move to next 4 bytes

<br>
<hr>
<br>

### Structures

<br>

```c++
#include<iostream>

using namespace std;

struct employee
{
    int emp_id;
    int salary;
    char tag;
};

typedef struct manager
{
    int emp_id;
    int salary;
    char tag;
} manager;


int main(){

    struct employee emp1;
    struct employee emp2;

    emp1.emp_id = 247;
    emp1.salary = 47000;
    emp1.tag = 'Z';

    cout << "Value of emp_id: "<< emp1.emp_id << endl;
    cout << "Value of salary: "<< emp1.salary << endl;
    cout << "Value of tag: "<< emp1.tag << endl;


    manager man1;
    man1.emp_id = 127;
    man1.salary = 71000;
    man1.tag = 'A';

    cout << "Value of emp_id: "<< man1.emp_id << endl;
    cout << "Value of salary: "<< man1.salary << endl;
    cout << "Value of tag: "<< man1.tag << endl;


    return 0;
}
```

- Structures are essentially custom data types
- Can be a collection of different data types
- Can have multiple instances of a structure
- It is like a dataclass in Python
- Can be instantiated by using "struct structure_name instance_name;"
- We can avoid writing struct during every instantiation by using typedef
- Typedef kind of gives an alias to your custom data type
- By adding typedef we can instantiate a structure using just "alias instance_name;"

<br>
<hr>
<br>

### Unions

<br>

```c++
#include<iostream>

using namespace std;


typedef union demo
{
    int attribute1;
    char attribute2;
} demo;


int main(){

    demo d;

    d.attribute1 = 7;
    cout << "Value of attribute1 of union: " << d.attribute1 << endl;
    cout << "Value of attribute2 of union: " << d.attribute2 << endl;

    d.attribute2 = 'Z';
    cout << "Value of attribute1 of union: " << d.attribute1 << endl;
    cout << "Value of attribute2 of union: " << d.attribute2 << endl; 

    return 0;
}
```

- Unions are like structures, but with better memory management
- We can use unions when we need to use only one attribute at a time
- In structures all attributes are allocated memory
- Maximum memory used by a structure is the sum of memories of all attributes
- In unions, as only one attribute is used at a time, they share memory
- Maximum memory used by a union is the size of its biggest data type
- If another attribute is set in unions, it overwrites the previously set attribute
- The previous attribute will then contain garbage values

<br>
<hr>
<br>

### Enums

<br>

```c++
#include<iostream>

using namespace std;

enum Car{ferrari, mclaren, mercedes};

int main(){

    cout << ferrari << endl;
    cout << mclaren << endl;
    cout << mercedes << endl;

    Car fer1 = ferrari;
    cout << fer1 << endl;

    return 0;
}
```

- Enums are enumerations of some types or categories
- They are stored as integers but represent categories
- They essentially map an integer to a given category

<br>
<hr>
<br>

### Functions

<br>

```c++
#include<iostream>

using namespace std;

int add_nums(int a, int b){
    int c = a + b;
    return c;
}

int main(){

    int num1, num2;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is: " << add_nums(num1, num2) << endl;

    return 0;
}
```

- Functions are blocks of code that run only when they are called
- They perform a certain defined task
- They are extremely useful for reusing code without code repetition
- Functions can be user defined and C++ has several built-in functions as well

<br>
<hr>
<br>

### Function Prototypes

<br>

```c++
#include<iostream>

using namespace std;

// Function Prototypes
// int add_nums(int a, int b);
// void my_void_func(void);
int add_nums(int, int);
void my_void_func();


int main(){

    int num1, num2;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is: " << add_nums(num1, num2) << endl;
    my_void_func();
    return 0;
}

int add_nums(int a, int b){
    int c = a + b;
    return c;
}

void my_void_func(){
    cout << "This is a void function call" << endl;
}
```

- Function prototypes are used when functions are defined outside the scope of the main function
- Function prototypes are defined like -> type function_name(arguments)
- Function prototype tells the compiler that there exists a function with the given name and arguments, and returns a given type of value
- This avoids a compilation error if the actual function is defined outside the scope of the main function
- The arguments in function prototypes may or may not be variables, they can only be types
- Another way to define function prototypes -> type function_name(arg1_type, arg2_type)
- Parameters defined in the functions are called formal parameters
- Parameters passed into the functions are called actual parameters
- Void functions return nothing
- If a function takes no parameters it can be prototyped by giving arguments as void or by not giving any parameters in the prototype

<br>
<hr>
<br>

### Call by Reference

<br>

```c++
#include<iostream>

using namespace std;

void swap_with_values(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_with_pointers(int* a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_with_reference_vars(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){

    int num1 = 7, num2 = 27;

    cout << "a = " << num1 << " and b = " << num2 << endl;
    swap_with_values(num1, num2);
    cout << "After calling swap function a = " << num1 << " and b = " << num2 << endl;
    swap_with_pointers(&num1, &num2);
    cout << "After calling swap function that uses pointers a = " << num1 << " and b = " << num2 << endl;
    
    // Re-initialize as they've been swapped
    num1 = 7;
    num2 = 27;
    swap_with_reference_vars(num1, num2);
    cout << "After calling swap function that uses reference variables a = " << num1 << " and b = " << num2 << endl;

    return 0;
}
```

- A function copies actual parameters into formal parameters
- Hence the swap function only swaps the copies or the local variables
- We can swap actual values by using pointers
- By using call by reference, we can use addresses of variables
- Since the memory location of variables is the same inside and outside the function, the swap using dereferencing works
- The copies or local variables get destroyed after the function call ends
- So the swap persists in memory outside the function
- Instead of pointers, we can also achieve this using reference variables
- We can make the formal arguments reference variables that refer the actual parameters

<br>
<hr>
<br>

### Inline Functions

<br>

```c++
#include<iostream>

using namespace std;

inline int multiply(int a, int b){
    return a * b;
}

int main(){

    int num1, num2;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Product of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;

    return 0;
}
```

- If a simple function is called multiple times in a program, all the underlying tasks required to run a function need to be performed every time
- This adds up over the number of function calls
- Inline functions can handle this issue efficiently
- Compiler replaces Inline function calls with the function code during compile time
- Tasks like copying actual parameters into formal parameters each time and retrieving the return values are avoided during run time
- However, making every function an Inline function defeats the purpose of using functions
- Making every function an Inline function takes up space in the cache
- Only functions that are simple and a few lines long should be made inline
- Inline functions should also be avoided in recursive functions and functions that use static variables

```c++
// Example of a static variable
int multiply(int a, int b){
    static int c = 0;
    c++;
    return (a * b) + c;
}
```
- Static variables are variables that are initialized only once
- Subsequent function calls do not re-initialize static variables
- They maintain state across function calls

<br>
<hr>
<br>

### Default Arguments

<br>

```c++
#include<iostream>

using namespace std;

float interest(float principle, float interest_rate = 1.10){
    // Function with default arguments
    return principle * interest_rate;
}


int main(){

    float amount;
    cout << "Enter principle amount: " << endl;
    cin >> amount;
    cout << "Amount after a year with interest: " << interest(amount) << endl;
    float rate;
    cout << "Enter custom interes rate: " << endl;
    cin >> rate;
    cout << "Amount after a year with custom interest rate: " << interest(amount, rate)<< endl;

    return 0;
}
```

- Default arguments of a function, do not always need an input when the function is called
- They have a default value that is used when there is no input
- Default arguments need to be declared after positional arguments

<br>
<hr>
<br>

### Recursive Functions

<br>

```c++
#include<iostream>

using namespace std;

int nth_fibonacci_num(int num){
    if ((num == 0) || (num == 1)){
        return num;
    }
    return nth_fibonacci_num(num - 1) + nth_fibonacci_num(num - 2);
}

int factorial(int num){
    if ((num == 0) || (num == 1)){
        return 1;
    }
    return num * factorial(num - 1);
}

int main(){

    cout << "Fibonacci Sequence:" << endl;
    for(int i = 0; i < 20; i++){
        cout << nth_fibonacci_num(i) << endl;
    }

    cout << "Factorials:" << endl;
    for(int i = 0; i < 10; i++){
        cout << factorial(i) << endl;
    }

    return 0;
}
```

- Recursive functions are functions that call themselves
- We need to define a base condition or an escape hatch
- Recursive functions keep calling themselves until the escape hatch is reached
- When an escape hatch is not defined, it keeps calling itself infinitely
- This results in a segmentation fault
- Recursive functions are useful when there are recurring patterns in our problem
- They can be used when the result of a function for a given input can be achieved by the same function
- A drawback is that there can be duplicate computations

<br>
<hr>
<br>

### Function Overloading

<br>

```c++
#include<iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}


int main(){

    cout << "Sum1: " << add(7, 8) << endl;
    cout << "Sum2: " << add(7, 8, 5) << endl;

    return 0;
}
```

- Function overloading is where we can have two functions with the same name but perform different tasks
- Function overloading can be achieved by defining another function with the same name as the existing function but with different parameters and/or parameter types
- The function name, return type and input parameters together make up the signature
- C++ automatically identifies the signature during a function call and the correct function is used for the given parameters

<br>
<hr>
<br>

### Classes

<br>

```c++
#include<iostream>

using namespace std;

class Car{
    private:
        int chassis_num;
    public:
        int license_num;
        int make_type;
        int miles_run;
        void show_info(){
            cout << "The car has license number: " << license_num << endl;
            cout << "The car is of make: " << make_type << endl;
            cout << "The car has run: " << miles_run << " miles" << endl;
        }
        void set_data(int, int, int, int); // Declaration
};

void Car::set_data(int chassis_no, int license_no, int make_no, int miles_run){
    chassis_num = chassis_no;
    license_num = license_no;
    make_type = make_no;
    miles_run = miles_run;
}

int main(){

    Car my_car;
    my_car.set_data(37717, 94857, 47, 71747);
    my_car.show_info();

    // cout << my_car.chassis_no;   Error because chassis_no is private

    return 0;
}
```

- Classes in C++ are essentially extensions of structures
- Structures cannot have methods/functions
- We cannot protect access to data in Structures, data can be accessed from anywhere
- We can use classes to combine data and behaviour (functions/methods)
- We can use private and public specifiers to control access to variables and methods
- We do not always need to define methods inside classes, we can simply declare them like function prototypes
- C++ allows us to define functions/methods of a class outside the class declaration with help of the scope resolution operator
- Private variables and methods can only be used by functions inside the class
- By default variables defined are private members

<br>
<hr>
<br>
