#include<iostream>

using namespace std;


int main()
{
    cout << "For loop" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    cout << "While loop" << endl;
    int j = 0;
    while (j < 5)
    {
        cout << j << endl;
        j++;
    }

    cout << "Do While loop" << endl;
    int k = 0;
    do
    {
        cout << k << endl;
        k++;
    } while (k < 5);


    return 0;
}
