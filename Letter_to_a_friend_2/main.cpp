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
-
7. check age is not <= 0 || >= 120.
8. check male/female input is correct.
9. make a comment based on age group.
------------------------------------------------------------*/

#include <iostream>

using namespace std;

int drinkAge(int, int); // function prototype

int main()
{
    string name;
    string recipient;
    int recipient_age = 0;

    int drink_age = 18;

    string friend_name;
    char friend_gender = 0;
    string he = "He";
    string she = "She";

    cout << "\nEnter the following details." << endl;

    cout << "\nState your name: ";
    cin >> name;
    cout << "\nName of recipient: ";
    cin >> recipient;

    cout << "\nRecipient's age: ";
    cin >> recipient_age;

    while((recipient_age <= 0) || (recipient_age >= 120)) { // Be careful to use correct operators. || and &&
        cout << "\n" << recipient_age << " is an unacceptable number.\n\nEnter recipient age again: ";
        cin >> recipient_age;
    }

    cout << "\nState a friends name: ";
    cin >> friend_name;

    cout << "\nState friends gender.\nEnter 'm' for male, or 'f' for female: ";
    cin >> friend_gender;

    while((friend_gender != 'm') && (friend_gender != 'f')) { // Be careful to use correct operators. || and &&
        cout << "Incorrect entry.\n\nEnter 'm' for male, or 'f' for female: ";
        cin >> friend_gender;
    }

    system("clear"); // clear the console screen to improve letter presentation

    cout << "-------------------------------------------\n";
    cout << "\n\nDear " << recipient << ", \n\nThis is " << name << ". ";
    cout << "I heard you are " << recipient_age << " now, congratulations.\n";
    cout << "Getting older every day! ";
    if(recipient_age < 12){
        cout << "I can't believe you will be " << recipient_age+1 << " next year!\n\n";
    }
    else if(recipient_age >= 12 && recipient_age <= 17){

    // tested using a function instead of the following simpler version.

    // int years = drink_age - recipient_age; // Age to drink calculation.
    // cout << "I'll buy you a beer in " << years << " years!\n\n";

    cout << "I'll buy you a beer in " << drinkAge(drink_age, recipient_age) << " years!\n\n";
    }
    else if(recipient_age >= 18 && recipient_age <= 65){
        cout << "I'll buy you a beer soon!\n\n";
    }
    else if(recipient_age > 65){
        cout << "You must come round for a visit soon.\n\n";
    }
    cout << "Have you heard from " << friend_name << " lately? ";
    if(friend_gender =='m'){
    cout << he << " is some craic!\n\nAll the best,\n\n" << name;
    }
    else if(friend_gender == 'f'){
    cout << she << " is some craic!\n\nAll the best,\n" << name;
    }
    cout << "\n\n-------------------------------------------\n";

    return 0;
}


int drinkAge(int drink_age, int recipient_age){ // function that returns value for years.
    int years = drink_age - recipient_age;
    return years;
}
