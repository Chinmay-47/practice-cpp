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
