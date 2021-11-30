#include<iostream>
using namespace std;

int global_scope = 7;

void print_global(){
    cout << "Variable global_scope has value: " << global_scope << "\n";
}

int main(){
    int global_scope = 17;

    cout << "Variable global_scope has value: " << :: global_scope << "\n";
    cout << "Variable global_scope has value: " << global_scope << "\n";
    print_global();
    return 0;
}
