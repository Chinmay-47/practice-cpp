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

### Arrays in Classes

<br>

```c++
#include <iostream>

using namespace std;

class CarCollection
{
    int car_ID[100];
    int car_price[100];
    int counter;

public:
    void init_counter(void)
    {
        counter = 0;
    }
    void add_car(void);
    void show_cars(void);
};

void CarCollection::add_car()
{
    cout << "Enter car_ID: " << endl;
    cin >> car_ID[counter];
    cout << "Enter car_price: " << endl;
    cin >> car_price[counter];
    counter++;
}

void CarCollection::show_cars()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Car: " << car_ID[i] << " costs: " << car_price[i] << endl;
    }
}

int main()
{

    CarCollection my_car_collection;

    my_car_collection.init_counter();
    my_car_collection.add_car();
    my_car_collection.add_car();
    my_car_collection.add_car();
    my_car_collection.show_cars();

    return 0;
}
```

- We can have members as arrays in classes
- In the above example, the class represents a car collection
- We can have arrays corresponding to car IDs and Prices

<br>
<hr>
<br>

### Static Members

<br>

```c++
#include <iostream>
#include<string>

using namespace std;

class Car
{
    string car_brand;
    int car_price;
    static int car_count;

public:
    void add_car_details(void){
        cout << "Enter car brand" << endl;
        cin >> car_brand;
        cout << "Enter car price" << endl;
        cin >> car_price;
        car_count++;
    }
    void show_car_details(void){
        cout << "Car details:" << endl;
        cout << "Car brand: " << car_brand << endl;
        cout << "Car price: " << car_price << endl;
        cout << "Total cars: " << car_count << endl;
    }
};

int Car::car_count;


int main()
{

    Car car1, car2, car3;

    car1.add_car_details();
    car1.show_car_details();

    car2.add_car_details();
    car2.show_car_details();

    car3.add_car_details();
    car3.show_car_details();

    return 0;
}
```

- Static members have initial value of 0
- We do not have to assign a default value of 0
- We have to define it once outside the class
- We dont want every instance to consume memory for the car_count
- Only the class consumes memory to store the car_count
- If we want to start with a default value other than 0, we need to define it outside

<br>
<hr>
<br>

### Static Methods

<br>

```c++
#include <iostream>
#include<string>

using namespace std;

class Car
{
    string car_brand;
    int car_price;
    static int car_count;

public:
    void add_car_details(void){
        cout << "Enter car brand" << endl;
        cin >> car_brand;
        cout << "Enter car price" << endl;
        cin >> car_price;
        car_count++;
    }
    void show_car_details(void){
        cout << "Car details:" << endl;
        cout << "Car brand: " << car_brand << endl;
        cout << "Car price: " << car_price << endl;
    }
    static void show_car_count(void){
        cout << "Total cars: " << car_count << endl;
    }
};

int Car::car_count;

int main()
{

    Car car1, car2, car3;

    car1.add_car_details();
    car1.show_car_details();
    Car::show_car_count();

    car2.add_car_details();
    car2.show_car_details();
    Car::show_car_count();

    car3.add_car_details();
    car3.show_car_details();
    Car::show_car_count();

    return 0;
}
```

- Static methods are used when we need a function to access only other static methods or members
- Static methods cannot access other members and methods that are not static
- If we want a function to be run with the name of the class, without needing an actual instance/object we can use static methods
- We can call a static method using an instance/object of the class or by the class name and the scope resolution operator

<br>
<hr>
<br>

### Array of Objects

<br>

```c++
#include <iostream>
#include <string>

using namespace std;

class Car
{
    string car_brand;
    int car_price;

public:
    void add_car_details(void)
    {
        cout << "Enter car brand: " << endl;
        cin >> car_brand;
        cout << "Enter car price: " << endl;
        cin >> car_price;
    }

    void show_car_details(void)
    {
        cout << "Car of brand " << car_brand << " costs " << car_price << endl;
    }
};

int main()
{

    Car cars[4];

    for (int i = 0; i < 4; i++)
    {
        cars[i].add_car_details();
    }

    for (int i = 0; i < 4; i++)
    {
        cars[i].show_car_details();
    }

    return 0;
}
```

- C++ not only allows us to have arrays in classes, but also arrays of objects of the classes themselves
- Here we have an array(cars) containing objects of the class Car

<br>
<hr>
<br>

