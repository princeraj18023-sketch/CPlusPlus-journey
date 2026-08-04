#include <iostream>
using namespace std;

int SumOfDigits(int num)
{
    int DigSum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        DigSum += lastDigit;
    }
    return DigSum;
}
int main()
{
    cout << "Sum =" << SumOfDigits(5432) << endl;
    return 0;
}
