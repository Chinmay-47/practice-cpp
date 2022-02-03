#include <iostream>
#include <list>

using namespace std;

void display_list(list<int> &l)
{
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << "->";
    }
    cout << endl;
}

int main()
{

    // list<int> list_size_7(7);
    list<int> list1;

    list1.push_back(17);
    list1.push_back(27);
    list1.push_back(37);
    list1.push_back(47);
    list1.push_back(57);

    list<int>::iterator iter;
    iter = list1.begin();

    // cout << "First element of list is: " << *iter << endl;
    // cout << "Second element of list is: " << *(++iter) << endl;
    display_list(list1);
    list1.pop_back();
    display_list(list1);
    list1.pop_front();
    display_list(list1);

    return 0;
}