### Objects as Arguments

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{

public:
    float x, y;
    void set_values(float a, float b)
    {
        x = a;
        y = b;
    }
    inline void print(void)
    {
        cout << "The complex number is " << x << " + " << y << "i" << endl;
    }
};

Complex add_complex_nums(Complex a, Complex b)
{
    Complex temp;

    temp.set_values(a.x + b.x, a.y + b.y);

    return temp;
}

int main()
{

    Complex var1, var2, sum;

    var1.set_values(1.2, 3.4);
    var1.print();

    var2.set_values(3.7, 2.8);
    var2.print();

    sum = add_complex_nums(var1, var2);
    sum.print();

    return 0;
}
```

- C++ allows us to pass objects as arguments to functions
- Here the add_complex_nums function takes objects of Complex class as arguments and returns an object of the Complex class

<br>
<hr>
<br>

### Friend Functions

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{
    float x, y;

    // friend Complex add_complex_nums(Complex, Complex);
    // Can be added in the private section as well

public:

    void set_values(float a, float b)
    {
        x = a;
        y = b;
    }

    inline void print(void)
    {
        cout << "The complex number is " << x << " + " << y << "i" << endl;
    }

    friend Complex add_complex_nums(Complex, Complex);
};

Complex add_complex_nums(Complex a, Complex b)
{
    Complex temp;

    temp.set_values(a.x + b.x, a.y + b.y);

    return temp;
}

int main()
{

    Complex var1, var2, sum;

    var1.set_values(1.2, 3.4);
    var1.print();

    var2.set_values(3.7, 2.8);
    var2.print();

    sum = add_complex_nums(var1, var2);
    sum.print();

    return 0;
}
```

- Friend functions are external functions that can access private members of objects of a given class
- This permission can be given to an external function from inside the class
- A function can be made a friend function of a particular class by adding the friend keyword followed by the function signature inside that particular class
- This declaration can be added in either the private or the public sections
- Here the add_complex_nums functions can access the private members of objects of the Complex class as it is declared as a friend function in the Complex class
- Friend functions cannot be accessed from objects of the class as they are not members of the class and are outside the scope of the class
- Friend functions can also be functions/methods of other classes
- However, we may have to handle compilation errors by using forward declarations and function prototypes

<br>
<hr>
<br>

### Friend Classes

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{
    float x, y;

public:
    void set_values(float a, float b)
    {
        x = a;
        y = b;
    }

    inline void print(void)
    {
        cout << "The complex number is " << x << " + " << y << "i" << endl;
    }

    friend class Calculator;
};

class Calculator
{
public:
    inline float add_complex_parts(Complex a, Complex b)
    {
        return a.y + b.y;
    }

    inline float add_real_parts(Complex a, Complex b)
    {
        return a.x + b.x;
    }

    Complex add_complex_nums(Complex a, Complex b)
    {
        Complex temp;

        temp.set_values(a.x + b.x, a.y + b.y);

        return temp;
    }
};

int main()
{

    Complex var1, var2, sum;
    Calculator calc;
    float sum_real, sum_complex;

    var1.set_values(1.2, 3.4);
    var1.print();

    var2.set_values(3.7, 2.8);
    var2.print();

    sum_real = calc.add_real_parts(var1, var2);
    cout << "The sum of the real parts is: " << sum_real << endl;

    sum_complex = calc.add_complex_parts(var1, var2);
    cout << "The sum of the complex parts is: " << sum_complex << endl;

    sum = calc.add_complex_nums(var1, var2);
    sum.print();

    return 0;
}
```

- When we need multiple functions to be able to access private members of a given class and these functions belong to another class, we can declare the other class as a friend class
- Here, the functions in the Calculator class need to know about the private members of the Complex number class
- Hence, declaring the Calculator class as a friend class of the Complex number class gives all the functions in the Calculator class access to private members of the Complex number class

<br>
<hr>
<br>

### Constructors

<br>

```c++
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
```

- Constructor is a special member function with the same name as the class
- It is automatically called when an object of the class is created
- It can be used to set values for members of the objects while creating them
- We do not need to assign a return type to constructors
- Constructors that do not take any inputs are called default constructors
- Constructors always need to be declared in the public section of the class

<br>
<hr>
<br>

### Parameterized Constructors

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{
    float real, imaginary;

public:

    Complex(float, float);
    inline void print(void)
    {
        cout << "The complex number is " << real << " + " << imaginary << "i" << endl;
    }
};

Complex::Complex(float a, float b)
{
    real = a;
    imaginary = b;
}

int main()
{
    Complex num1 = Complex(4.5, 7.1);
    Complex num2(3.5, 4.7);

    num1.print();
    num2.print();

    return 0;
}
```

