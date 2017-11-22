#include <iostream>

using namespace std;

void printStuff(int); // Function prototype

int main()
{
    printStuff(7); // calls printStuff method.
    return 0;
}

void printStuff(int x){ // Function parameter requires a data type and a variable name.
    cout << "Lucky number is " << x << endl;
}

