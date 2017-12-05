/*
----------------------------------------
Program to calculate winning lotto numbers for Jane.
Programmer: Aiden Barrett
----------------------------------------
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
    system("clear");
    int jane;

    cout << "-----------\n";
    cout << "Congratulations Jane,\n\nHappy birthday to you!\n\nHere are your winning Euromillions numbers.";
    cout << "-----------\n";

    cout << "-----------\n";
    cout << "Euromillions numbers 1 - 50.\n";
    cout << "-----------\n";

    // prints out 6 random euromillion numbers, 1 - 50.
    for(int x = 1; x <= 5; x++){
    cout << 1+(rand()%50)<< endl;
    }
    cout << "-----------\n";
    cout << "Bonus numbers 1 - 12.\n";
    cout << "-----------\n";

    // prints out 2 random bonus numbers 1 - 12.
    for(int x = 1; x <= 2; x++){
    cout << 1+(rand()%12)<< endl;
    }
    cout << "-----------\n";

    cout << "Press enter." << endl;
    cin >> jane;
    system("clear");
    cout << "Iiiiiiiiiii love ya babs. Happy birthday!" << endl;




    return 0;
}
