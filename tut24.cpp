#include <iostream>
using namespace std;

class Employee
{
   int Id;
   static int count;

public:
   void setdata(void)
   {
      cout << "Enter the Id" << endl;
      cin >> Id;
      count++;
   }
   void getdata(void)
   {
      cout << "The Id of this employee is " << Id << " And this is employee number " << count << endl;
   }
   static void getcount(void)
   {
      cout << "The value of count is " << count << endl;
   }
};
int Employee ::count;

int main()
{
   Employee Prince, Ankit, Lucky;
   Prince.setdata();
   Prince.getdata();
   Employee::getcount();

   Ankit.setdata();
   Ankit.getdata();
   Employee::getcount();

   Lucky.setdata();
   Lucky.getdata();
   Employee::getcount();

   return 0;
}