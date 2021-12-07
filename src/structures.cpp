#include<iostream>

using namespace std;

struct employee
{
    int emp_id;
    int salary;
    char tag;
};

typedef struct manager
{
    int emp_id;
    int salary;
    char tag;
} manager;


int main(){

    struct employee emp1;
    struct employee emp2;

    emp1.emp_id = 247;
    emp1.salary = 47000;
    emp1.tag = 'Z';

    cout << "Value of emp_id: "<< emp1.emp_id << endl;
    cout << "Value of salary: "<< emp1.salary << endl;
    cout << "Value of tag: "<< emp1.tag << endl;


    manager man1;
    man1.emp_id = 127;
    man1.salary = 71000;
    man1.tag = 'A';

    cout << "Value of emp_id: "<< man1.emp_id << endl;
    cout << "Value of salary: "<< man1.salary << endl;
    cout << "Value of tag: "<< man1.tag << endl;


    return 0;
}
