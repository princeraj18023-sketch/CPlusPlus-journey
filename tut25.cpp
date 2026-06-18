#include <iostream>
using namespace std;

class Employee
{
    int Id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the Id of Employee" << endl;
        cin >> Id;
    }
    void getId(void)
    {
        cout << "The id of the Employee is " << Id << endl;
    }
};
int main()
{
    // Employee Rahul, Rohit, Rohan, Ram;
    // Rahul.setId();
    // Rahul.getId();
    Employee hp[4];
    for (int i = 0; i < 4; i++)
    {
        hp[i].setId();
        hp[i].getId();
    }


    return 0;
}
