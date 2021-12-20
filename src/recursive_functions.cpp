#include<iostream>

using namespace std;

int nth_fibonacci_num(int num){
    if ((num == 0) || (num == 1)){
        return num;
    }
    return nth_fibonacci_num(num - 1) + nth_fibonacci_num(num - 2);
}

int factorial(int num){
    if ((num == 0) || (num == 1)){
        return 1;
    }
    return num * factorial(num - 1);
}

int main(){

    cout << "Fibonacci Sequence:" << endl;
    for(int i = 0; i < 20; i++){
        cout << nth_fibonacci_num(i) << endl;
    }

    cout << "Factorials:" << endl;
    for(int i = 0; i < 10; i++){
        cout << factorial(i) << endl;
    }

    return 0;
}