- Constructors can have arguments
- We cannot refer to their addresses
- We can invoke parameterized constructors using the instance object variable or using the class name

<br>
<hr>
<br>

### Constructor Overloading

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{
    float real, imaginary;

public:
    Complex(void);
    Complex(float);
    Complex(float, float);
    inline void print(void)
    {
        cout << "The complex number is " << real << " + " << imaginary << "i" << endl;
    }
};

Complex::Complex(void)
{
    real = 0.0;
    imaginary = 0.0;
}

Complex::Complex(float a)
{
    real = a;
    imaginary = 0.0;
}

Complex::Complex(float a, float b)
{
    real = a;
    imaginary = b;
}

int main()
{
    Complex num1;
    Complex num2(1.7);
    Complex num3 = Complex(4.5, 7.1);
    Complex num4(3.5, 4.7);

    num1.print();
    num2.print();
    num3.print();
    num4.print();

    return 0;
}
```

- Constructor overloading is similar to function overloading
- A class can have multiple constructors based on the arguments

<br>
<hr>
<br>

### Copy Constructor

<br>

```c++
#include <iostream>

using namespace std;

class Complex
{
    float real, imaginary;

public:
    Complex(Complex &obj)
    {
        cout << "Copy Constructor called..." << endl;
        real = obj.real;
        imaginary = obj.imaginary;
    }
    Complex(float a = 0.0, float b = 0.0)
    {
        real = a;
        imaginary = b;
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

    Complex num2(num1);
    num2.print();

    return 0;
}
```

- Copy constructor is a constructor that can create a copy an object
- We pass the object to be copied by reference to the copy constructor
- When no user defined copy constructor is found, the compiler assigns a default copy constructor to the class

<br>
<hr>
<br>

### Destructor

<br>

```c++
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
```

- A Destructor is a member function that is invoked automatically when the object goes out of scope or is explicitly destroyed by a call to delete
- Destructors neither take any arguments nor return any values
- A Destructor has the same name as the class, preceded by a tilde (~)

<br>
<hr>
<br>

### Inheritance

<br>

```c++
#include <iostream>

using namespace std;

class Employee
{
public:
    int emp_id;
    float salary;
    Employee(){};
    Employee(int id)
    {
        emp_id = id;
        salary = 50000.0;
    }
};

class Programmer : Employee
{
public:
    int language_code;
    Programmer(int id)
    {
        emp_id = id;
        salary = 70000.0;
        language_code = 7;
    }
};

class Manager : public Employee
{
public:
    int team_code;
    Manager(int id)
    {
        emp_id = id;
        salary = 80000.0;
        team_code = 2;
    }
};

int main()
{
    Employee e1(3);
    cout << "Employee salary = " << e1.salary << endl;

    Programmer p1(17);
    // cout << "Programmer code = " << p1.emp_id << endl;    Cannot do this
    // cout << "Programmer salary = " << p1.salary << endl;  Cannot do this
    cout << "Programmer code = " << p1.language_code << endl;

    Manager m1(27);
    cout << "Manager id = " << m1.emp_id << endl;
    cout << "Manager salary = " << m1.salary << endl;

    return 0;
}
```

- Classes can derive attributes and behaviour from other classes
- Dervied classes are declared as "class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}"
- Visibility mode determines how the inheritance is performed
- Visiblity modes can be public or private
- Inherting publicly makes the public members of the base class public members of the derived class
- Inherting privately makes the public members of the base class private members of the derived class
- By default, the visibility mode is private
- Private members of the base class never become members of the derived class

<br>
<hr>
<br>

### Protected Members

<br>

```c++
#include <iostream>

using namespace std;

class Base
{
    int a;

protected:
    int b;

public:
    int c;

