#include <iostream>

using namespace std;

int main()
{
    int number;
    int number_total = 0;
    int numbers_entered = 0;

    cout << "\nEnter a number. Enter -1 to quit." << endl;
    cin >> number;

    // Sentinel Control Program. Dynamic sample size.

    while(number != -1){ // stop looping when -1 is entered.
        number_total += number;
        numbers_entered++;

    cout << "\nEnter another number or -1 to quit." << endl;
    cin >> number;
    }

    system("clear");
    cout << "\n\nNumber of entries: " << numbers_entered << endl;
    cout << "Average of entered numbers: " << number_total/numbers_entered << endl;
    return 0;
}
