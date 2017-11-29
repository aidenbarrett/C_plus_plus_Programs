/*
c standard library, rand function generates random number.
cout << rand(); // not actually random!

srand(); add value to srand function and generates random number
srand(time(0)); // proper random number generator based on clock, number changes all the time.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    cout << "-----------\n";
    cout << "5 random numbers.\n";
    cout << "-----------\n";

    // prints out 5 random numbers. Possibly all large numbers.
    for(int x = 1; x <= 5; x++){
    cout << rand()<< endl;
    }
    cout << "-----------\n";
    cout << "5 random numbers from 0 - 5.\n";
    cout << "-----------\n";

    // takes 5 random numbers, applies modulus 6 to them, remainder will be 0,1,2,3,4,5.
    for(int y = 1; y <= 5; y++){
        cout << rand()%6 << endl;
    }
    cout << "-----------\n";
    cout << "5 random numbers from 1 - 6.\n";
    cout << "-----------\n";

    // takes 5 random numbers, applies modulus 6 to them, shifts by one, remainder will be 1,2,3,4,5,6.
    for(int z = 1; z <= 5; z++){
        cout << 1+(rand()%6) << endl;
    }
    cout << "-----------\n";
    cout << "6 random euromillions numbers 1 - 50.\n";
    cout << "-----------\n";

    // prints out 6 random euromillion numbers, 1 - 50.
    for(int x = 1; x <= 5; x++){
    cout << 1+(rand()%50)<< endl;
    }
    cout << "-----------\n";
    cout << "2 random bonus numbers 1 - 12.\n";
    cout << "-----------\n";

    // prints out 2 random bonus numbers 1 - 12.
    for(int x = 1; x <= 2; x++){
    cout << 1+(rand()%12)<< endl;
    }
    cout << "-----------\n";

    return 0;
}
