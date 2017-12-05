/* Lab_5 */
/*-------------------------------------------------------------------------
Programmer: Aiden Barrett
Date: 18 February 2015
Purpose: Defines class Name_pairs, with member variables of name (a vector
of strings), age (a vector of doubles), and 4 member functions: read_names(),
read_ages(), print(), and sort().
-------------------------------------------------------------------------*/

#include <std_lib_facilities.h>

using namespace std;

class Name_pairs
{
private:
    vector<string> name;
	vector<double> age;
public:
	void read_names();
	void read_ages();
    void print();
	void sort_pairs();
};

int main()
{
    Name_pairs data;

    data.read_names();
    data.read_ages();
    data.sort_pairs();
    data.print();

    return 0;
}

void Name_pairs::read_names()
{
    string input;
    cout << "Enter first names, with '|' to quit.\n";
    while(cin >> input && input != "|")
    {
        name.push_back(input);
    }
}

void Name_pairs::read_ages()
{
    double input;
    for(unsigned int i=0; i<name.size(); i++)
    {
        cout << "Enter age of " << name[i] << ": ";
        cin >> input;
        age.push_back(input);
    }
}

void Name_pairs::print()
{
    for(unsigned int i=0; i<name.size(); i++)
    {
        cout << "Name: " <<setw(10)<<left<< name[i] << "Age: " << age[i] << endl;
    }
}

void Name_pairs::sort_pairs()
{
    string temp_name;
    double temp_age;
    for (unsigned int i=0; i<name.size(); i++)
    {
        for (unsigned int j=i+1; j<name.size(); j++)
        {
            if (name[i]>name[j])
            {
                temp_name = name[i];
                name[i] = name[j];
                name[j] = temp_name;
                temp_age = age[i];
                age[i] = age[j];
                age[j] = temp_age;
            }
        }
    }
}
