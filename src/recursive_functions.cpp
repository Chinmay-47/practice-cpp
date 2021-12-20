#include<iostream>

using namespace std;

int nth_fibbonaci_num(int num){
    if ((num == 0) || (num == 1)){
        return num;
    }
    return nth_fibbonaci_num(num - 1) + nth_fibbonaci_num(num - 2);
}

int main(){

    for(int i = 0; i < 20; i++){
        cout << nth_fibbonaci_num(i) << endl;
    }    
    return 0;
}
