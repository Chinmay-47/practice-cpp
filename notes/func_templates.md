### Function Templates

<br>

```c++
#include <iostream>

using namespace std;

template <class T>
void swap_var(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 17, y = 47;

    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    swap_var(x, y);

    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    char xx = 'A', yy = 'Z';

    cout << "Value of xx: " << xx << endl;
    cout << "Value of yy: " << yy << endl;

    swap_var(x, y);

    cout << "Value of xx: " << xx << endl;
    cout << "Value of yy: " << yy << endl;

    return 0;
}
```

- Function templates are similar to class templates
- They can be used to define a function that does the same action for different data types
- This helps us avoid defining multiple redundant function overloads
