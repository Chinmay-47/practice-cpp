### Arrays in Classes

<br>

```c++
#include <iostream>

using namespace std;

class CarCollection
{
    int car_ID[100];
    int car_price[100];
    int counter;

public:
    void init_counter(void)
    {
        counter = 0;
    }
    void add_car(void);
    void show_cars(void);
};

void CarCollection::add_car()
{
    cout << "Enter car_ID: " << endl;
    cin >> car_ID[counter];
    cout << "Enter car_price: " << endl;
    cin >> car_price[counter];
    counter++;
}

void CarCollection::show_cars()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Car: " << car_ID[i] << " costs: " << car_price[i] << endl;
    }
}

int main()
{

    CarCollection my_car_collection;

    my_car_collection.init_counter();
    my_car_collection.add_car();
    my_car_collection.add_car();
    my_car_collection.add_car();
    my_car_collection.show_cars();

    return 0;
}
```

- We can have members as arrays in classes
- In the above example, the class represents a car collection
- We can have arrays corresponding to car IDs and Prices
