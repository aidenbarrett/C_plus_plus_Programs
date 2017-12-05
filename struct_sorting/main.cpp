/* Lab_6_part2 */
/* temp_stats.cpp */
/*-------------------------------------------------------------------------
Programmer: Aiden Barrett
Date: 04 March 2015
Purpose: Opens the file 'raw_temps.txt' and reads in pairs of values from it.
The values are stored in a vector of 'Reading' structs, with the first value
being stored as the 'hour' value, and the second stored as the 'temperature'
value. Calculates the average temperature, and then sorts the vector of
Readings based on the temperature values. Then calls 'median_temp', which
finds the median temperature value. Finally prints out both the average and
median values to the screen.
-------------------------------------------------------------------------*/
#include<std_lib_facilities.h>

using namespace std;

struct Reading
{
    int hour;
    double temperature;
    Reading(int h, double t) : hour(h), temperature(t) {};
    bool operator < (const Reading& b) const
    {
        return (temperature < b.temperature);
    }
};

double median_temp(const vector<Reading> &);

int main()
{
    vector<Reading> input_data;
    int h;
    double t, average, sum=0, median;

    ifstream in_file("raw_temps.txt");
    if (!in_file)
    {
        cerr << "can't open raw_temps file!!!\n";
        return -1;
    }

    while(in_file >> h >> t)
    {
        input_data.push_back(Reading(h, t));
        sum += t;
    }

    average = sum/input_data.size();
    sort(input_data.begin(), input_data.end());
    median = median_temp(input_data);

    cout << "Average Temperature = " << average << endl;
    cout << "Median Temperature  = " << median << endl;

    return 0;
}

double median_temp(const vector<Reading> &data)
{
    if(data.size()%2 == 0)
    {
        return ((data[(data.size()/2)-1].temperature + data[data.size()/2].temperature)/2);
    }
    else
    {
        return (data[data.size()/2].temperature);
    }
}

