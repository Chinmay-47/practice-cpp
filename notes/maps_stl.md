### Maps in STL

<br>

```c++
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    map<string, int> map1;

    map1["one"] = 1;
    map1["two"] = 2;
    map1["three"] = 3;

    map1.insert(pair<string, int>("four", 4));
    map1.insert(pair<string, int>("five", 5));

    map<string, int>::iterator iter;
    for (iter = map1.begin(); iter != map1.end(); iter++)
    {
        cout << (*iter).first << "->" << (*iter).second << endl;
    }

    return 0;
}
```

- Maps are associative arrays
- They are like dictionaries
- They have key value pairs
- They have useful member functions to insert, access and much more
