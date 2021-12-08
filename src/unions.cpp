#include<iostream>

using namespace std;


typedef union demo
{
    int attribute1;
    char attribute2;
} demo;


int main(){

    demo d;

    d.attribute1 = 7;
    cout << "Value of attribute1 of union: " << d.attribute1 << endl;
    cout << "Value of attribute2 of union: " << d.attribute2 << endl;

    d.attribute2 = 'Z';
    cout << "Value of attribute1 of union: " << d.attribute1 << endl;
    cout << "Value of attribute2 of union: " << d.attribute2 << endl; 

    return 0;
}
