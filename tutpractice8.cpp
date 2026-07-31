#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 0; k--)
        {
            char c = 'A' + k;
            cout << c;
        }
        cout << endl;
    }

    return 0;
}