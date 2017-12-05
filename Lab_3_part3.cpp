/* Lab_4_part3 */
/*-------------------------------------------------------------------------
Programmer: Aiden Barrett
Date: 18 February 2015
Purpose: Defines 3 namespaces: X, Y, and Z, each with a 'var' and a print()
function. main() gives an example of how a programmer could manage writing
code while ensuring that they are using the correct namespaces to access the
appropriate variable and function.
-------------------------------------------------------------------------*/

#include "std_lib_facilities.h"

using namespace std;

namespace X
{
    int var;
    void print()
    {
        cout << "X's var = " << var << endl;
    }
};

namespace Y
{
    int var;
    void print()
    {
        cout << "Y's var = " << var << endl;
    }
};

namespace Z
{
    int var;
    void print()
    {
        cout << "Z's var = " << var << endl;
    }
};

int main()
{
    X::var = 7;
    X::print();
    using namespace Y;
    var = 9 ;
    print();
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();
    }
    print();
    X::print();

    return 0;
}
