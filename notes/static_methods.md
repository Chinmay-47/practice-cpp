### Static Methods

<br>

```c++
#include <iostream>
#include<string>

using namespace std;

class Car
{
    string car_brand;
    int car_price;
    static int car_count;

public:
    void add_car_details(void){
        cout << "Enter car brand" << endl;
        cin >> car_brand;
        cout << "Enter car price" << endl;
        cin >> car_price;
        car_count++;
    }
    void show_car_details(void){
        cout << "Car details:" << endl;
        cout << "Car brand: " << car_brand << endl;
        cout << "Car price: " << car_price << endl;
    }
    static void show_car_count(void){
        cout << "Total cars: " << car_count << endl;
    }
};

int Car::car_count;

int main()
{

    Car car1, car2, car3;

    car1.add_car_details();
    car1.show_car_details();
    Car::show_car_count();

    car2.add_car_details();
    car2.show_car_details();
    Car::show_car_count();

    car3.add_car_details();
    car3.show_car_details();
    Car::show_car_count();

    return 0;
}
```

- Static methods are used when we need a function to access only other static methods or members
- Static methods cannot access other members and methods that are not static
- If we want a function to be run with the name of the class, without needing an actual instance/object we can use static methods
- We can call a static method using an instance/object of the class or by the class name and the scope resolution operator
