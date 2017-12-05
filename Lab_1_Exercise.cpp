/* Lab_1_Exercise */
/* ------------------------------------------------------------
Programmer: Aiden Barrett
Date: 28/01/2015
Purpose: Takes in an operation and 2 numbers from the user,
calculates the particular operation for the 2 numbers, and
then prints out the result to the console.
------------------------------------------------------------*/

#include <iostream>
#include "std_lib_facilities.h" // our course header

using namespace std;

int main()
{
    double num1, num2, ans=0;
    char choice='a'; // initialise 'choice' to 'a' to ensure it enters the while loop
    string operation;

    while(choice != 'n') // used to lopp the program until user enters 'n' to quit
    {
        choice = 'a'; // reinitialise 'choice' to something other than 'y' or 'n',
                      // to ensure it enters the while loop at the end of this loop.
        cout << "\nEnter an Operation, followed by 2 numbers:\n";
        cin >> operation >> num1 >> num2; // read in and store the operation and numbers

        if(operation == "+" || operation == "plus")
        {
            ans = num1+num2; // set answer to the sum if operation is plus
            operation = "+"; // ensure operation is set to mathematical operator '+'
        }
        else if(operation == "-" || operation == "minus")
        {
            ans = num1-num2; // set answer to the difference if operation is minus
            operation = "-"; // ensure operation is set to mathematical operator '-'
        }
        else if(operation == "*" || operation == "mul")
        {
            ans = num1*num2; // set answer to the product if operation is multiply
            operation = "*"; // ensure operation is set to mathematical operator '*'
        }
        else if(operation == "/" || operation == "div")
        {
            ans = num1/num2; // set answer to division if operation is divide
            operation = "/"; // ensure operation is set to mathematical operator '/'
        }
        else
        {
            simple_error("DID NOT COMPUTE\n"); // give error if operation wasn't recognised
        }

        cout << num1 << operation << num2 << "= " << ans << "\n\n"; // print the answer

        while(choice != 'y' && choice != 'n') // loop until 'y' or 'n' is entered
        {
            cout << "Would you like to try again?: (y/n)\n";
            cin >> choice; // allow user to select 'y' to go again, 'n' to quit
        }
    }

    return 0;
}