    void display()
    {
        cout << "This is the Base Class.." << endl;
        cout << "Private Member a = " << a << endl;
        cout << "Protected Member b = " << b << endl;
        cout << "Public Member c = " << c << endl;
    }
};

class PrivateDerived : Base
{
public:
    void display()
    {
        cout << "This is the PrivateDerived Class.." << endl;
        // cout << "Private Member a = " << a << endl;  'a' is not inherited
        cout << "Private Member b = " << b << endl;
        cout << "Private Member c = " << c << endl;
    }
};

class ProtectedDerived : protected Base
{
public:
    void display()
    {
        cout << "This is the ProtectedDerived Class.." << endl;
        // cout << "Private Member a = " << a << endl;  'a' is not inherited
        cout << "Protected Member b = " << b << endl;
        cout << "Protected Member c = " << c << endl;
    }
};

class PublicDerived : public Base
{
public:
    void display()
    {
        cout << "This is the PublicDerived Class.." << endl;
        // cout << "Private Member a = " << a << endl;  'a' is not inherited
        cout << "Protected Member b = " << b << endl;
        cout << "Public Member c = " << c << endl;
    }
};

int main()
{
    Base obj1;
    PrivateDerived obj2;
    ProtectedDerived obj3;
    PublicDerived obj4;

    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();

    return 0;
}
```

- Private members of the base class do not get inherited in the derived class
- But if we require them to inherited without having to make them public, we can use the protected access modifier
- Protected members are not as private as private members, which are accessible only to members of the class in which they are declared, but they are not as public as public members, which are accessible in any function
- They are eseentially like private members that can be inherited

<br>

#### Member access during each type of derivation:

<br>

|     |  Public Derivation  |  Private Derivation  |  Protected Derivation  |
|-------|-------------------|----------------|-----------------|
| Private Members | Not Inherited | Not Inherited | Not Inherited|
| Protected Members | Protected | Private | Protected |
| Public Members | Public | Private | Protected |

<br>
<hr>
<br>

### Multi Level Inheritance

<br>

```c++
#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void show_roll_number(void);
};

void Student::set_roll_number(int roll_no)
{
    roll_number = roll_no;
}

void Student::show_roll_number(void)
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths_marks;
    float physics_marks;

public:
    void set_marks(float, float);
    void show_marks(void);
};

void Exam::set_marks(float a, float b)
{
    maths_marks = a;
    physics_marks = b;
}

void Exam::show_marks(void)
{
    cout << "Marks obtained by roll_number " << roll_number << " in Physics is " << physics_marks << endl;
    cout << "Marks obtained by roll_number " << roll_number << " in Maths is " << maths_marks << endl;
}

class Result : public Exam
{
protected:
    float percentage;

public:
    void calc_percentage(void)
    {
        percentage = (physics_marks + maths_marks) / 2;
    }
    void diplay(void);
};

void Result::diplay(void)
{
    show_roll_number();
    show_marks();
    calc_percentage();
    cout << "Obtained " << percentage << "%" << endl;
}

int main()
{
    Result student1;

    student1.set_roll_number(17);
    student1.set_marks(97.1, 99.7);
    student1.diplay();

    return 0;
}
```

- Classes can inherit from other dervied classes as well
- This is known as multi level inheritance
- The inheritance mechanism with respect to access modifiers remain the same as single inheritance

<br>
<hr>
<br>

### Multiple Inheritance

<br>

```c++
#include <iostream>

using namespace std;

class Base1
{
protected:
    int base1var;

public:
    void set_base1_var(int a)
    {
        base1var = a;
    }
};

class Base2
{
protected:
    int base2var;

public:
    void set_base2_var(int a)
    {
        base2var = a;
    }
};

class MultiDerived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "In MultiDerived class..." << endl;
        cout << "base1var = " << base1var << endl;
        cout << "base2var = " << base2var << endl;
    }
};

int main()
{
    MultiDerived der1;

    der1.set_base1_var(7);
    der1.set_base2_var(17);
    der1.display();

    return 0;
}
```

- Multiple Inheritance is when a class is derived from more than one base class
- We can inherit more than one base class by adding a comma to single inheritance and adding the visibility mode and second base class after the comma
- Like "class {{MultiDerived}} : public {{Base1}} , public {{Base2}}"

<br>
<hr>
<br>

### Ambiguity Resolution

<br>

```c++
#include <iostream>

using namespace std;

class Base1
{
public:
    void display(void)
    {
        cout << "Displaying Base1..." << endl;
    }
};

class Base2
{
public:
    void display(void)
    {
        cout << "Displaying Base2..." << endl;
    }
};

class MultiDerived : public Base1, public Base2
{
public:
    void display(void)
    {
        Base1 ::display();
    }

    // Use from base class or re define
    // void display(void)
    // {
    //     cout << "Displaying MultiDerived..." << endl;
    // }
};

