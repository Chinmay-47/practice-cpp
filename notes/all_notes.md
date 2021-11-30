# Complete Notes

<hr>

### First Program

<br>

- C++ is extremely fast
- Adds OOP to C
- Allows for memory management

<br>

```c++
#include<iostream>

int main(){
    std :: cout << "Hello World!";
    return 0;
}
```

- Include statement is like an import
- iostream is a built in library providing IO capabilities
- std is the namespace that containts the cout function
- cout is like print

<hr>

### Namespace

<br>

```c++
#include<iostream>
using namespace std;

int main(){
    cout << "Hello World!";
    return 0;
}
```

- Namespace is like the environment or context containing functions, classes, variables etc..
- Namespace essentialy defines a scope
- std is the standard namespace
- std contains standard
- We can also avoid prepending of namespaces with the "using namespace" directive

<br>

We have avoided calling the cout function like:
 ```c++
std :: cout << "Hello World!";
``` 
by writing: 
```c++
using namespace std;
cout << "Hello World!";
```

<hr>

### Variables and Comments

<br>

```c++
#include<iostream>
using namespace std;

/*
1st line
This is a multi line comment.
last line
*/

// Example comment 
int main(){
    int var1 = 7;
    float var2 = 7.0;
    cout << "Variables and Comments " << var1;
    cout << var2;
    return 0;
}
```

- Comments can placed using "//" before the sentences
- Multi line comments can be placed between "/*multi-line comment goes here */"
- Variables are data containers and their type has to be mentioned while declaring
- Variables types can be int, float, bool, char etc..

