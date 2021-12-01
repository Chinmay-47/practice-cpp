#include<iostream>

using namespace std;

int main(){

    int num1 = 7;
    float num2 = 17.47;

    cout << "Integer : " << num1 << endl;
    cout << "Float : " << num2 << endl;
    cout << "Float typecasted to Int : " << (int)num2 << endl;
    cout << "Float typecasted to Int : " << int(num2) << endl;
    cout << "Int typecasted to Double : " << double(num1) << endl;
    cout << "Size of Int : " << sizeof(num1) << endl;
    cout << "Size of Int typecasted to Double : " << sizeof(double(num1)) << endl;
    cout << endl;

    cout << "Arithmetic operations with types" << endl;
    cout << "(num1 + num2) = " << num1 + num2 << endl;
    cout << "(num1 + int(num2)) = " << num1 + int(num2) << endl;
    cout << "(double(num1) + num2) = " << double(num1) + num2 << endl;
    cout << "Size of float + int = " << sizeof(float(num1) + num1) << endl;
    cout << "Size of double + float = " << sizeof(double(num1) + num2) << endl;
    cout << "Size of double + int = " << sizeof(double(num1) + num1) << endl;

    return 0;
}
