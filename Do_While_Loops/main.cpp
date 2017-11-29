#include <iostream>

using namespace std;

int main()
{
    // Do While loops will run the code first before doing the test ie. while(x < 10)...

    int x = 1; // This will run the code once, then check that x
               // is less than or equal to 10, which it is. Loop continues.
    do{
        cout << x << endl;
        x++;
    }while(x <= 10);

    int y = 100; // This will run the code once, then check that y
                 // is less than or equal to 10, which it isn't. Prints y and ends loop.
    do{
        cout << y << endl;
        y++;
    }while(y <= 10);

    return 0;
}
