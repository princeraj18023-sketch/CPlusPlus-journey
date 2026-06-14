#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// int &
void swapreferencevar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return a;
}
int main()
{
    int x = 4, y = 2;
    // cout<<"The sum of 4 and 5 is" <<sum(4, 5);
    cout << "The value of x is " << x << " The value of y is " << y << endl;
    // swap(a,b);
    // swappointer(&x,&y);
    // swapreferencevar(x, y) = 766;
    swapreferencevar(x, y);
    cout << "The value of x is " << x << " The value of y is " << y << endl;

    return 0;
}