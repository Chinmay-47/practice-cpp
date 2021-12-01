### Control Structures

<br>

```c++
#include<iostream>

using namespace std;

int main()
{
    int height_cm;
    cout << "Enter height in cms : " << endl;
    cin >> height_cm;
    if (height_cm > 180){
        cout << "You are more than 6 Feet tall" << endl;
    }
    else if (height_cm == 180){
        cout << "You are 6 Feet tall" << endl;
    }
    else{
        cout << "You are less than 6 Feet tall" << endl;
    }
    return 0;
}
```

- "if", "else" and "else if" are used for conditional checks
- Condition to check is defined inside brackets
- The action to perform is defined inside curly brackets after the condition check

<br>

```c++
#include<iostream>

using namespace std;

int main()
{
    int height_cm;
    cout << "Enter height in cms : " << endl;
    cin >> height_cm;
    cout << "Doing the same with Switch Case statement" << endl;
    switch (height_cm)
    {
    case 180:
        cout << "You are 6 Feet tall" << endl;
        break;
    case 150:
        cout << "You are less than 6 Feet tall" << endl;
        break;
    case 190:
        cout << "You are more than 6 Feet tall" << endl;
        break;
    default:
        cout << "Default case executed when all other cases fail" << endl;
        break;
    }

    return 0;
}
```

- We can use the switch case statement when there are multiple conditions
- We can avoid a long else if ladder by using this
- We enter the variable being compared inside the switch statement
- We perform tasks based on comparisons to the variable inside switch using case statements
- We define a default case to execute if all other comparisons fail
- If we do not "break" inside each case, all cases get executed