int main()
{
    Base1 base1_obj;
    Base2 base2_obj;
    MultiDerived dervied_obj;

    base1_obj.display();
    base2_obj.display();

    dervied_obj.display();

    return 0;
}
```

- During multiple inheritance if there is a duplication of member or member function names among the base classes, the derived class raises an error for ambiguous name lookup
- We have to manually resolve this ambiguity by defining which member or member function should be used in the derived class by using the scope resolution operator
- But if the derived class has a member or member function with the same name as the base classes, it overrides the definition
- So, essentially we have to either specify which member function from the base classes the derived class should use or we have to re-define the member function in the derived class 

<br>
<hr>
<br>

### Virtual Base Classes

<br>

```c++
#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int num)
    {
        roll_no = num;
    }
    void print_roll_no(void)
    {
        cout << "Roll number is: " << roll_no;
    }
};

class StudentTest : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float marks1, float marks2)
    {
        maths = marks1;
        physics = marks2;
    }
    void print_marks(void)
    {
        cout << "Marks scored are: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class StudentSports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Sports score is " << score << endl;
    }
};

class StudentResult : public StudentTest, public StudentSports
{
private:
    float total;

public:
    void display(void)
    {
        total = physics + maths + score;
        print_roll_no();
        print_marks();
        print_score();
        cout << "Total score is: " << total << endl;
    }
};

int main()
{
    StudentResult s1;

    s1.set_roll_no(7);
    s1.set_marks(97.5, 91.7);
    s1.set_score(94.7);

    s1.display();

    return 0;
}
```

- The Diamond problem in inheritance is as follows: 
    - A is inherited by B and C
    - D inherits both B and C
    - Members from A are inherited in both B and C
    - Which of these get inherited by D?
- When we try to access members or member functions of A from D in the above case, there is an ambiguity
- Virtual base classes help solve this problem
- Virtual base classes are used in virtual inheritance in a way of preventing multiple ???instances??? of a given class appearing in an inheritance hierarchy when using multiple inheritances
- Base Classes can be derived as virtual base classes by using the virtual keyword when defining the inheritance
- We can use the virtual keyword before or after the visibility of inheritance

<br>
<hr>
<br>

### New and Delete Keywords

<br>

```c++
#include <iostream>

using namespace std;

int main()
{

    int a = 4;
    int *ptr_a = &a;

    cout << "Value of a is: " << a << endl;
    cout << "Address of a is: " << ptr_a << endl;
    cout << "Value at address ptr_a is: " << *ptr_a << endl;

    int *new_ptr = new int(47);
    cout << "Value of new_ptr is: " << new_ptr << endl;
    cout << "Value at address new_ptr is: " << *new_ptr << endl;

    int *arr_ptr = new int[5];
    arr_ptr[0] = 17;
    arr_ptr[1] = 27;
    arr_ptr[2] = 37;
    arr_ptr[3] = 47;
    arr_ptr[4] = 57;

    for (int i = 0; i < 5; i++)
    {
        cout << "Value of arr_ptr[" << i << "] is: " << arr_ptr[i] << endl;
    }

    delete new_ptr;
    delete[] arr_ptr;

    return 0;
}
```

- new keyword is used to dynamically allocate memory to data types
- normal declarations of variables allocates them memory on the stack
- declaration using the new keyword allocates memory on the heap
- delete keyword frees the dynamically allocated memory
- delete[] must be used to free dynamically allocated blocks of memory like in arrays

<br>
<hr>
<br>

### Object Pointers and Arrow Operator

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

<br>
<hr>
<br>

### this Keyword

<br>

```c++
#include <iostream>

using namespace std;

class A
{
    int a;

public:
    void set_a(int a)
    {
        // a = a;   This is wrong as a gets a garbage value
        this->a = a;
    }
    void show(void)
    {
        cout << "Value of a: " << a << endl;
    }
};

int main()
{

    A x;
    x.set_a(7);
    x.show();

    return 0;
}
```

- this keyword is essentially a pointer to an object
- It is like the self keyword in Python
- It can be used to access instance members and member functions
- Using this keyword avoids confusion with variable names

<br>
<hr>
<br>

### Pointers to Derived Classes

<br>

```c++
#include <iostream>

using namespace std;

class Base
{
public:
    int base_var;
    void show()
    {
        cout << "Base Class : base_var : " << base_var << endl;
    }
};

