#include<iostream>

using namespace std;

int main(){

    int a = 3;
    int* b = &a;

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Address of a: " << &a << endl;
    cout << "The value at address b: " << *b << endl;

    int** c = &b;
    // Pointer c contains address to pointer b

    cout << "Value of c: " << c << endl;
    cout << "Address of b: " << &b << endl;
    cout << "The value at address c: " << *c << endl;
    cout << "The value at address b from c: " << **c << endl;

    return 0;
}
