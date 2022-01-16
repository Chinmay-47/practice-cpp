#include <iostream>

using namespace std;

int main()
{

    int a = 4;
    int *ptr_a = &a;

    cout << "Value of a is: " << a << endl;
    cout << "Address of a is: " << ptr_a << endl;
    cout << "Value at address ptr_a is: " << *ptr_a << endl;

    int *new_ptr = new int(47);
    cout << "Value of new_ptr is: " << new_ptr << endl;
    cout << "Value at address new_ptr is: " << *new_ptr << endl;

    int *arr_ptr = new int[5];
    arr_ptr[0] = 17;
    arr_ptr[1] = 27;
    arr_ptr[2] = 37;
    arr_ptr[3] = 47;
    arr_ptr[4] = 57;

    for (int i = 0; i < 5; i++)
    {
        cout << "Value of arr_ptr[" << i << "] is: " << arr_ptr[i] << endl;
    }

    delete new_ptr;
    delete[] arr_ptr;

    return 0;
}
