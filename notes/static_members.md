### Static Members

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
        cout << "Total cars: " << car_count << endl;
    }
};

int Car::car_count;


int main()
{

    Car car1, car2, car3;

    car1.add_car_details();
    car1.show_car_details();

    car2.add_car_details();
    car2.show_car_details();

    car3.add_car_details();
    car3.show_car_details();

    return 0;
}
```

- Static members have initial value of 0
- We do not have to assign a default value of 0
- We have to define it once outside the class
- We dont want every instance to consume memory for the car_count
- Only the class consumes memory to store the car_count
- If we want to start with a default value other than 0, we need to define it outside