class Derived : public Base
{
public:
    int derived_var;
    void show()
    {
        cout << "Derived Class : base_var : " << base_var << endl;
        cout << "Derived Class : derived_var : " << derived_var << endl;
    }
};

int main()
{
    Base *base_ptr;

    Base base_obj;
    Derived derived_obj;

    base_ptr = &derived_obj;
    base_ptr->show();

    return 0;
}
```

- Pointers to base classes are allowed to point to derived classes in C++
- However the behaviour is not like general pointers to objects
- If we try to access any functions of the derived class using the base pointer assigned, it will not work
- This is due to a concept called early binding
- The compiler binds the pointer and directly associate an address to the function call
- Hence, if a pointer is declared to point to a base class but later made to point to a derived class, we cannnot access members and member functions of the derived class

<br>
<hr>
<br>

### Virtual Functions

<br>

```c++
#include <iostream>

using namespace std;

class Base
{
public:
    int base_var;
    virtual void show()
    {
        cout << "Base Class : base_var : " << base_var << endl;
    }
};

class Derived : public Base
{
public:
    int derived_var;
    void show()
    {
        cout << "Derived Class : base_var : " << base_var << endl;
        cout << "Derived Class : derived_var : " << derived_var << endl;
    }
};

int main()
{
    Base *base_ptr;

    Base base_obj;
    Derived derived_obj;

    base_ptr = &derived_obj;
    base_ptr->show();

    return 0;
}
```

- If we declare a pointer to a base class but assign the address of a derived class to it, it will still access the base class
- We can circumvent this issue of early binding by using virtual functions
- We need to define member functions as virtual using the virtual keyword
- We can use virtual functions to introduce run time polymorphism
- Virtual functions defined in the base class having functions with exact signatures in the derived class, allows pointers access member functions of the derived class
- Virtual functions are always defined in the base class and overridden in a derived class
- It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
- However, virtual functions cannot be static

<br>
<hr>
<br>

### Abstract Base Classes and Pure Virtual Functions

<br>

```c++
#include <iostream>

using namespace std;

class Base
{
public:
    int base_var;
    virtual void show() = 0;
};

class Derived : public Base
{
public:
    int derived_var;
    void show()
    {
        cout << "Derived Class : base_var : " << base_var << endl;
        cout << "Derived Class : derived_var : " << derived_var << endl;
    }
};

int main()
{
    Base *base_ptr;

    Derived derived_obj;

    base_ptr = &derived_obj;
    base_ptr->show();

    return 0;
}
```

- Pure virtual functions are virtual functions that compulsorily need to be overridden in derived classes
- Pure virtual functions are like abstract methods in Python
- Virtual functions can be made pure virtual by adding "= 0" at the end of their declaration
- Declaring virtual functions in a class makes the class an abstract base class
- An abstract base class cannot be instantiated
- It can only serve as a bueprint for classes deriving from it
- An abstract base class can have other methods that are not virtual, but having even one pure virtual function makes the class abstract

<br>
<hr>
<br>

### I/O with Files

<br>

```c++
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){

    string var1 = "This is a string in c++";
    string var2;

    // Open file using constructor and write into it
    // ofstream out("files.txt");
    // out << var1;

    // Open file using constructor and read from it
    ifstream in("files.txt");
    // in >> var2;      Reads only first word

    getline(in, var2);  // Reads first line
    cout << "content in files.txt: " << var2 << endl;

    return 0;
}
```

- We need to include fstream in our program to work with files
- fstream provides fstreambase, ifstream and ofstream classes to work with files
- Files can be opened using constructors or open() methods of the class
- We can read and write from the same file in the same program but we have to close the stream currently being used and open a new stream

<br>
<hr>
<br>

### Templates

<br>

```c++
#include <iostream>

using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;

    Vector(int size)
    {
        this->size = size;
        arr = new T[this->size];
    }
    T dot_product(Vector &other)
    {
        T dot_prod = 0;
        for (int i = 0; i < this->size; i++)
        {
            dot_prod += this->arr[i] * other.arr[i];
        }
        return dot_prod;
    }
};

