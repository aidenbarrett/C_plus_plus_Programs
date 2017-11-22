#include <iostream>

using namespace std;

void printSomething(); // Function prototype / prototyping a function to let
                       // program know function will be called at some stage.
int main()
{
    printSomething();
    return 0;
}

void printSomething(){ // Function name is printSomething and void is return type
    cout << "Hello!" << endl;
}

