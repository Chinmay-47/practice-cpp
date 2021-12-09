### Enums

<br>

```c++
#include<iostream>

using namespace std;

enum Car{ferrari, mclaren, mercedes};

int main(){

    cout << ferrari << endl;
    cout << mclaren << endl;
    cout << mercedes << endl;

    Car fer1 = ferrari;
    cout << fer1 << endl;

    return 0;
}
```

- Enums are enumerations of some types or categories
- They are stored as integers but represent categories
- They essentially map an integer to a given category
