#include <iostream>
using namespace std;
int sum(int, int);
void g();

int main()
{
    // num1 and num2 are actual parameters.
    int num1, num2;
    cout << "enter first number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2) << endl;
    g();
    return 0;
}
int sum(int a, int b)
{
    // a and b are the Formal parameters.
    //  a and b will be taking values from actual parameters num1 and num2.
    int c = a + b;
    return c;
}

void g()
{
    cout << "\n Hello Prince Raj, Good Morning";
}