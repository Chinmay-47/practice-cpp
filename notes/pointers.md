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
