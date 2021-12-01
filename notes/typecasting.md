### TypeCasting

<br>

```c++
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
    cout << "Size of double + float = " << sizeof(double(num1) + num2) << endl;

    return 0;
}
```

- C++ allows conversion between data types
- Conversion can be made writing by the data type to convert to, followed by the variable name 
- Either the variable name or the data type needs to be covered with brackets
- float + int = float
- double + float = double
- double + int = double
