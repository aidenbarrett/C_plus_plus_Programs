/* Lab_4_part1 */
/* my.cpp */
/*-------------------------------------------------------------------------
Programmer: Aiden Barrett
Date: 18 February 2015
Purpose: Includes the user-written 'my.h', and defines the functions
print_foo() and print().
-------------------------------------------------------------------------*/

#include "my.h"
#include <std_lib_facilities.h>

using namespace std;

int foo;

void print_foo()
{
    cout << "Foo: " << foo << endl;
};

void print(int i)
{
    cout << "i = " << i << endl;
};

