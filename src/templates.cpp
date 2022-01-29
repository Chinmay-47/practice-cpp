#include <iostream>

using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;

    Vector(int size)
    {
        this->size = size;
        arr = new T[this->size];
    }
    T dot_product(Vector &other)
    {
        T dot_prod = 0;
        for (int i = 0; i < this->size; i++)
        {
            dot_prod += this->arr[i] * other.arr[i];
        }
        return dot_prod;
    }
};

int main()
{
    Vector<int> v1(5), v2(5);
    v1.arr[0] = 17;
    v1.arr[1] = 27;
    v1.arr[2] = 37;
    v1.arr[3] = 47;
    v1.arr[4] = 57;

    v2.arr[0] = 13;
    v2.arr[1] = 23;
    v2.arr[2] = 33;
    v2.arr[3] = 43;
    v2.arr[4] = 53;

    cout << v1.dot_product(v2) << endl;

    return 0;
}
