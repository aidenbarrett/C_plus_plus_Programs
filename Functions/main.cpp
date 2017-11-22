#include <iostream>

using namespace std;

void printSomething(); // Function prototype / prototyping a function to let the
                       // program know that the function will be called at some stage.
int main()
{
    printSomething(); // Calls printSomething method.
    return 0;
}

void printSomething(){ // Function name is printSomething and void is return type.
    cout << "Hello!" << endl;
}

