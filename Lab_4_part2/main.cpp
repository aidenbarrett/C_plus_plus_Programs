#include <iostream>
#include <std_lib_facilities.h>

using namespace std;

void swap_v(int, int);
void swap_r(int&, int&);
//void swap_cr(const int&, const int &);

int main()
{
    string select;
    int x = 7;
    int y = 9;
    const int cx = 7;
    const int cy = 9;
    double dx = 7.7;
    double dy = 9.9;

    cout << "Enter 'v', 'r', or 'cr': ";
    cin >> select;
    cout << endl;

    if(select == "v")
    {
        /*
        All instances of swap_v() compile, but none of the variables are modified. This is because
        the variables are being passed by value, therefore disabling the function from modifying
        the original variables, as the function is only passed copies of each variable's value.
        */
        cout << "x=7, y=9";
        swap_v(x,y);
        cout << "\nAfter swap_" << select << "(x,y), x=" << x << ", y=" << y;
        swap_v(7,9);
        cout << "\nAfter swap_" << select << "(7,9), x=" << x << ", y=" << y;

        cout << "\n\ncx=7, cy=9";
        swap_v(cx, cy);
        cout << "\nAfter swap_" << select << "(cx,cy), cx=" << cx << ", cy=" << cy;
        swap_v(7.7,9.9);
        cout << "\nAfter swap_" << select << "(7.7,9.9), cx=" << cx << ", cy=" << cy;

        cout << "\n\ndx=7.7, dy=9.9";
        swap_v(dx, dy);
        cout << "\nAfter swap_" << select << "(dx,dy), dx=" << dx << ", dy=" << dy << endl;
        swap_v(dx, dy);
        cout << "\nAfter swap_" << select << "(dx,dy), dx=" << dx << ", dy=" << dy << endl;
    }
    else if(select == "r")
    {
        /*
        swap_r() only compiles for swap_r(x,y). This is because the function expects to be passed
        2 references to ints, so passing values, doubles, and const ints all cause compiler errors.
        */
        cout << "x=7, y=9";
        swap_r(x,y);
        cout << "\nAfter swap_" << select << "(x,y), x=" << x << ", y=" << y << endl;
        //swap_r(7,9);
        cout << "COMPILE ERROR AT: swap_r(7,9);\n";

        cout << "\n\ncx=7, cy=9\n";
        //swap_r(cx, cy);
        cout << "COMPILE ERROR AT: swap_r(cx, cy);\n";
        //swap_r(7.7,9.9);
        cout << "COMPILE ERROR AT: swap_r(7.7,9.9);\n";

        cout << "\n\ndx=7.7, dy=9.9\n";
        //swap_r(dx, dy);
        cout << "COMPILE ERROR AT: swap_r(dx, dy);\n";
        //swap_r(dx, dy);
        cout << "COMPILE ERROR AT: swap_r(dx, dy);\n";
    }
    else if(select == "cr")
    {
        /*
        swap_cr() does not compile at all. This is because it takes in 2 constant integer references,
        and then attempts to modify their values. Because they are constant, the values cannot be
        changed, leading to the compiler errors.
        */
        cout << "x=7, y=9\n";
        //swap_cr(x,y);
        cout << "COMPILE ERROR AT: swap_cr(x,y);\n";
        //swap_cr(7,9);
        cout << "COMPILE ERROR AT: swap_cr(7,9);\n";

        cout << "\n\ncx=7, cy=9\n";
        //swap_cr(cx, cy);
        cout << "COMPILE ERROR AT: swap_cr(cx, cy);\n";
        //swap_cr(7.7,9.9);
        cout << "COMPILE ERROR AT: swap_cr(7.7,9.9);\n";

        cout << "\n\ndx=7.7, dy=9.9\n";
        //swap_cr(dx, dy);
        cout << "COMPILE ERROR AT: swap_cr(dx, dy);\n";
        //swap_cr(dx, dy);
        cout << "COMPILE ERROR AT: swap_cr(dx, dy);\n";
    }

    cout << "\n\nSee comments in source code for explanation of errors.\n\n";

    return 0;
}

void swap_v(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//void swap_cr(const int& a, const int& b)
//{
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
//}
