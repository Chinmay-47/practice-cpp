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
