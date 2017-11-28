/*
Program to calculate total cost of personal loan.

1. Loan amount.
2. Variable APR amount.
-  (300-1999 = 8.9%) (2000-9999 = 8.5%)
-  (10000-19999 = 7.5%) (20000-65000 = 6.8%)
3. Repayment Term. 12,24,36,48 months etc.
4. Monthly Interest.
5. Monthly repayment.
6. Total cost of credit.
7. Total paid at end of loan.
*/

#include<iostream>
#include<cmath>
#include <iomanip> // for setprecision of decimal points

using namespace std;

int main()
{
    double apr_rate = 0, loanAmount = 0, payment = 0, amountPaid = 0, monthlyInt = 0;
    int numPayments = 0;

    system("clear");

    cout << "Minimum loan amount = 300\n";
    cout << "Maximum loan amount = 65000\n";

    cout << "\nEnter the amount you wish to borrow: ";
    cin >> loanAmount;

    while((loanAmount < 300) || (loanAmount > 65000)) {
    cout << "\nEnter loan amount between 300 and 65000: ";
    cin >> loanAmount;
    }

    if((loanAmount >= 300) && (loanAmount <= 1999)){
        apr_rate = 8.9;
    }
    else if((loanAmount >= 2000) && (loanAmount <= 9999)){
        apr_rate = 8.5;
    }
    else if((loanAmount >= 10000) && (loanAmount <= 19999)){
        apr_rate = 7.5;
    }
    else if((loanAmount >= 20000) && (loanAmount <= 65000)){
        apr_rate = 6.8;
    }
    cout << "Enter Repayment Term in Months (12,24,36,48,60): ";
    cin >> numPayments;

    system("clear");
    cout << setprecision(2) << fixed;

    cout << "\n----------------------------------------\n";
    cout << "Loan based on Bank of Ireland 2017 rates";
    cout << "\n----------------------------------------\n";
    cout << "\nLoan amount: " << loanAmount << endl;
    cout << "APR rate on loan: " << apr_rate << "%" << endl;
    cout << "Number of Monthly Payments: " << numPayments << endl;

    monthlyInt = pow( 1 + apr_rate/100, 1.0/12 );
    cout << "Monthly interest: " << monthlyInt << endl;

    payment = loanAmount * pow( monthlyInt, numPayments ) * ( monthlyInt - 1 ) / ( pow( monthlyInt, numPayments ) - 1 );
    cout << "\nMonthly Repayment: " << payment << endl;

    amountPaid = payment * numPayments;
    cout << "Total Cost of Credit: " << (amountPaid - loanAmount) << endl;
    cout << "Total Paid at End of Loan: " << amountPaid << endl;
    cout << "\n----------------------------------------\n";

    return 0;

}
