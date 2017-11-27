#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int y = 10;
    int z = 1;

    int a = 1;
    int number;
    int total = 0;

    while(x <= 10){ // counts up to 10.
        cout << "X = " << x << endl;
        x++;
    }
    while(y >= 1){ // counts down from 10.
        cout << "Y = " << y << endl;
        y--;
    }
    while(z <= 25){ // counts up to 25.
        cout << "Z = " << z << endl;
        z += 2;
    }

    while(a <= 5){ // reads in 5 user inputted numbers and adds the sum of them.
        cin >> number;
        total = total + number;
        a++;
    }
    cout << "Sum of inputted numbers = " << total << endl;

    return 0;
}
