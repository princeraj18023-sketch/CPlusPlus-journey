#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream Pout("sample55.txt");
    string name;
    cout << "Enter your name ";
    cin >> name;

    Pout << " My name is " + name;
    Pout.close();

    ifstream Pin("sample55.txt");
    string content;
    Pin >> content;
    cout << "The content of this file is : " << content;
    Pin.close();

    return 0;
}