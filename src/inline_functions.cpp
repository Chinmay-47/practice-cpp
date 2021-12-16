#include<iostream>

using namespace std;

inline int multiply(int a, int b){
    return a * b;
}

int main(){

    int num1, num2;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Product of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;

    return 0;
}
