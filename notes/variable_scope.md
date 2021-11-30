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

