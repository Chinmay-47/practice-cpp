#include<iostream>

using namespace std;

// Function Prototypes
// int add_nums(int a, int b);
// void my_void_func(void);
int add_nums(int, int);
void my_void_func();


int main(){

    int num1, num2;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is: " << add_nums(num1, num2) << endl;
    my_void_func();
    return 0;
}

int add_nums(int a, int b){
    int c = a + b;
    return c;
}

void my_void_func(){
    cout << "This is a void function call" << endl;
}
