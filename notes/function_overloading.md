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
