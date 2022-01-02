### Array of Objects

<br>

```c++
#include <iostream>
#include <string>

using namespace std;

class Car
{
    string car_brand;
    int car_price;

public:
    void add_car_details(void)
    {
        cout << "Enter car brand: " << endl;
        cin >> car_brand;
        cout << "Enter car price: " << endl;
        cin >> car_price;
    }

    void show_car_details(void)
    {
        cout << "Car of brand " << car_brand << " costs " << car_price << endl;
    }
};

int main()
{

    Car cars[4];

    for (int i = 0; i < 4; i++)
    {
        cars[i].add_car_details();
    }

    for (int i = 0; i < 4; i++)
    {
        cars[i].show_car_details();
    }

    return 0;
}
```

- C++ not only allows us to have arrays in classes, but also arrays of objects of the classes themselves
- Here we have an array(cars) containing objects of the class Car
