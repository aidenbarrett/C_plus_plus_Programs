/* Letter_to_a_Friend */
/* ------------------------------------------------------------
Programmer: Aiden Barrett

Purpose: Composes a letter to a friend, based on inputs of
the sender's name, recipient's name, recipient's age, the name
of another friend, and the other friend's gender.

Reads in all expected values first, and then composes the
letter once the values have been entered.

Read in:
1. name
2. recipient
3. recipient_age
4. friend_name
5. friend_gender
-
6. compose letter
------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
    string name;
    string recipient;
    int  recipient_age = 0;
    string friend_name;
    string friend_gender;

    cout << "\nEnter the following details." << endl;

    cout << "\nState your name: ";
    cin >> name;
    cout << "\nName of recipient: ";
    cin >> recipient;
    cout << "\Recipient's age: ";
    cin >> recipient_age;
    cout << "\nState a friends name: ";
    cin >> friend_name;
    cout << "\nFriend is a He or She: ";
    cin >> friend_gender;

    cout << "-------------------------------------------\n";
    cout << "\n\nTo " << recipient << ", \n\nIt's " << name << " here. ";
    cout << "I heard you are " << recipient_age << " now, congratulations.\n";
    cout << "Have you heard from " << friend_name << " lately? ";
    cout << friend_gender << " is some craic!\n\nAll the best,\n" << name;
    cout << "\n\n-------------------------------------------\n";


    return 0;
}
