#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){

    string var1 = "This is a string in c++";
    string var2;

    // Open file using constructor and write into it
    // ofstream out("files.txt");
    // out << var1;

    // Open file using constructor and read from it
    ifstream in("files.txt");
    // in >> var2;      Reads only first word

    getline(in, var2);  // Reads first line
    cout << "content in files.txt: " << var2 << endl;

    return 0;
}
