### Pointer Arithmetic

<br>

```c++
#include<iostream>

using namespace std;

int main(){

    int my_array[4] = {1, 2, 3, 4};

    cout << my_array << endl;

    int* my_pointer = my_array;
    
    cout << my_pointer << endl;
    cout << *my_pointer << endl;

    cout << ++my_pointer << endl;
    cout << *(my_pointer) << endl;

    return 0;
}
```

- Name of the array variable gives the address of the first block
- Cannot get address with '&' as the variable itself gives a pointer
- Dereferencing the variable will give the first value = my_array[0]
- Incrementing the pointer will give the address of the next block
- Basically, new_address = current_address + (i * data_type_size)
- For integer an increment will move to next 4 bytes
