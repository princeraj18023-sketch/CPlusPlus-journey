#include<iostream>

using namespace std;
int main (){
    int marks;
    cout<<"tell me your marks in jee exam"<<endl;
    cin>>marks;

    if (marks<200){
        cout<<"you are not eligible to admission at iit"<<endl;
    }
    else if (marks==200){
        cout<<"you are eligible to admission at nit"<<endl;
    }
    else{
        cout<<"you are eligible to admission at iit"<<endl;
    }
    return 0;
}
 