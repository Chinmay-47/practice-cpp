#include<iostream>

using namespace std;

int main(){

    int my_array1[4] = {1, 2, 3, 4};
    int my_array2[] = {5, 6, 7, 8};

    cout << "Array1 with size definition" << endl;
    for (int i = 0; i < 4; i++){
        cout << my_array1[i] << endl;
    }

    cout << "Array2 without size definition" << endl;
    for (int i = 0; i < 4; i++){
        cout << my_array2[i] << endl;
    }    

    cout << "Changing values in Array1" << endl;
    my_array1[1] = 47;
    for (int i = 0; i < 4; i++){
        cout << my_array1[i] << endl;
    }

    return 0;
}
