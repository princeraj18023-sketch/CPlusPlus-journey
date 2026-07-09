#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class Prince
{
public:
    T1 a;
    T2 b;
    T3 c;
    Prince(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};
int main()
{
    Prince<> p(8, 6.4, 'c');
    p.display();
    cout<<endl;
    Prince<float, char, char> k(1.5, 's', 'c');
    k.display();
    return 0;
}