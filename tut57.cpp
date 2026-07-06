#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample55.txt");
    out << "This is me\n ";
    out << "And my name is Prince raj\n";
    out << "I am very Good at coding";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample55.txt");
    in >> st >> st2;
    cout << st << st2;
    in.close();

    return 0;
}