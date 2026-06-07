#include<iostream>
#include<iomanip>
using namespace std;

int main(){
   int a = 3, b = 78, c = 1233;
   //cout<<"The value of a without setw : "<<a<<endl;
   //cout<<"The value of b without setw : "<<b<<endl;
   //cout<<"The value of c without setw : "<<c<<endl;
   
   //cout<<"The value of a is : "<<setw(4)<<a<<endl;
   //cout<<"The value of b is : "<<setw(4)<<b<<endl;
   //cout<<"Tge value of c is : "<<setw(4)<<c<<endl;
   
   int a = 3, b = 4;
   int c = (((a*5)+b)-45+87);
   cout<<c;
   return 0;
}