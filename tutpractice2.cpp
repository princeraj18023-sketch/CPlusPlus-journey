#include<iostream>
using namespace std;
class student{
    private :
    int physics, chemistry, maths;
    public :
    int english, hindi;   
    void setdata(int physics1, int chemistry1, int maths1);
    void showdata(){
        cout<<"The marks of student a in physics out of 100 is "<<physics<<endl;
        cout<<"The marks of student b in chemistry out of 100is "<<chemistry<<endl;
        cout<<"The marks of student c in maths out of 100 is "<<maths<<endl;
        cout<<"The marks of student d in english out of 100 is "<<english<<endl;
        cout<<"The marks of student e in hindi out of 100 is "<<hindi<<endl;
    }
};
void student :: setdata(int physics1, int chemistry1, int maths1){
    physics= physics1;
    chemistry= chemistry1;
    maths= maths1;
}
int main(){
    student prince;
    prince.english= 35;
    prince.hindi = 88;
    prince.setdata(40, 30, 50);
    prince.showdata();
    return 0;
}