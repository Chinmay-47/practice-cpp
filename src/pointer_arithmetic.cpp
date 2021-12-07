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
