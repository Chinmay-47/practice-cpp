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
