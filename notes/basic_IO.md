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