int main()
{
    Vector<int> v1(5), v2(5);
    v1.arr[0] = 17;
    v1.arr[1] = 27;
    v1.arr[2] = 37;
    v1.arr[3] = 47;
    v1.arr[4] = 57;

    v2.arr[0] = 13;
    v2.arr[1] = 23;
    v2.arr[2] = 33;
    v2.arr[3] = 43;
    v2.arr[4] = 53;

    cout << v1.dot_product(v2) << endl;

    return 0;
}
```

- Classes provide blueprints for creating objects whereas templates provide blueprints to create classes
- Templates are sometimes also referred to as parameterized classes
- Templates are useful as we will not have to define multiple classes and helps follow the DRY principle
- We add a statement using the template keyword above the class definition to convert a class into a template
- In the above example we can simply change the type 'T' during instantiation allowing us to have one template for multiple data types

<br>
<hr>
<br>

### Templates with Multiple Parameters

<br>

```c++
#include <iostream>

using namespace std;

template <class T1=float, class T2=float>
class SampleClass
{
public:
    T1 var1;
    T2 var2;
    SampleClass(T1 a, T2 b)
    {
        this->var1 = a;
        this->var2 = b;
    }
    void display()
    {
        cout << "var1: " << this->var1 << endl;
        cout << "var2: " << this->var2 << endl;
    }
};

int main()
{
    SampleClass<int, char> obj1(7, 'S');
    obj1.display();

    SampleClass<int, float> obj2(7, 7.1);
    obj2.display();

    SampleClass<char, char> obj3('G', 'G');
    obj3.display();

    SampleClass<> obj4(7.1, 4.7);
    obj4.display();

    return 0;
}
```

- We can also have templates with multiple parameters
- This allows us to have templates for combinations of classes and data types
- We can also have default parameters for our template

<br>
<hr>
<br>

### Function Templates

<br>

```c++
#include <iostream>

using namespace std;

template <class T>
void swap_var(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 17, y = 47;

    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    swap_var(x, y);

    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    char xx = 'A', yy = 'Z';

    cout << "Value of xx: " << xx << endl;
    cout << "Value of yy: " << yy << endl;

    swap_var(x, y);

    cout << "Value of xx: " << xx << endl;
    cout << "Value of yy: " << yy << endl;

    return 0;
}
```

- Function templates are similar to class templates
- They can be used to define a function that does the same action for different data types
- This helps us avoid defining multiple redundant function overloads

<br>
<hr>
<br>

### Vectors in STL

<br>

```c++
#include <iostream>
#include <vector>

using namespace std;

void display_vector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> vec;
    int element;
    for (int i = 0; i < 5; i++)
    {
        cout << "element to add: " << endl;
        cin >> element;
        vec.push_back(element);
    }

    display_vector(vec);
    vec.pop_back();
    display_vector(vec);

    vector<int>::iterator iter = vec.begin();
    vec.insert(iter + 3, 27);
    display_vector(vec);

    vec.insert(iter + 3, 10, 27);
    display_vector(vec);

    return 0;
}
```

- Vectors are container templates present in the standard template library
- We can define the data type of the vector since it is a template
- We can add elements to the end by push_back and delete elements from the end by pop_back

<br>
<hr>
<br>

### Lists in STL

<br>

```c++
#include <iostream>
#include <list>

using namespace std;

void display_list(list<int> &l)
{
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << "->";
    }
    cout << endl;
}

int main()
{

    // list<int> list_size_7(7);
    list<int> list1;

    list1.push_back(17);
    list1.push_back(27);
    list1.push_back(37);
    list1.push_back(47);
    list1.push_back(57);

    list<int>::iterator iter;
    iter = list1.begin();

    // cout << "First element of list is: " << *iter << endl;
    // cout << "Second element of list is: " << *(++iter) << endl;
    display_list(list1);
    list1.pop_back();
    display_list(list1);
    list1.pop_front();
    display_list(list1);

    return 0;
}
```

- Lists are container templates present in the standard template library
- We can define the data type of the list since it is a template
- They are library implementations of a doubly linked list
- They have useful member functions to add/delete elements, iterate, sort and much more

<br>
<hr>
<br>

### Maps in STL

<br>

```c++
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    map<string, int> map1;

    map1["one"] = 1;
    map1["two"] = 2;
    map1["three"] = 3;

    map1.insert(pair<string, int>("four", 4));
    map1.insert(pair<string, int>("five", 5));

    map<string, int>::iterator iter;
    for (iter = map1.begin(); iter != map1.end(); iter++)
    {
        cout << (*iter).first << "->" << (*iter).second << endl;
    }

    return 0;
}
```

- Maps are associative arrays
- They are like dictionaries
- They have key value pairs
- They have useful member functions to insert, access and much more

<br>
<hr>
<br>
