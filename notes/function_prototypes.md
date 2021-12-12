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
