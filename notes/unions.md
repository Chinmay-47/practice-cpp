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
