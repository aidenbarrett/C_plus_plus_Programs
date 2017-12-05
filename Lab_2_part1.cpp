/* Lab 2 Part 1 */
/* ------------------------------------------------------------
Programmer: Aiden Barrett
Date: 04 February 2015
Purpose: Reads in pairs of numbers, and prints out which is
larger and smaller. Also tells you if the numbers are equal,
or close to being equal.
------------------------------------------------------------*/

#include <iostream>
#include <std_lib_facilities.h>

using namespace std;

int main()
{
    double number1, number2;

    cout << "Please enter 2 numbers:\n";
    while(cin >> number1 >> number2)
    {
        if(number1 == number2)
        {
            cout << "The numbers are equal." << endl;
        }
        else
        {
            cout << "The smaller values is: " << min(number1, number2) << endl;
            cout << "The larger value is: " << max(number1, number2) << endl;

            if((max(number1, number2)-min(number1, number2))<(1.0/100))
            {
                cout << "The numbers are almost equal." << endl;
            }
        }
        cout << "\n\nPlease enter 2 numbers:\n";
    }
    return 0;
}
