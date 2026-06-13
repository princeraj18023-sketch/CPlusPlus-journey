#include <iostream>
using namespace std;

struct employee
{
    /* data */
    int eID;
    char favchar;
    float salary;
};

int main()
{
    struct employee king;
    king.eID = 1;
    king.favchar = 'c';
    king.salary = 12000000;
    cout << "The value is " << king.eID << endl;
    cout << "The value is " << king.favchar << endl;
    cout << "The value is " << king.salary << endl;

    return 0;
}