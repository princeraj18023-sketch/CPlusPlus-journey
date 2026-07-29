#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Your number is even" << endl;
    }
    else
    {
        cout << "your number is odd" << endl;
    }

    return 0;
}
