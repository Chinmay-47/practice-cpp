#include<iostream>

using namespace std;

int add_nums(int a, int b){
    int c = a + b;
    return c;
}

int main(){

    int num1, num2;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is: " << add_nums(num1, num2) << endl;

    return 0;
}
