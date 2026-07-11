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

void func(int a)
{
    cout << "I am first func()" << a << endl;
}
template <class T>
void func(T a)
{
    cout << "I am Templatised  func1()" << a << endl;
}
template <class T>
void func1(T a)
{
    cout << "I am Templatised  func()" << a << endl;
}
int main()
{
    func1(4);
    return 0;
}