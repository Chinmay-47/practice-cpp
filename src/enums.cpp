#include<iostream>

using namespace std;

enum Car{ferrari, mclaren, mercedes};

int main(){

    cout << ferrari << endl;
    cout << mclaren << endl;
    cout << mercedes << endl;

    Car fer1 = ferrari;
    cout << fer1 << endl;

    return 0;
}
