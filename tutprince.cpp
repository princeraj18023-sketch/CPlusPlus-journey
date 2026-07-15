#include <iostream>
using namespace std;
class BankAccount
{
private:
    int Balance;

public:
    int deposit, withdrawal;
    void setdata(int Balance1);
    void showbalance()
    {
        cout << "The Balance of Prince is " << Balance << endl;
        cout << "The deposit on Monday is " << deposit << endl;
        cout << "The withdrawal on Friday is " << withdrawal << endl;
    }
};
void BankAccount ::setdata(int Balance1)
{
    Balance = Balance1;
}

int main()
{
    BankAccount prince;
    prince.withdrawal = 100000;
    prince.deposit = 600000;
    prince.setdata(1000000);
    prince.showbalance();

    return 0;
}
