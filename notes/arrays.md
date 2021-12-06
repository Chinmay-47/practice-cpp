### Arrays

<br>

```c++
#include<iostream>

using namespace std;

int main(){

    int my_array1[4] = {1, 2, 3, 4};
    int my_array2[] = {5, 6, 7, 8};

    cout << "Array1 with size definition" << endl;
    for (int i = 0; i < 4; i++){
        cout << my_array1[i] << endl;
    }

    cout << "Array2 without size definition" << endl;
    for (int i = 0; i < 4; i++){
        cout << my_array2[i] << endl;
    }    

    cout << "Changing values in Array1" << endl;
    my_array1[1] = 47;
    for (int i = 0; i < 4; i++){
        cout << my_array1[i] << endl;
    }

    return 0;
}
```

- Arrays are collections of a given data type
- We can use these instead of many variables
- We can declare arrays with a given size and data type
- We can also declare them without a size and C++ will figure it out
- We can iterate through them with an index starting from 0
- We can also access the elements of the array using the index
- We can also modify elements in the arrays 
- Be careful while assigning new values to arrays outside the defined size (eg: assigning 5th element in a 4 element array)
- This can alter values in other arrays due to some memory location stuff
