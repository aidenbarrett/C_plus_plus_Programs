/* Lab 2 Part 2 */
/* ------------------------------------------------------------
Programmer: Aiden Barrett
Date: 04 February 2015
Purpose: Reads in a list of lengths, and accepts 4 different
units. If necessary, converts the length to metres before
updating the smallest, largest, and sum variables, and adding
the value to a vector of values. Prints out the vector when the
user enters '|' to exit the program.
------------------------------------------------------------*/

#include <iostream>
#include <std_lib_facilities.h>

using namespace std;

double convert_to_m(double, string);
void check_small_large(double);
void sort_and_print(vector<double>);

double smallest=1000000, largest=0, sum=0;

int main()
{
    string unit;
    double number;
    vector<double> values;

    cout << "Please enter a length and its unit:\n";

    while(cin >> number >> unit)
    {
        if(unit!="cm" && unit!="m" && unit!="in" && unit!="ft")
        {
            cout << "Invalid unit entered. Please use cm, m, in, or ft.\n\n";
        }
        else
        {
            cout << "You entered " << number << " " << unit << ".\n";

            if(unit != "m")
            {
                number = convert_to_m(number, unit);
            }

            check_small_large(number);
            sum += number;
            values.push_back(number);
        }
        cout << "\n\nPlease enter a length and its unit:\n";
    }
    sort_and_print(values);

    return 0;
}

double convert_to_m(double num, string unit)
{
    if(unit=="cm")
    {
        cout << "This equates to " << 0.01*num << " metres.\n";
        return 0.01*num;
    }
    else if(unit=="in")
    {
        cout << "This equates to " << 0.0254*num << " metres.\n";
        return 0.0254*num;
    }
    else if(unit=="ft")
    {
        cout << "This equates to " << 0.3048*num << " metres.\n";
        return 0.3048*num;
    }
    return 0;
}

void check_small_large(double num)
{
    if(num <= smallest)
    {
        smallest = num;
        cout << num << " m is the smallest so far.\n";
    }
    if(num >= largest)
    {
        largest = num;
        cout << num << " m is the largest so far.\n";
    }
}

void sort_and_print(vector<double> values)
{
    sort(values.begin(), values.end());

    cout << "\n\nValues in ascending order:\n";
    for(int i=0; i<values.size(); i++)
    {
        cout << "Value " << i+1 << "\t=\t" << values[i] << " m\n";
    }

    cout << "\nSum\t=\t" << sum << " m\n";
}
