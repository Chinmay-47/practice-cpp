#include<iostream>

using namespace std;

int main()
{
    int height_cm;
    cout << "Enter height in cms : " << endl;
    cin >> height_cm;
    if (height_cm > 180){
        cout << "You are more than 6 Feet tall" << endl;
    }
    else if (height_cm == 180){
        cout << "You are 6 Feet tall" << endl;
    }
    else{
        cout << "You are less than 6 Feet tall" << endl;
    }
    cout << endl;
    cout << endl;

    // Switch case Statement
    cout << "Doing the same with Switch Case statement" << endl;
    switch (height_cm)
    {
    case 180:
        cout << "You are 6 Feet tall" << endl;
        break;
    case 150:
        cout << "You are less than 6 Feet tall" << endl;
        break;
    case 190:
        cout << "You are more than 6 Feet tall" << endl;
        break;
    default:
        cout << "Default case executed when all other cases fail" << endl;
        break;
    }

    return 0;
}
