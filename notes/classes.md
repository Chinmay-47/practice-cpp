### Classes

<br>

```c++
#include<iostream>

using namespace std;

class Car{
    private:
        int chassis_num;
    public:
        int license_num;
        int make_type;
        int miles_run;
        void show_info(){
            cout << "The car has license number: " << license_num << endl;
            cout << "The car is of make: " << make_type << endl;
            cout << "The car has run: " << miles_run << " miles" << endl;
        }
        void set_data(int, int, int, int); // Declaration
};

void Car::set_data(int chassis_no, int license_no, int make_no, int miles_run){
    chassis_num = chassis_no;
    license_num = license_no;
    make_type = make_no;
    miles_run = miles_run;
}

int main(){

    Car my_car;
    my_car.set_data(37717, 94857, 47, 71747);
    my_car.show_info();

    // cout << my_car.chassis_no;   Error because chassis_no is private

    return 0;
}
```

- Classes in C++ are essentially extensions of structures
- Structures cannot have methods/functions
- We cannot protect access to data in Structures, data can be accessed from anywhere
- We can use classes to combine data and behaviour (functions/methods)
- We can use private and public specifiers to control access to variables and methods
- We do not always need to define methods inside classes, we can simply declare them like function prototypes
- C++ allows us to define functions/methods of a class outside the class declaration 
- Private variables and methods can only be used by functions inside the class
