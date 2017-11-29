#include <iostream>

using namespace std;

int main()
{
    int age = 18;

    switch(age){
        case 16:
            cout << "16!!" << endl;
            break; // break means end the switch/breaks out of loop
        case 18:
            cout << "18!!" << endl;
            break;
        case 21:
            cout << "21!!" << endl;
            break;
        default: // for everything else, no need to break out as this is the end.
            cout << "Sorry!" << endl;
    }

    return 0;
}
