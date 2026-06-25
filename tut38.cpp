#include<iostream>
using namespace std;
class Base{
    protected:
        int a;
    private:
        int b;
};


class Derived : protected Base{

};
int main(){
    Base b;
    Derived d;;
    // cout<<d.a; // will not work since a is protectedin both base as well as deriveed class.
    return 0;
}