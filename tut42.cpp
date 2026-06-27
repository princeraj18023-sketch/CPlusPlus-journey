#include<iostream>
using namespace std;

class B{
    public:
      void say(){
        cout << "Hello world "<<endl;
      }
};
class D{
    public:
    int a;
       void say(){
        cout << "Hello my beatiful people "<<endl;
       }
};

int main(){
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}