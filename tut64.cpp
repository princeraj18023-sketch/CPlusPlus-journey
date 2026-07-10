#include <iostream>
using namespace std;

template <class T>
class Prince
{
public:
    T data;
    Prince(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Prince<T>::display()
{
    cout << data;
}
int main()
{
    Prince<char> p('k');
    cout << p.data << endl;
    p.display();
    return 0;
}