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
