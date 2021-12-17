#include<iostream>

using namespace std;

float interest(float principle, float interest_rate = 1.10){
    // Function with default arguments
    return principle * interest_rate;
}


int main(){

    float amount;
    cout << "Enter principle amount: " << endl;
    cin >> amount;
    cout << "Amount after a year with interest: " << interest(amount) << endl;
    float rate;
    cout << "Enter custom interes rate: " << endl;
    cin >> rate;
    cout << "Amount after a year with custom interest rate: " << interest(amount, rate)<< endl;

    return 0;
}
