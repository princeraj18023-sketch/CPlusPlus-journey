#include <iostream>

using namespace std;
int main()
{
    // int i = 1;
    // cout<<i;
    // i++;

    for (int i = 2; i <= 50; i++)
    {
        bool isPrime = true;
        for (int j = 2; j <= i / 2; j++)
        {

            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << endl;
        }
    }
    // Printing 1 to 40 using while loop
    // int i = 1;
    // while(i<=40){
    //    cout<<i<<endl;
    //    i++;
    //}
    // int i = 1;
    // do{
    //    cout<<i<<endl;
    //    i++;
    //}while(i<=50);
    return 0;
}