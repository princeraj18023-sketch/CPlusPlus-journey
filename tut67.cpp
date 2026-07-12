#include <iostream>
#include <vector>

using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << " Displaying this vector " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    vector<char> vec2(4);
    vector<char> vec3(vec2);

    vector<int> vec4(3, 14);
    display(vec4);
    cout << vec4.size();

    int element, size = 5;

    return 0;
}