#include<iostream>

using namespace std;

void swap_with_values(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_with_pointers(int* a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_with_reference_vars(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){

    int num1 = 7, num2 = 27;

    cout << "a = " << num1 << " and b = " << num2 << endl;
    swap_with_values(num1, num2);
    cout << "After calling swap function a = " << num1 << " and b = " << num2 << endl;
    swap_with_pointers(&num1, &num2);
    cout << "After calling swap function that uses pointers a = " << num1 << " and b = " << num2 << endl;
    
    // Re-initialize as they've been swapped
    num1 = 7;
    num2 = 27;
    swap_with_reference_vars(num1, num2);
    cout << "After calling swap function that uses reference variables a = " << num1 << " and b = " << num2 << endl;

    return 0;
}
