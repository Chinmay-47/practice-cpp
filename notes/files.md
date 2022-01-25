### I/O with Files

<br>

```c++
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
```

- We need to include fstream in our program to work with files
- fstream provides fstreambase, ifstream and ofstream classes to work with files
- Files can be opened using constructors or open() methods of the class
