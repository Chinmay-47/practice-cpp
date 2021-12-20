#include<iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}


int main(){

    cout << "Sum1: " << add(7, 8) << endl;
    cout << "Sum2: " << add(7, 8, 5) << endl;

    return 0;
}
