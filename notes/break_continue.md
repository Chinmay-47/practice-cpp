### Break and Continue Statement

<br>

```c++
#include<iostream>

using namespace std;

int main(){

    cout << "Break Statement" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        if (i == 5)
        {
            break;
        }
        
    }
    
    return 0;
}
```
- Break statement stops the execution of the loop and exits the loop

<br>

```c++
#include<iostream>

using namespace std;

int main(){
    
    cout << "Continue Statement" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;

    }
    
    return 0;
}
```
- Continue statement skips to the next iteration without execution of code present after the continue statement
