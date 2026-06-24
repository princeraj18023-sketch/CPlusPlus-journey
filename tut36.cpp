#include <iostream>
using namespace std;
class Employee
{

public:
    int id;
    float Salary;

    Employee(int inpId)
    {
        id = inpId;
        Salary = 34.0;
    }
    Employee() {}
};
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }

    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee Prince(1), Rohan(2);

    cout << Prince.Salary << endl;
    cout << Rohan.Salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getdata();

    return 0;
}