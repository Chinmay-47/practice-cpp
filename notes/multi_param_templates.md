### Templates with Multiple Parameters

<br>

```c++
#include <iostream>

using namespace std;

template <class T1=float, class T2=float>
class SampleClass
{
public:
    T1 var1;
    T2 var2;
    SampleClass(T1 a, T2 b)
    {
        this->var1 = a;
        this->var2 = b;
    }
    void display()
    {
        cout << "var1: " << this->var1 << endl;
        cout << "var2: " << this->var2 << endl;
    }
};

int main()
{
    SampleClass<int, char> obj1(7, 'S');
    obj1.display();

    SampleClass<int, float> obj2(7, 7.1);
    obj2.display();

    SampleClass<char, char> obj3('G', 'G');
    obj3.display();

    SampleClass<> obj4(7.1, 4.7);
    obj4.display();

    return 0;
}
```

- We can also have templates with multiple parameters
- This allows us to have templates for combinations of classes and data types
- We can also have default parameters for our template
