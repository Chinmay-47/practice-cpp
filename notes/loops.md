### Loops

<br>

```c++
#include<iostream>

using namespace std;

int main()
{
    cout << "For loop" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}
```
- For loops take an initial value, a condition and an operation
- Performs the actions as well as the declared operation inside the loop, as long as the condition specified is true

<br>

```c++
#include<iostream>

using namespace std;

int main()
{
    cout << "While loop" << endl;
    int j = 0;
    while (j < 5)
    {
        cout << j << endl;
        j++;
    }

    return 0;
}
```
- While loop performs actions only if condition is true
- The operation has to be defined inside the loop
- Easy to produce infinite loops if the operation never breaks the condition or if an operation is not defined

<br>

```c++
#include<iostream>

using namespace std;

int main()
{
    cout << "Do While loop" << endl;
    int k = 0;
    do
    {
        cout << k << endl;
        k++;
    } while (k < 5);

    return 0;
}
```
- Similar to while loop
- Only difference is that, regardless of the condition, the loop runs atleast once
