#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;

    list1.push_back(8);
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(6);
    list1.push_back(14);

    display(list1);

    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 69;
    iter++;
    *iter = 5;
    iter++;
    *iter = 4;
    iter++;

    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout << "List1 after merging: ";
    display(list1);
    
    list1.reverse();
    display(list1);
    return 0;
}