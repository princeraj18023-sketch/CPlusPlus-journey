#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = i + 1; j > 0; j--)
        {
            cout<<c;
            c = 'A'+i;
           
        }
        cout << endl;
    }

    return 0;
}