### Vectors in STL

<br>

```c++
#include <iostream>
#include <vector>

using namespace std;

void display_vector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> vec;
    int element;
    for (int i = 0; i < 5; i++)
    {
        cout << "element to add: " << endl;
        cin >> element;
        vec.push_back(element);
    }

    display_vector(vec);
    vec.pop_back();
    display_vector(vec);

    vector<int>::iterator iter = vec.begin();
    vec.insert(iter + 3, 27);
    display_vector(vec);

    vec.insert(iter + 3, 10, 27);
    display_vector(vec);

    return 0;
}
```

- Vectors are container templates present in the standard template library
- We can define the data type of the vector since it is a template
- We can add elements to the end by push_back and delete elements from the end by pop_back
