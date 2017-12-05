/* Lab_6_part1 */
/* store_temps.cpp */
/*-------------------------------------------------------------------------
Programmer: Aiden Barrett
Date: 04 March 2015
Purpose: Creates a file called 'raw_temps.txt', and fills it with pairs of
values on each line. The first number is the number of hours that have passed
when the reading was taken, and the second value is the temperature at that
time. The temperature values are random, between -10 and +90.
-------------------------------------------------------------------------*/
#include<time.h>
#include<std_lib_facilities.h>

using namespace std;

int main()
{
    srand (time(NULL));
    ofstream out_file("raw_temps.txt");

    for(double i=0;i<50;i++)
    {
        out_file << i+1 << " " << -10+(0.1*(rand()%1000)) << endl;
    }

    cout << "Finished taking Temperature readings.\nOutput file: raw_temps.txt\n";

    return 0;
}
